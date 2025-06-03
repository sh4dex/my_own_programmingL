/** Seccion de definiciones **/
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
extern char *yytext;
extern int yylineno;
void yyerror(char *s);
extern FILE *yyin;

typedef enum { IN, FL, ST, BO, FN } DataType;

#define MAX_SYMBOLS 500

typedef struct {
    char *name;
    DataType type;
    union {
        int intValue;
        float floatValue;
        char *stringValue;
        int boolValue;
        char *fnValue;
    } value;
} Symbol;

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;

void addSymbol(char *name, DataType type) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            printf("Error: El símbolo '%s' ya está definido.\nError en la linea: %i \n", name, yylineno);
            return;
        }
    }
    if (symbolCount >= MAX_SYMBOLS) {
        printf("Error: Se ha alcanzado el límite máximo de símbolos.\n");
        return;
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].type = type;
    switch (type) {
        case IN:
            symbolTable[symbolCount].value.intValue = 0;
            break;
        case FL:
            symbolTable[symbolCount].value.floatValue = 0.0f;
            break;
        case ST:
            symbolTable[symbolCount].value.stringValue = strdup("");
            break;
        case BO:
            symbolTable[symbolCount].value.boolValue = 0;
            break;
        case FN:
            symbolTable[symbolCount].value.fnValue = strdup("");
            break;
    }
    symbolCount++;
}

void *getSymbolValue(char *name, DataType *type) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            *type = symbolTable[i].type;
            switch (*type) {
                case IN:
                    return &symbolTable[i].value.intValue;
                case FL:
                    return &symbolTable[i].value.floatValue;
                case ST:
                    return &symbolTable[i].value.stringValue;
                case BO:
                    return &symbolTable[i].value.boolValue;
                case FN:
                    return &symbolTable[i].value.fnValue;
            }
        }
    }
    printf("Error: El símbolo '%s' no está definido en la linea: %i.\n", name, yylineno);
    yyerror("");
    return NULL;
}

void setIntValue(char *name, int value) {
    DataType type;
    int *valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == IN) {
        *valPtr = value;
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'. En la linea: %i .\n", name, yylineno);
    }
}

void setFloatValue(char *name, float value) {
    DataType type;
    float *valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == FL) {
        *valPtr = value;
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'. En la linea: %i .\n", name, yylineno);
    }
}

void setStringValue(char *name, char *value) {
    DataType type;
    char **valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == ST) {
        *valPtr = strdup(value);
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'. En la linea: %i .\n", name, yylineno);
    }
}

void setFnValue(char *name, char *value) {
    DataType type;
    char **valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == FN) {
        *valPtr = strdup(value);
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'. En la linea: %i .\n", name, yylineno);
    }
}

void setBooleanValue(char *name, int value) {
    DataType type;
    int *valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == BO) {
        *valPtr = value;
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s' en la linea: %i.\n", name, yylineno);
    }
}
%}

%union {
    int intval;
    float floatval;
    char *strval;
    int boolval;
}

/* Tokens para trabajar con compilerlematic.l */
%token <intval> INT
%token <floatval> DEC
%token <strval> STR
%token <strval> IFR
%token BOOLEAN
%token TRUE FALSE
%token TIF EIF ELSE DWHILE WHILE EWHILE FOR EFOR RET FUNCTION SWTC ESAC KAERB DEF YRT HCTAC
%token PLUS MINUS MULT DIV MOD ASSIGN EQ DIFF NOT LT GT LEQ GEQ AND OR LPAREN RPAREN LBRACE RBRACE COL

%left PLUS MINUS
%left MULT DIV MOD

%type <intval> operation_int_exp operation_int
%type <floatval> operation_float_exp operation_float

%%

program:
      declaration
    | initialization
    | asignation
    | if
    | while
    | do_while
    | for
    | switch
    | try_catch
    | function
    | program declaration
    | program initialization
    | program asignation
    | program if
    | program while
    | program do_while
    | program for
    | program switch
    | program try_catch
    | program function
    ;

