%option noyywrap

digit[0-9]
letter[a-zA-Z]
ID[a-zA-Z][a-zA-Z0-9]*
WHITESPACE[ ]
NEWLINE[\n]
TAB[\t]
STR \"[^\"]*\"

%{
  #include<string>
  #include<iostream>
  using namespace std;
  FILE *out ;
	int linha;
%}
%option yylineno

%%

{NEWLINE}

int|void|while|if|else|return {fprintf(out,"(%d, KEY, %s) \n", yylineno, yytext);} 
"+"|"-"|"*"|"/"|"<"|"<="|">"|">="|"=="|"!="|"="|";"|","|"("|")"|"["|"]"|"{"|"}"  {fprintf(out,"(%d, SYM, \"%s\")\n", yylineno, yytext);} 
{ID}+ {fprintf(out,"(%d, ID, %s) \n",yylineno, yytext);}
{STR} {fprintf(out,"(%d, STR, %s)\n",yylineno, yytext);}
{digit} {fprintf(out,"(%d, NUM, %s) \n",yylineno, yytext);}

%%
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
