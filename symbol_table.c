#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
extern int yylineno;
void yyerror(char *s);

// Estructuras y variables globales para scopes
Scope scopes[MAX_SCOPES];
int currentScope = 0; // 0 = global

// Manejo de scopes (shadowing)
void enterScope() {
    currentScope++;
    if (currentScope >= MAX_SCOPES) {
        printf("Error: Demasiados scopes anidados.\n");
        exit(1);
    }
    scopes[currentScope].count = 0;
}

void exitScope() {
    if (currentScope > 0)
        currentScope--;
}

void addSymbol(char *name, DataType type) {
    Scope *scope = &scopes[currentScope];
    for (int i = 0; i < scope->count; ++i) {
        if (strcmp(scope->symbols[i].name, name) == 0) {
            printf("Error: Variable '%s' ya declarada en este bloque. Line: %i\n", name, yylineno);
            return;
        }
    }
    Symbol *sym = &scope->symbols[scope->count];
    sym->name = strdup(name);
    sym->type = type;
    sym->size1 = 0;
    sym->size2 = 0;
    switch (type) {
        case IN: sym->value.intValue = 0; break;
        case FL: sym->value.floatValue = 0.0f; break;
        case ST: sym->value.stringValue = strdup(""); break;
        case BO: sym->value.boolValue = 0; break;
        case FN: sym->value.fnValue = strdup(""); break;
        default: break;
    }
    scope->count++;
}

Symbol* findSymbol(char *name) {
    for (int s = currentScope; s >= 0; --s) {
        for (int i = 0; i < scopes[s].count; ++i) {
            if (strcmp(scopes[s].symbols[i].name, name) == 0) {
                return &scopes[s].symbols[i];
            }
        }
    }
    return NULL;
}

// Declaración de vectores y matrices
void newVectorToTable(char *name, DataType type, int size) {
    Scope *scope = &scopes[currentScope];
    Symbol *sym = &scope->symbols[scope->count];
    sym->name = strdup(name);
    sym->type = type;
    sym->size1 = size;
    sym->size2 = 0;
    switch (type) {
        case VEC_INT: sym->value.vecInt = calloc(size, sizeof(int)); break;
        case VEC_FL: sym->value.vecFloat = calloc(size, sizeof(float)); break;
        case VEC_ST: sym->value.vecString = calloc(size, sizeof(char*)); break;
        case VEC_BO: sym->value.vecBool = calloc(size, sizeof(int)); break;
        default: break;
    }
    scope->count++;
}

void newMatrixToTable(char *name, DataType type, int rows, int cols) {
    Scope *scope = &scopes[currentScope];
    Symbol *sym = &scope->symbols[scope->count];
    sym->name = strdup(name);
    sym->type = type;
    sym->size1 = rows;
    sym->size2 = cols;
    int i;
    switch (type) {
        case MAT_INT:
            sym->value.matInt = calloc(rows, sizeof(int*));
            for (i = 0; i < rows; ++i)
                sym->value.matInt[i] = calloc(cols, sizeof(int));
            break;
        case MAT_FL:
            sym->value.matFloat = calloc(rows, sizeof(float*));
            for (i = 0; i < rows; ++i)
                sym->value.matFloat[i] = calloc(cols, sizeof(float));
            break;
        // Puedes agregar MAT_ST y MAT_BO si lo necesitas
        default: break;
    }
    scope->count++;
}

// Setters y getters
void *getVal(char *name, DataType *type) {
    Symbol *sym = findSymbol(name);
    if (sym) {
        *type = sym->type;
        switch (*type) {
            case IN: return &sym->value.intValue;
            case FL: return &sym->value.floatValue;
            case ST: return &sym->value.stringValue;
            case BO: return &sym->value.boolValue;
            case FN: return &sym->value.fnValue;
            default: return NULL;
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

// Funciones de reducción para vectores de enteros
int sumVectorInt(char *name) {
    Symbol *sym = findSymbol(name);
    if (sym && sym->type == VEC_INT) {
        int sum = 0;
        for (int j = 0; j < sym->size1; ++j)
            sum += sym->value.vecInt[j];
        return sum;
    }
    printf("Error: Vector '%s' not found or not int type.\n", name);
    return 0;
}

int prodVectorInt(char *name) {
    Symbol *sym = findSymbol(name);
    if (sym && sym->type == VEC_INT) {
        int prod = 1;
        for (int j = 0; j < sym->size1; ++j)
            prod *= sym->value.vecInt[j];
        return prod;
    }
    printf("Error: Vector '%s' not found or not int type.\n", name);
    return 0;
}

int maxVectorInt(char *name) {
    Symbol *sym = findSymbol(name);
    if (sym && sym->type == VEC_INT && sym->size1 > 0) {
        int max = sym->value.vecInt[0];
        for (int j = 1; j < sym->size1; ++j)
            if (sym->value.vecInt[j] > max)
                max = sym->value.vecInt[j];
        return max;
    }
    printf("Error: Vector '%s' not found or not int type.\n", name);
    return 0;
}

int minVectorInt(char *name) {
    Symbol *sym = findSymbol(name);
    if (sym && sym->type == VEC_INT && sym->size1 > 0) {
        int min = sym->value.vecInt[0];
        for (int j = 1; j < sym->size1; ++j)
            if (sym->value.vecInt[j] < min)
                min = sym->value.vecInt[j];
        return min;
    }
    printf("Error: Vector '%s' not found or not int type.\n", name);
    return 0;
}

void newSymbolToTable(char *name, DataType type);
void newSymbolToTable(char *name, DataType type) {
    addSymbol(name, type);
}