value:
      STR
    | INT
    | DEC
    ;

boolean:
      TRUE
    | FALSE
    ;

declaration:
      STR IFR COL {addSymbol($2, ST);}
    | INT IFR COL {addSymbol($2, IN);}
    | DEC IFR COL {addSymbol($2, FL);}
    | BOOLEAN IFR COL {addSymbol($2, BO);}
    ;

initialization:
      STR IFR ASSIGN STR COL {addSymbol($2, ST); setStringValue($2, $4);}
    | INT IFR ASSIGN INT COL {addSymbol($2, IN); setIntValue($2, $4);}
    | DEC IFR ASSIGN DEC COL {addSymbol($2, FL); setFloatValue($2, $4);}
    | BOOLEAN IFR ASSIGN TRUE COL {addSymbol($2, BO); setBooleanValue($2, 1);}
    | BOOLEAN IFR ASSIGN FALSE COL {addSymbol($2, BO); setBooleanValue($2, 0);}
    | INT IFR ASSIGN operation_int COL {addSymbol($2, IN); setIntValue($2, $4);}
    | DEC IFR ASSIGN operation_float COL {addSymbol($2, FL); setFloatValue($2, $4);}
    ;

asignation:
      IFR ASSIGN STR COL {setStringValue($1, $3);}
    | IFR ASSIGN INT COL {setIntValue($1, $3);}
    | IFR ASSIGN DEC COL {setFloatValue($1, $3);}
    | IFR ASSIGN TRUE COL {setBooleanValue($1, 1);}
    | IFR ASSIGN FALSE COL {setBooleanValue($1, 0);}
    | IFR ASSIGN operation_int COL {setIntValue($1, $3);}
    | IFR ASSIGN operation_float COL {setFloatValue($1, $3);}
    ;

operation_int:
      operation_int_exp
    | operation_int PLUS INT { $$ = $1 + $3; }
    | operation_int MINUS INT { $$ = $1 - $3; }
    | operation_int MULT INT { $$ = $1 * $3; }
    | operation_int DIV INT {
        if ($3 == 0) {
            yyerror("División por cero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
      }
    | operation_int MOD INT { $$ = $1 % $3; }
    ;

operation_int_exp:
      INT PLUS INT { $$ = $1 + $3; }
    | INT MINUS INT { $$ = $1 - $3; }
    | INT MULT INT { $$ = $1 * $3; }
    | INT DIV INT {
        if ($3 == 0) {
            yyerror("División por cero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
      }
    | INT MOD INT { $$ = $1 % $3; }
    ;

operation_float:
      operation_float_exp
    | operation_float PLUS DEC { $$ = $1 + $3; }
    | operation_float MINUS DEC { $$ = $1 - $3; }
    | operation_float MULT DEC { $$ = $1 * $3; }
    | operation_float DIV DEC {
        if ($3 == 0) {
            yyerror("División por cero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
      }
    | operation_float MOD DEC { $$ = (int)$1 % (int)$3; }
    ;

operation_float_exp:
      DEC PLUS DEC { $$ = $1 + $3; }
    | DEC MINUS DEC { $$ = $1 - $3; }
    | DEC MULT DEC { $$ = $1 * $3; }
    | DEC DIV DEC {
        if ($3 == 0) {
            yyerror("División por cero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
      }
    | DEC MOD DEC { $$ = (int)$1 % (int)$3; }
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
      LBRACE bodies RBRACE
    ;

bodies:
      body_stmt bodies
    | body_stmt
    ;

body_stmt:
      RET value COL
    | KAERB COL
    | if
    | while
    | do_while
    | for
    | switch
    | try_catch
    | function
    | initialization
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
      FUNCTION IFR LPAREN parameters RPAREN body {addSymbol($2, FN); setFnValue($2, $2);}
    | FUNCTION IFR LPAREN RPAREN body {addSymbol($2, FN); setFnValue($2, $2);}
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