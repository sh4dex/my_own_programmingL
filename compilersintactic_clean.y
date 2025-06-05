/** Seccion de definiciones **/
%{
#include "symbol_table.h"
#include <stdio.h>
extern int yylex(void);
extern char *yytext;
extern int yylineno;
void yyerror(char *s);
extern FILE *yyin;

void doReduction(const char* op, const char* var, int idx) {
    if (idx >= 0)
        printf("Reducción: %s(%s[%d])\n", op, var, idx);
    else
        printf("Reducción: %s(%s)\n", op, var);
}
%}

%union {
    int intval;
    float floatval;
    char *strval;
    int boolval;
}

%token <intval> DIG 
%token <strval> IFR
%token <strval> STG
%token <floatval> FLT
%left PLUS MINUS
%left OR
%left AND
%left EQ DIFF
%left LT GT LEQ GEQ
%right NOT
%left LPAREN RPAREN

%token LBRACKET RBRACKET
%token SUM PROD MAX MIN
%left MULT DIV MOD

%token TRUE FALSE STR INT DEC BOOLEAN DWHILE WHILE EWHILE FOR EFOR TIF EIF ELSE FUNCTION RET SWTC ESAC KAERB DEF YRT HCTAC 
%token ASSIGN EQ DIFF LT GT LEQ GEQ AND NOT OR MOD LPAREN RPAREN LBRACE RBRACE COL COLON COMMA
%type <floatval> element
%type <floatval> reduction
%type <floatval> value

%start program

%%

program:
      /* vacío */
    | program statement
    ;

statement:
      declaration
    | initialization
    | asignation
    | if
    | while
    | do-while
    | for
    | switch
    | try-catch
    | function
    ;

                    
value:
     DIG      { $$ = (float)$1; }
    | FLT
    | reduction
    | element
    | LPAREN value RPAREN { $$ = $2; }
    | value PLUS value      { $$ = $1 + $3; }
    | value MINUS value     { $$ = $1 - $3; }
    | value MULT value      { $$ = $1 * $3; }
    | value DIV value       { if ($3 == 0) { yyerror("División por cero"); $$ = 0; } else { $$ = $1 / $3; } }
    | value MOD value       { $$ = (int)$1 % (int)$3; }
    ;

element:
    IFR LBRACKET DIG RBRACKET {
        printf("Acceso a arreglo: %s[%d]\n", $1, $3);
        $$ = 42.0; // ejemplo
    }
  | IFR LBRACKET DIG RBRACKET LBRACKET DIG RBRACKET {
        printf("Acceso a matriz: %s[%d][%d]\n", $1, $3, $6);
        $$ = 99.0; // ejemplo
    };

reduction:
      SUM LPAREN IFR RPAREN           { doReduction("sum", $3, -1); $$ = 0.0; }
    | PROD LPAREN IFR RPAREN          { doReduction("prod", $3, -1); $$ = 0.0; }
    | MAX LPAREN IFR RPAREN           { doReduction("max", $3, -1); $$ = 0.0; }
    | MIN LPAREN IFR RPAREN           { doReduction("min", $3, -1); $$ = 0.0; }
    | SUM LPAREN IFR LBRACKET DIG RBRACKET RPAREN   { doReduction("sum", $3, $5); $$ = 0.0; }
    | PROD LPAREN IFR LBRACKET DIG RBRACKET RPAREN  { doReduction("prod", $3, $5); $$ = 0.0; }
    | MAX LPAREN IFR LBRACKET DIG RBRACKET RPAREN   { doReduction("max", $3, $5); $$ = 0.0; }
    | MIN LPAREN IFR LBRACKET DIG RBRACKET RPAREN   { doReduction("min", $3, $5); $$ = 0.0; }
    ;


boolean:				TRUE
                    |	FALSE	
                    ;
                                
declaration:			STR IFR COL {addSymbol($2, ST);}
                    |	INT IFR COL {addSymbol($2, IN);}
                    |	DEC IFR COL {addSymbol($2, FL);}
                    |	BOOLEAN IFR COL {addSymbol($2, BO);}
                    |	DEC IFR LBRACKET DIG RBRACKET COL
                    |	DEC IFR LBRACKET DIG RBRACKET LBRACKET DIG RBRACKET COL
                    ;
        
