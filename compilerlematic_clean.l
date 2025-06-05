%{
#include "compilersintactic.tab.h"
extern int yylineno;
%}

/** These are the language rules **/
identificador 	[a-z][a-zA-Z0-9]{0,10}
entero        	-?[0-9]{0,10}  
float 			-?[0-9]+\.[0-9]+
string      	\'[^\']*\' 

%%
"assert" {return ASSERT;}
"fact"          {return TRUE;}
"fake"         {return FALSE;}
"ent"           {return INT;}
"bin"       {return BOOLEAN;}
"dec"         {return DEC;}
"word"        {return STR;}
"fi"            {return TIF;}
"fin"        {return EIF;}
"other"          {return ELSE;}
"make"      {return DWHILE;}
"loop"         {return WHILE;}
"end-loop"     {return EWHILE;}
"range"           {return FOR;}
"done"       {return EFOR;} //end-for
"res"        {return RET;} //return
"funct"      {return FUNCTION;} //function
"hctiw"        {return SWTC;} //switch
"esac"          {return ESAC;} //case
"jump"         {return KAERB;} //break
"def"       {return DEF;}
"yrt"           {return YRT;} //try
"hctac"         {return HCTAC;} //catch
"sum"   {return SUM;}
"prod"  {return PROD;}
"max"   {return MAX;}
"min"   {return MIN;}
"["             {return LBRACKET;}
"]"             {return RBRACKET;}
"+"            {return PLUS;}
"-"            {return MINUS;}
"@"             {return MULT;}
"++"            {return INCR;}
"--"            {return DECR;}
"/"             {return DIV;}
"%"             {return MOD;}
"="             {return ASSIGN;}
"=="            {return EQ;}
"!="            {return DIFF;}
"!"             {return NOT;}
"<"             {return LT;}
">"             {return GT;}
"<="            {return LEQ;}
">="            {return GEQ;}
"&&"            {return AND;}
"||"            {return OR;}
"("             {return LPAREN;}
")"             {return RPAREN;}
"{"             {return LBRACE;}
"}"             {return RBRACE;}
"*"             {return COL;}
{identificador} {yylval.strval = strdup(yytext); return IFR; }
{entero}        {yylval.intval = atoi(yytext);return INT;}
{float}         {yylval.floatval = atof(yytext);return DEC;}
{string}        {yylval.strval = strdup(yytext);return STR;}
[\n]            {yylineno++;}
[ \t]           {/* Ignorar espacios */}
.               {printf("Error lexico token desconocido: ' %s ' en la linea: %i\n", yytext, yylineno);}
%%
/** User code section **/
int yywrap (){
    return 1;
}
