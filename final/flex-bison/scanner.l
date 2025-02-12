%{
#include "parser.tab.h"
%}

%option noyywrap
%option yylineno
%state COMMENT
%state STRING_STATE

NEWLINE                [\n]
QUOTE                  ["]
DIRECTIVE              ^#.*$
LINE_COMMENT           \/\/[^\n]*
BEGIN_BLOCK_COMMENT    "/*"
END_BLOCK_COMMENT      "*/"
BLOCK_COMMENT_BODY     [^*\/]+

KEYWORD                "alignas"|"alignof"|"auto"|"bool"|"break"|"case"|"char"|"const"|"constexpr"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"false"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"nullptr"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"static_assert"|"struct"|"switch"|"thread_local"|"true"|"typedef"|"typeof"|"typeof_unqual"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Atomic"|"_BitInt"|"_Complex"|"_Decimal128"|"_Decimal32"|"_Decimal64"|"_Generic"|"_Lengthof"|"_Noreturn"
IDENTIFIER             [a-zA-Z_][a-zA-Z0-9_]*
CONSTANT               [0-9]+(\.[0-9]*)?
STRING_LITERAL         [^"]*\"
PUNCTUATOR             "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|"::"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"|"##"|"<:"|":>"|"<%"|"%>"|"%:"|"%:%:"


%%

%{ 
  /* =================================== */
  /*          DEFAULT BEHAVIOR           */
  /* =================================== */ 
%}

{KEYWORD} {
  yylval.string = strdup(yytext);
  return KEYWORD;
}

{IDENTIFIER}+ {
  yylval.id = strdup(yytext);  
  return IDENTIFIER;
}

{CONSTANT} {
  yylval.num = atoi(yytext); 
  return CONSTANT;
}

<STRING_STATE>{STRING_LITERAL} { 
  BEGIN INITIAL;
  yylval.string = strdup(yytext);  
  return STRING_LITERAL;
}

{PUNCTUATOR} {
  yylval.string = strdup(yytext);  
  return PUNCTUATOR;
}

%{ 
  /* =================================== */
  /*          ERROR HANDLING             */
  /* =================================== */ 
%}

{BEGIN_BLOCK_COMMENT} { BEGIN COMMENT; }
{END_BLOCK_COMMENT}   { BEGIN INITIAL; }
{QUOTE}               { BEGIN STRING_STATE; }


{NEWLINE}                         // Ignora quebras de linha
{DIRECTIVE}                       // Ignora diretivas de pré-processamento - palavras que começam com #
{LINE_COMMENT}                    // Ignora comentários de uma única linha (começam com `//`)
<COMMENT>{BLOCK_COMMENT_BODY}     // Ignora qualquer coisa após '/*' até encontrar '*/'


<COMMENT><<EOF>> {                // Gera um erro informando que o comentário não foi fechado.
    fprintf(stderr, "Erro: Comentário não fechado na linha %d\n", yylineno);
    return 0;
}

<STRING_STATE><<EOF>> {           // Gera um erro informando que a string não foi fechada.
    fprintf(stderr, "Erro: String não fechada na linha %d\n", yylineno);
    return 0;
}

%%

