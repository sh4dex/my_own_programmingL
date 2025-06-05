/** Seccion de definiciones **/
%{
#include "compilersintactic_clean.tab.h"
extern int yylineno;
%}

/** Seccion de reglas **/
identificador 	[a-z][a-zA-Z0-9]{0,10}
entero        	-?[0-9]{0,10}  
float 			-?[0-9]+\.[0-9]+
string      	\'[^\']*\' 

%%
"facto"   		{return TRUE;} //true
"fake"    		{return FALSE;} //false
"word"      		{return STR; } //string
"ent"			{return INT;} //int
"dec"			{return DEC;} //float
"bin"			{return BOOLEAN;} //boolean
"make"				{return DWHILE;} //dowhile
"loop"				{return WHILE;}//while
"end-loop"  		{return EWHILE;}//end-while
"range"			{return FOR;} //for
"done"  		{return EFOR;} //end for
"fi"			{return TIF;} //if
"fin" 	{return EIF;} //endif
"other" 		{return ELSE;} //else
"funct" 		{return FUNCTION;} //function
"res"				{return RET;} //return
"hctiw"			{return SWTC;} //switch
"esac"			{return ESAC;} //case
"jump"			{return KAERB;} //break
"def"			{return DEF;} //default
"yrt"			{return YRT;} //try
"hctac"				{return HCTAC;} //CATCH
=					{return ASSIGN; }
== 					{return EQ;}
"!="				{return DIFF;}
"<"					{return LT;}
">"					{return GT;}
"<="				{return LEQ;}
">="				{return GEQ;}
\&\&				{return AND;}
\!					{return NOT;}
\|\|				{return OR;}
\+					{return PLUS;}
\-					{return MINUS;}
\@					{return MULT;}
\/					{return DIV;}
\%					{return MOD;}
\(					{return LPAREN;}
\)					{return RPAREN;}
\{					{return LBRACE;}
\}					{return RBRACE;}
"["             {return LBRACKET;}
"]"             {return RBRACKET;}
\:					{return COLON;}
\,					{return COMMA;}
\*  				{return COL; }
"sum"   { return SUM; } //operaciones matrices
"prod"  { return PROD; }
"max"   { return MAX; }
"min"   { return MIN; }
[\n]				{yylineno++;}
[ \t]       		{/* Ignorar espacios */}
\/\/[^\n]*      {/* Ignorar comentarios de línea */}
{identificador}   	{yylval.strval = strdup(yytext); return IFR; }
{entero}      		{yylval.intval = atoi(yytext);return DIG;}
{float}				{yylval.floatval = atof(yytext);return FLT;}
{string}			{yylval.strval = strdup(yytext);return STG; }
.             		{printf("Error lexico token desconocido: ' %s ' en la linea: %i\n", yytext, yylineno);}



%%
/** Seccion de codigo de usuario **/
int yywrap (){
	return 1;
}
