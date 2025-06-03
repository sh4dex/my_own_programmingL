#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef enum { IN, FL, ST, BO, FN } DataType;

#define MAXIMUN_TOKKENS_NUM 500

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

extern Symbol symbolTable[MAXIMUN_TOKKENS_NUM];
extern int symbolCount;

void newSymbolToTable(char *name, DataType type);
void *getVal(char *name, DataType *type);
void setintValue(char *name, int value);
void setfloatValue(char *name, float value);
void setStringValue(char *name, char *value);
void setFnValue(char *name, char *value);
void setBooleanValue(char *name, int value);

#endif