initialization:			STR IFR ASSIGN STG COL {addSymbol($2, ST); setStringValue($2, $4);}
                    |	INT IFR ASSIGN DIG COL {addSymbol($2, IN); setIntValue($2,$4);}
                    |	DEC IFR ASSIGN FLT COL {addSymbol($2, FL); setFloatValue($2, $4);}
                    |	BOOLEAN IFR ASSIGN TRUE COL {addSymbol($2, BO); setIntValue($2,1);}
                    |	BOOLEAN IFR ASSIGN FALSE COL {addSymbol($2, BO); setIntValue($2,0);}
                    ;

asignation:				IFR	ASSIGN STG COL	{setStringValue($1,$3);}
                    |   IFR ASSIGN element COL { setIntValue($1, $3); }
                    |	IFR	ASSIGN DIG COL {setIntValue($1,$3);}
                    |	IFR	ASSIGN FLT COL	{setFloatValue($1,$3);}
                    |	IFR	ASSIGN TRUE COL {setIntValue($1,1);}
                    |	IFR	ASSIGN FALSE COL {setIntValue($1,0);}
                    ;

asignation_function:	IFR	ASSIGN value
                    |	IFR	ASSIGN boolean 
                    ;
                    
condition:				value EQ value
                    |	boolean EQ boolean
                    |	value DIFF value
                    |	boolean DIFF boolean
                    |	value LT value
                    |	value GT value
                    |	value LEQ value
                    |	value GEQ value
                    |	IFR EQ value
                    |	IFR EQ IFR
                    |	IFR LT value
                    |	IFR GT value
                    |	IFR LEQ value
                    |	IFR GEQ value
                    |	IFR LT IFR
                    |	IFR GT IFR
                    |	IFR LEQ IFR
                    |	IFR GEQ IFR
                    ;

conditioncomp:			condition AND condition
                    |	condition OR condition
                    |	NOT LPAREN condition RPAREN AND condition
                    |	condition AND NOT LPAREN condition RPAREN 
                    |	NOT LPAREN condition RPAREN OR condition
                    |	condition OR NOT LPAREN condition RPAREN 
                    ;

ifcondition:			LPAREN condition RPAREN
                    |	LPAREN conditioncomp RPAREN
                    |	LPAREN boolean RPAREN
                    ;
                    
body:					LBRACE bodies RBRACE     
                    ;

bodies:				    body_stmt bodies
                    | 	body_stmt
                    ;

body_stmt:		      	RET value COL
                    | 	KAERB COL
                    | 	if                       
                    | 	while 
                    | 	do-while                   
                    | 	for                      
                    | 	switch                   
                    | 	try-catch                
                    | 	function  
                    | 	initialization               
                    ;
                    
elsebody:				LBRACE RET value COL RBRACE
                    |	LBRACE KAERB COL RBRACE
                    ;	
                    
if:						TIF ifcondition body EIF
                    |	TIF ifcondition body EIF ELSE elsebody
                    ;

whilecondition:			LPAREN condition RPAREN		
                    |	LPAREN conditioncomp RPAREN
                    | 	LPAREN boolean RPAREN
                    ;

while:					WHILE whilecondition body EWHILE
                    ;
                    
do-while:				DWHILE body while
                    ;

for:					FOR LPAREN INT IFR ASSIGN DIG COL condition COL for_asignation COL RPAREN body EFOR
                    |	FOR LPAREN DEC IFR ASSIGN FLT COL condition COL asignation RPAREN LBRACE body RBRACE EFOR

for_asignation:			IFR PLUS PLUS
                    |	IFR MINUS MINUS
                    ;

switch: 				SWTC LPAREN IFR RPAREN LBRACE cases RBRACE
                    ;

cases:					case
                    | 	cases case
                    ;

case:					ESAC value COLON body KAERB COL
                    |   DEF COLON body COL
                    ;
try-catch:				YRT body HCTAC LPAREN IFR RPAREN body
                    ;
                    
function:				FUNCTION IFR LPAREN parameters RPAREN body {addSymbol($2, FN);setFnValue($2, $2);}
                    |	FUNCTION IFR LPAREN RPAREN body {addSymbol($2, FN);setFnValue($2, $2);}
                    ;
parameters:				IFR
                    |	asignation_function
                    |	parameters COMMA IFR
                    |   parameters COMMA asignation_function
                    ;

%%

void yyerror(char *s) {
    printf("Error sintáctico: %s en la linea: %i\n", s, yylineno);
}

int main(int argc, char **argv){
    printf("Running... \n");
    if(argc > 1){
        yyin = fopen(argv[1], "rt");
    }else{
        yyin = stdin;
    }
    yyparse();
    return 0;
}