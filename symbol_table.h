#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

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

extern Symbol symbolTable[MAX_SYMBOLS];
extern int symbolCount;

void addSymbol(char *name, DataType type);
void *getSymbolValue(char *name, DataType *type);
void setIntValue(char *name, int value);
void setFloatValue(char *name, float value);
void setStringValue(char *name, char *value);
void setFnValue(char *name, char *value);
void setBooleanValue(char *name, int value);

#endif // SYMBOL_TABLE_H