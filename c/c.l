%option noyywrap

NUM[0-9]+(\.[0-9]*)?
ID[a-zA-Z_][a-zA-Z0-9_]*
NEWLINE[\n]
STR \"[^\"]*\"

TAB[\t]
CHAR[a-zA-Z]
WHITESPACE[ ]

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

%%

{NEWLINE}
int|void|while|if|else|return {fprintf(out,"(%d, KEY, %s) \n", yylineno, yytext);} 
"+"|"-"|"*"|"/"|"<"|"<="|">"|">="|"=="|"!="|"="|";"|","|"("|")"|"["|"]"|"{"|"}"  {fprintf(out,"(%d, SYM, \"%s\")\n", yylineno, yytext);} 
"|"|"++"|"--"|"+="|"-="|"#"|"%"|"&"|"~"|"^"|"!"|"&&"|"||"|">>"|"<<"|":"|"?"|"->"  {fprintf(out,"(%d, SYM, \"%s\")\n", yylineno, yytext);} 
{STR} {fprintf(out,"(%d, STR, %s)\n",yylineno, yytext);}
{NUM} {fprintf(out,"(%d, NUM, %s) \n",yylineno, yytext);}

{ID}+ {
  int index = getOrAddSymbolIndex(yytext);
  fprintf(out,"(%d, ID, %d, %s) \n",yylineno, index, yytext);
}

\/\/[^\n]*            ;  // Ignora comentários de uma única linha (começam com `//`)
\/\*([^*]|\*+[^*/])*\*\/ ;  // Ignora comentários de múltiplas linhas (entre `/*` e `*/`)

%%
int getOrAddSymbolIndex(string str) {
    for (size_t index = 0; index < symbolTable.size(); index++) {
        if (symbolTable[index] == str) {
            return index +1; // Retorna o índice se a string já existe
        }
    }

    // Adiciona a string à tabela, caso não exista
    symbolTable.push_back(str);

    return symbolTable.size(); // Retorna o índice da nova string
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
    return 0;
}
