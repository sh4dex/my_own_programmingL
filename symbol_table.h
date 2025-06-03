#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#define MAXIMUN_TOKKENS_NUM 500

typedef enum { IN, FL, ST, BO, FN, VEC_INT, VEC_FL, VEC_ST, VEC_BO, MAT_INT, MAT_FL, MAT_ST, MAT_BO } DataType;

typedef struct {
    char *name;
    DataType type;
    int size1; // For vectors: length; for matrices: rows
    int size2; // For matrices: columns; for vectors: 0
    union {
        int intValue;
        float floatValue;
        char *stringValue;
        int boolValue;
        char *fnValue;
        int *vecInt;
        float *vecFloat;
        char **vecString;
        int *vecBool;
        int **matInt;
        float **matFloat;
        char ***matString;
        int **matBool;
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
int sumVectorInt(char *name);
int prodVectorInt(char *name);
int maxVectorInt(char *name);
int minVectorInt(char *name);

#endif