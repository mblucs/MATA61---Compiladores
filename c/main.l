%option noyywrap

NUM[0-9]+(\.[0-9]*)?
ID[a-zA-Z_][a-zA-Z0-9_]*
NEWLINE[\n]
STR [^"]*\"

TAB[\t]
CHAR[a-zA-Z]
WHITESPACE[ ]
QUOTE["]

%{
  #include<string>
  #include<iostream>
  #include <vector>  
  using namespace std;

  FILE *out ;
	int linha;

  // Tabela de símbolos
  vector<string> symbolTable;
  int getOrAddSymbolIndex(string id);

%}
%option yylineno
%state COMMENT
%state STRING

%%
"/*"    { BEGIN COMMENT; }
"*/"    { BEGIN INITIAL; }

{QUOTE}  { BEGIN STRING; }
<STRING>{STR}  { BEGIN INITIAL; fprintf(out, "(%d, STR, \"%s)\n", yylineno, yytext);} //TODO: arrumar aspas

{NEWLINE}
int|void|while|if|else|return {fprintf(out, "(%d, KEY, %s) \n", yylineno, yytext);} 
"+"|"-"|"*"|"/"|"<"|"<="|">"|">="|"=="|"!="|"="|";"|","|"("|")"|"["|"]"|"{"|"}" {fprintf(out, "(%d, SYM, \"%s\")\n", yylineno, yytext);}  
"|"|"++"|"--"|"+="|"-="|"*="|"/="|"#"|"%"|"&"|"~"|"^"|"!"|"&&"|"||"|">>"|"<<"|":"|"?"|"->" {fprintf(out, "(%d, SYM, \"%s\")\n", yylineno, yytext);}

{NUM} {fprintf(out, "(%d, NUM, %s) \n", yylineno, yytext);}

{ID}+ {
  int index = getOrAddSymbolIndex(yytext);
  fprintf(out, "(%d, ID, %d) \n", yylineno, index);
}

\/\/[^\n]* ;                      // Ignora comentários de uma única linha (começam com `//`)
\/\*([^*]|\*+[^*/])*\*\/ ;        // Ignora comentários de múltiplas linhas (entre `/*` e `*/`)
^#.*$ ;                           // Ignora diretivas de pré-processamento - palavras que começam com #


<COMMENT>[^*]+                    // Ignora qualquer coisa após '/*' até encontrar '*/'
<COMMENT><<EOF>> {                // Gera um erro informando que o comentário não foi fechado.
    fprintf(stderr, "Erro: Comentário não fechado na linha %d\n", yylineno);
    fprintf(out, "\nErro: Comentário não fechado na linha %d\n", yylineno);
    return 0;
}

<STRING><<EOF>> {                 // Gera um erro informando que o comentário não foi fechado.
    fprintf(stderr, "Erro: String não fechada na linha %d\n", yylineno);
    fprintf(out, "\nErro: String não fechada na linha %d\n", yylineno);
    return 0;
}


%%
int getOrAddSymbolIndex(string str) {
    for (size_t index = 0; index < symbolTable.size(); index++) {
        if (symbolTable[index] == str) {
            return index +1;      // Retorna o índice se a string já existe
        }
    }

    
    symbolTable.push_back(str);   // Adiciona a string à tabela, caso não exista

    return symbolTable.size();    // Retorna o índice da nova string
}

void printSymbolTable(){
  fprintf(out, "\nTabela de Símbolos: \n");
  for (size_t index = 0; index < symbolTable.size(); index++) {
    fprintf(out, "%zu  %s\n", index+1, symbolTable[index].c_str());
  }
}

int main(int argc, char *argv[]){
    FILE *arquivo = fopen(argv[1],"r");
    if (!arquivo) {
      cout << "Arquivo inexistente" << endl;
      return -1;
    }
    yyin = arquivo;
    out = fopen(argv[2],"w");
    yylex();
    printSymbolTable();
    return 0;
}
