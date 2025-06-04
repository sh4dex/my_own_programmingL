%start program

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
extern char *yytext;
extern int yylineno;
extern FILE *yyin;
extern int yylex(void);
void yyerror(char *s);
%}

%union {
    int intval;
    float floatval;
    char *strval;
    int boolval;
}

%token <intval> INT
%token <floatval> DEC
%token <strval> STR
%token <strval> IFR
%token LBRACKET RBRACKET
%token BOOLEAN
%token MAKE LOOP ENDLOOP
%token TRUE FALSE
%token TIF EIF ELSE DWHILE WHILE EWHILE FOR EFOR RET FUNCTION SWTC ESAC KAERB DEF YRT HCTAC
%token SUM PROD MAX MIN
%token INCR DECR
%token PLUS MINUS MULT DIV MOD ASSIGN EQ DIFF NOT LT GT LEQ GEQ AND OR LPAREN RPAREN LBRACE RBRACE COL

%left PLUS MINUS
%left MULT DIV MOD

%type <intval> operation_int
%type <floatval> operation_float
%type <intval> reduction

%%

program:
    statement_list
;

statement_list:
      /* vacío */
    | statement statement_list
    ;

statement:
      declaration
    | initialization
    | asignation
    | whileloop
    | if
    | while
    | do_while
    | for
    | switch
    | try_catch
    | function
    ;

value:
      STR
    | INT
    | DEC
    | reduction
    ;

boolean:
      TRUE
    | FALSE
    ;

declaration:
      STR IFR COL {newSymbolToTable($2, ST);}
    | INT IFR COL {newSymbolToTable($2, IN);}
    | DEC IFR COL {newSymbolToTable($2, FL);}
    | BOOLEAN IFR COL {newSymbolToTable($2, BO);}
    | STR IFR LBRACKET INT RBRACKET COL { /* vector string */ }
    | INT IFR LBRACKET INT RBRACKET COL { /* vector int */ }
    | DEC IFR LBRACKET INT RBRACKET COL { /* vector float */ }
    | BOOLEAN IFR LBRACKET INT RBRACKET COL { /* vector bool */ }
    | STR IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL { /* matriz string */ }
    | INT IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL { /* matriz int */ }
    | DEC IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL { /* matriz float */ }
    | BOOLEAN IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL { /* matriz bool */ }
    ;

initialization:
      STR IFR ASSIGN STR COL {newSymbolToTable($2, ST); setStringValue($2, $4);}
    | INT IFR ASSIGN INT COL {newSymbolToTable($2, IN); setintValue($2, $4);}
    | DEC IFR ASSIGN DEC COL {newSymbolToTable($2, FL); setfloatValue($2, $4);}
    | BOOLEAN IFR ASSIGN TRUE COL {newSymbolToTable($2, BO); setBooleanValue($2, 1);}
    | BOOLEAN IFR ASSIGN FALSE COL {newSymbolToTable($2, BO); setBooleanValue($2, 0);}
    | INT IFR ASSIGN operation_int COL {newSymbolToTable($2, IN); setintValue($2, $4);}
    | DEC IFR ASSIGN operation_float COL {newSymbolToTable($2, FL); setfloatValue($2, $4);}
    ;

asignation:
      IFR ASSIGN STR COL {setStringValue($1, $3);}
    | IFR ASSIGN INT COL {setintValue($1, $3);}
    | IFR ASSIGN DEC COL {setfloatValue($1, $3);}
    | IFR ASSIGN TRUE COL {setBooleanValue($1, 1);}
    | IFR ASSIGN FALSE COL {setBooleanValue($1, 0);}
    | IFR ASSIGN operation_int COL {setintValue($1, $3);}
    | IFR ASSIGN operation_float COL {setfloatValue($1, $3);}
    ;

operation_int:
      operation_int PLUS operation_int   { $$ = $1 + $3; }
    | operation_int MINUS operation_int  { $$ = $1 - $3; }
    | operation_int MULT operation_int   { $$ = $1 * $3; }
    | operation_int DIV operation_int    { $$ = ($3 == 0) ? (yyerror("División por cero"), 0) : $1 / $3; }
    | operation_int MOD operation_int    { $$ = $1 % $3; }
    | LPAREN operation_int RPAREN        { $$ = $2; }
    | INT                                { $$ = $1; }
    | IFR { 
        DataType t; 
        int *val = getVal($1, &t); 
        if (val && t == IN) $$ = *val; 
        else { yyerror("Variable entera no declarada o tipo incorrecto"); $$ = 0; }
      }
    ;

