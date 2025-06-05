#include "symbol_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;

void addSymbol(char *name, DataType type) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            printf("Error: El símbolo '%s' ya está definido.\n", name);
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
                    return symbolTable[i].value.stringValue;
                case BO:
                    return &symbolTable[i].value.boolValue;
                case FN:
                    return symbolTable[i].value.fnValue;
            }
        }
    }
    printf("Error: El símbolo '%s' no está definido.\n", name);
    return NULL;
}

void setIntValue(char *name, int value) {
    DataType type;
    int *valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == IN) {
        *valPtr = value;
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'.\n", name);
    }
}

void setFloatValue(char *name, float value) {
    DataType type;
    float *valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == FL) {
        *valPtr = value;
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'.\n", name);
    }
}

void setStringValue(char *name, char *value) {
    DataType type;
    char **valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == ST) {
        *valPtr = strdup(value);
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'.\n", name);
    }
}

void setFnValue(char *name, char *value) {
    DataType type;
    char **valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == FN) {
        *valPtr = strdup(value);
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'.\n", name);
    }
}

void setBooleanValue(char *name, int value) {
    DataType type;
    int *valPtr = getSymbolValue(name, &type);
    if (valPtr != NULL && type == BO) {
        *valPtr = value;
    } else {
        printf("Error: Asignación incorrecta de tipo para '%s'.\n", name);
    }
}