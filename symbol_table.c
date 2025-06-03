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

void newVectorToTable(char *name, DataType type, int size) {
    if (symbolCount >= MAXIMUN_TOKKENS_NUM) return;
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].type = type;
    symbolTable[symbolCount].size1 = size;
    symbolTable[symbolCount].size2 = 0;
    switch (type) {
        case VEC_INT: symbolTable[symbolCount].value.vecInt = calloc(size, sizeof(int)); break;
        case VEC_FL: symbolTable[symbolCount].value.vecFloat = calloc(size, sizeof(float)); break;
        case VEC_ST: symbolTable[symbolCount].value.vecString = calloc(size, sizeof(char*)); break;
        case VEC_BO: symbolTable[symbolCount].value.vecBool = calloc(size, sizeof(int)); break;
        default: break;
    }
    symbolCount++;
}

void newMatrixToTable(char *name, DataType type, int rows, int cols) {
    if (symbolCount >= MAXIMUN_TOKKENS_NUM) return;
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].type = type;
    symbolTable[symbolCount].size1 = rows;
    symbolTable[symbolCount].size2 = cols;
    int i;
    switch (type) {
        case MAT_INT:
            symbolTable[symbolCount].value.matInt = calloc(rows, sizeof(int*));
            for (i = 0; i < rows; ++i)
                symbolTable[symbolCount].value.matInt[i] = calloc(cols, sizeof(int));
            break;
        case MAT_FL:
            symbolTable[symbolCount].value.matFloat = calloc(rows, sizeof(float*));
            for (i = 0; i < rows; ++i)
                symbolTable[symbolCount].value.matFloat[i] = calloc(cols, sizeof(float));
            break;
        // Similar para MAT_ST y MAT_BO...
        default: break;
    }
    symbolCount++;
}

int sumVectorInt(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].type == VEC_INT) {
            int sum = 0;
            for (int j = 0; j < symbolTable[i].size1; ++j)
                sum += symbolTable[i].value.vecInt[j];
            return sum;
        }
    }
    printf("Error: Vector '%s' not found or not int type.\n", name);
    return 0;
}

int prodVectorInt(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].type == VEC_INT) {
            int prod = 1;
            for (int j = 0; j < symbolTable[i].size1; ++j)
                prod *= symbolTable[i].value.vecInt[j];
            return prod;
        }
    }
    printf("Error: Vector '%s' not found or not int type.\n", name);
    return 0;
}
int maxVectorInt(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].type == VEC_INT) {
            int max = symbolTable[i].value.vecInt[0];
            for (int j = 1; j < symbolTable[i].size1; ++j)
                if (symbolTable[i].value.vecInt[j] > max)
                    max = symbolTable[i].value.vecInt[j];
            return max;
        }
    }
    printf("Error: Vector '%s' not found or not int type.\n", name);
    return 0;
}
int minVectorInt(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].type == VEC_INT) {
            int min = symbolTable[i].value.vecInt[0];
            for (int j = 1; j < symbolTable[i].size1; ++j)
                if (symbolTable[i].value.vecInt[j] < min)
                    min = symbolTable[i].value.vecInt[j];
            return min;
        }
    }
    printf("Error: Vector '%s' not found or not int type.\n", name);
    return 0;
}