operation_float:
      operation_float PLUS operation_float   { $$ = $1 + $3; }
    | operation_float MINUS operation_float  { $$ = $1 - $3; }
    | operation_float MULT operation_float   { $$ = $1 * $3; }
    | operation_float DIV operation_float    { $$ = ($3 == 0) ? (yyerror("División por cero"), 0) : $1 / $3; }
    | operation_float MOD operation_float    { $$ = (int)$1 % (int)$3; }
    | LPAREN operation_float RPAREN         { $$ = $2; }
    | DEC                                   { $$ = $1; }
    | IFR { 
        DataType t; 
        float *val = getVal($1, &t); 
        if (val && t == FL) $$ = *val; 
        else { yyerror("Variable decimal no declarada o tipo incorrecto"); $$ = 0; }
      }
    ;

reduction:
      SUM LPAREN IFR RPAREN { $$ = sumVectorInt($3); }
    | PROD LPAREN IFR RPAREN { $$ = prodVectorInt($3); }
    | MAX LPAREN IFR RPAREN { $$ = maxVectorInt($3); }
    | MIN LPAREN IFR RPAREN { $$ = minVectorInt($3); }
    | SUM LPAREN IFR LBRACKET INT RBRACKET RPAREN   { /* suma fila/columna de matriz */ }
    | PROD LPAREN IFR LBRACKET INT RBRACKET RPAREN  { /* producto fila/columna de matriz */ }
    | MAX LPAREN IFR LBRACKET INT RBRACKET RPAREN   { /* máximo fila/columna de matriz */ }
    | MIN LPAREN IFR LBRACKET INT RBRACKET RPAREN   { /* mínimo fila/columna de matriz */ }
    ;

condition:
      value EQ value
    | boolean EQ boolean
    | value DIFF value
    | boolean DIFF boolean
    | value LT value
    | value GT value
    | value LEQ value
    | value GEQ value
    | IFR EQ value
    | IFR EQ IFR
    | IFR LT value
    | IFR GT value
    | IFR LEQ value
    | IFR GEQ value
    | IFR LT IFR
    | IFR GT IFR
    | IFR LEQ IFR
    | IFR GEQ IFR
    ;

conditioncomp:
      condition AND condition
    | condition OR condition
    | NOT LPAREN condition RPAREN AND condition
    | condition AND NOT LPAREN condition RPAREN
    | NOT LPAREN condition RPAREN OR condition
    | condition OR NOT LPAREN condition RPAREN
    ;

ifcondition:
      LPAREN condition RPAREN
    | LPAREN conditioncomp RPAREN
    | LPAREN boolean RPAREN
    ;

body:
       LBRACE { enterScope(); }
      bodies
      RBRACE { exitScope(); }
    ;

bodies:
      /* vacío */
    | body_stmt bodies
    ;

whileloop:
    DWHILE body WHILE LPAREN condition RPAREN body EWHILE
;

body_stmt:
      RET value COL
    | KAERB COL
    | if
    | while
    | whileloop
    | do_while
    | for
    | switch
    | try_catch
    | function
    | initialization
    | asignation
    ;

elsebody:
      LBRACE RET value COL RBRACE
    | LBRACE KAERB COL RBRACE
    ;

if:
      TIF ifcondition body EIF
    | TIF ifcondition body EIF ELSE elsebody
    ;

whilecondition:
      LPAREN condition RPAREN
    | LPAREN conditioncomp RPAREN
    | LPAREN boolean RPAREN
    ;

while:
      WHILE whilecondition body EWHILE
    ;

do_while:
      DWHILE body while
    ;

for:
      FOR LPAREN INT IFR ASSIGN INT COL condition COL for_asignation COL RPAREN body EFOR
    | FOR LPAREN DEC IFR ASSIGN DEC COL condition COL asignation RPAREN LBRACE body RBRACE EFOR
    ;

for_asignation:
      IFR PLUS PLUS
    | IFR MINUS MINUS
    ;

switch:
      SWTC LPAREN IFR RPAREN LBRACE cases RBRACE
    ;

cases:
      case
    | cases case
    ;

case:
      ESAC value COL body KAERB COL
    | DEF COL body COL
    ;

try_catch:
      YRT body HCTAC LPAREN IFR RPAREN body
    ;

function:
      FUNCTION IFR LPAREN parameters RPAREN body {newSymbolToTable($2, FN); setFnValue($2, $2);}
    | FUNCTION IFR LPAREN RPAREN body {newSymbolToTable($2, FN); setFnValue($2, $2);}
    ;

parameters:
      IFR
    | asignation
    | parameters COL IFR
    | parameters COL asignation
    ;

%%

void yyerror(char *s) {
    printf("Error sintáctico: %s en la linea: %i\n", s, yylineno);
}

int main(int argc, char **argv){
    printf("Inicio del programa: \n");
    if(argc > 1){
        yyin = fopen(argv[1], "rt");
    }else{
        yyin = stdin;
    }
    yyparse();
    return 0;
}