%{
  /* Referência: https://open-std.org/JTC1/SC22/WG14/www/docs/n3435.pdf - Seção 6.4.*/
%}

%option noyywrap
%option yylineno
%state COMMENT
%state STRING_STATE

NEWLINE        [\n]
QUOTE          ["]
BEGIN_COMMENT  "/*"
END_COMMENT    "*/"

KEYWORD        "alignas"|"alignof"|"auto"|"bool"|"break"|"case"|"char"|"const"|"constexpr"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"false"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"nullptr"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"static_assert"|"struct"|"switch"|"thread_local"|"true"|"typedef"|"typeof"|"typeof_unqual"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Atomic"|"_BitInt"|"_Complex"|"_Decimal128"|"_Decimal32"|"_Decimal64"|"_Generic"|"_Lengthof"|"_Noreturn"
IDENTIFIER     [a-zA-Z_][a-zA-Z0-9_]*
CONSTANT       [0-9]+(\.[0-9]*)?
STRING_LITERAL [^"]*\"
PUNCTUATOR     "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|"::"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"|"##"|"<:"|":>"|"<%"|"%>"|"%:"|"%:%:"

%{
  #include <string>
  #include <iostream>
  #include <vector>  
  using namespace std;

  FILE *out ;
	int linha;

  // Tabela de símbolos
  vector<string> symbolTable;
  int getOrAddSymbolIndex(string id);
%}

%%

%{ 
  /* =================================== */
  /*          DEFAULT BEHAVIOR           */
  /* =================================== */ 
%}

{KEYWORD} {
  fprintf(out, "(%d, KEY, %s) \n", yylineno, yytext);
}

{IDENTIFIER}+ {
  int index = getOrAddSymbolIndex(yytext);
  fprintf(out, "(%d, ID, %d) \n", yylineno, index);
}

{CONSTANT} {
  fprintf(out, "(%d, CONST, %s) \n", yylineno, yytext);
}

<STRING_STATE>{STRING_LITERAL} { 
  BEGIN INITIAL; 
  fprintf(out, "(%d, STR, \"%s)\n", yylineno, yytext); 
}

{PUNCTUATOR} {
  fprintf(out, "(%d, PUNCT, \"%s\")\n", yylineno, yytext);
}

%{ 
  /* =================================== */
  /*          ERROR HANDLING             */
  /* =================================== */ 
%}

{BEGIN_COMMENT} { BEGIN COMMENT; }
{END_COMMENT}   { BEGIN INITIAL; }
{QUOTE}         { BEGIN STRING_STATE; }


{NEWLINE}                        // Ignora quebras de linha
\/\/[^\n]*                       // Ignora comentários de uma única linha (começam com `//`)
<COMMENT>[^*]+                   // Ignora qualquer coisa após '/*' até encontrar '*/'
^#.*$                            // Ignora diretivas de pré-processamento - palavras que começam com #


<COMMENT><<EOF>> {                // Gera um erro informando que o comentário não foi fechado.
    fprintf(stderr, "Erro: Comentário não fechado na linha %d\n", yylineno);
    fprintf(out, "\nErro: Comentário não fechado na linha %d\n", yylineno);
    return 0;
}

<STRING_STATE><<EOF>> {           // Gera um erro informando que a string não foi fechada.
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
    FILE *arquivo = fopen(argv[1], "r");
    if (!arquivo) {
      cout << "Arquivo inexistente" << endl;
      return -1;
    }
    yyin = arquivo;
    out = fopen(argv[2], "w");
    yylex();
    printSymbolTable();
    return 0;
}
