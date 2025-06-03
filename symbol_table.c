#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
extern int yylineno;
void yyerror(char *s);

Symbol symbolTable[MAXIMUN_TOKKENS_NUM];
int symbolCount = 0;

void newSymbolToTable(char *name, DataType type) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            printf("Error: Symbol '%s' already defined. Line: %i\n", name, yylineno);
            return;
        }
    }
    if (symbolCount >= MAXIMUN_TOKKENS_NUM) {
        printf("Error: Maximum number of symbols reached.\n");
        return;
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].type = type;
    switch (type) {
        case IN: symbolTable[symbolCount].value.intValue = 0; break;
        case FL: symbolTable[symbolCount].value.floatValue = 0.0f; break;
        case ST: symbolTable[symbolCount].value.stringValue = strdup(""); break;
        case BO: symbolTable[symbolCount].value.boolValue = 0; break;
        case FN: symbolTable[symbolCount].value.fnValue = strdup(""); break;
    }
    symbolCount++;
}

void *getVal(char *name, DataType *type) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            *type = symbolTable[i].type;
            switch (*type) {
                case IN: return &symbolTable[i].value.intValue;
                case FL: return &symbolTable[i].value.floatValue;
                case ST: return &symbolTable[i].value.stringValue;
                case BO: return &symbolTable[i].value.boolValue;
                case FN: return &symbolTable[i].value.fnValue;
            }
        }
    }
    printf("Error: Symbol '%s' not defined. Line: %i.\n", name, yylineno);
    yyerror("");
    return NULL;
}

void setintValue(char *name, int value) {
    DataType type;
    int *valPtr = getVal(name, &type);
    if (valPtr != NULL && type == IN) {
        *valPtr = value;
    } else {
        printf("Error: Incorrect type assignment for '%s'. Line: %i.\n", name, yylineno);
    }
}

void setfloatValue(char *name, float value) {
    DataType type;
    float *valPtr = getVal(name, &type);
    if (valPtr != NULL && type == FL) {
        *valPtr = value;
    } else {
        printf("Error: Incorrect type assignment for '%s'. Line: %i.\n", name, yylineno);
    }
}

void setStringValue(char *name, char *value) {
    DataType type;
    char **valPtr = getVal(name, &type);
    if (valPtr != NULL && type == ST) {
        *valPtr = strdup(value);
    } else {
        printf("Error: Incorrect type assignment for '%s'. Line: %i.\n", name, yylineno);
    }
}

void setFnValue(char *name, char *value) {
    DataType type;
    char **valPtr = getVal(name, &type);
    if (valPtr != NULL && type == FN) {
        *valPtr = strdup(value);
    } else {
        printf("Error: Incorrect type assignment for '%s'. Line: %i.\n", name, yylineno);
    }
}

void setBooleanValue(char *name, int value) {
    DataType type;
    int *valPtr = getVal(name, &type);
    if (valPtr != NULL && type == BO) {
        *valPtr = value;
    } else {
        printf("Error: Incorrect type assignment for '%s'. Line: %i.\n", name, yylineno);
    }
}