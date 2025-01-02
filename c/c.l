%option noyywrap

digit[0-9]
letter[a-zA-Z]
ID[a-zA-Z][a-zA-Z0-9]*
WHITESPACE[ ]
quebra[\n]
TAB[\t]
STR \"[^\"]*\"

%{
    #define YY_DECL extern "C" int yylex()
    #include<string>
    #include<iostream>
    using namespace std;
    FILE *out ;
	int linha;
%}
%%

int|void|while|if|else|return {fprintf(out,"<%s> ", yytext);} 
"+"|"-"|"*"|"/"|"<"|"<="|">"|">="|"=="|"!="|"="|";"|","|"("|")"|"["|"]"|"{"|"}"  {fprintf(out,"<%s> ", yytext);} 
{ID}+ {fprintf(out,"<id, %s> ", yytext);}
{STR} {fprintf(out,"<str, %s> ", yytext);}
{digit} {fprintf(out,"<num, %s> ", yytext);}

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
