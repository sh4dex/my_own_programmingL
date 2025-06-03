/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "compilersintactic.y"

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

#line 207 "compilersintactic.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "compilersintactic.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_DEC = 4,                        /* DEC  */
  YYSYMBOL_STR = 5,                        /* STR  */
  YYSYMBOL_IFR = 6,                        /* IFR  */
  YYSYMBOL_BOOLEAN = 7,                    /* BOOLEAN  */
  YYSYMBOL_TRUE = 8,                       /* TRUE  */
  YYSYMBOL_FALSE = 9,                      /* FALSE  */
  YYSYMBOL_TIF = 10,                       /* TIF  */
  YYSYMBOL_EIF = 11,                       /* EIF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_DWHILE = 13,                    /* DWHILE  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_EWHILE = 15,                    /* EWHILE  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_EFOR = 17,                      /* EFOR  */
  YYSYMBOL_RET = 18,                       /* RET  */
  YYSYMBOL_FUNCTION = 19,                  /* FUNCTION  */
  YYSYMBOL_SWTC = 20,                      /* SWTC  */
  YYSYMBOL_ESAC = 21,                      /* ESAC  */
  YYSYMBOL_KAERB = 22,                     /* KAERB  */
  YYSYMBOL_DEF = 23,                       /* DEF  */
  YYSYMBOL_YRT = 24,                       /* YRT  */
  YYSYMBOL_HCTAC = 25,                     /* HCTAC  */
  YYSYMBOL_PLUS = 26,                      /* PLUS  */
  YYSYMBOL_MINUS = 27,                     /* MINUS  */
  YYSYMBOL_MULT = 28,                      /* MULT  */
  YYSYMBOL_DIV = 29,                       /* DIV  */
  YYSYMBOL_MOD = 30,                       /* MOD  */
  YYSYMBOL_ASSIGN = 31,                    /* ASSIGN  */
  YYSYMBOL_EQ = 32,                        /* EQ  */
  YYSYMBOL_DIFF = 33,                      /* DIFF  */
  YYSYMBOL_NOT = 34,                       /* NOT  */
  YYSYMBOL_LT = 35,                        /* LT  */
  YYSYMBOL_GT = 36,                        /* GT  */
  YYSYMBOL_LEQ = 37,                       /* LEQ  */
  YYSYMBOL_GEQ = 38,                       /* GEQ  */
  YYSYMBOL_AND = 39,                       /* AND  */
  YYSYMBOL_OR = 40,                        /* OR  */
  YYSYMBOL_LPAREN = 41,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 42,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 43,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 44,                    /* RBRACE  */
  YYSYMBOL_COL = 45,                       /* COL  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_value = 48,                     /* value  */
  YYSYMBOL_boolean = 49,                   /* boolean  */
  YYSYMBOL_declaration = 50,               /* declaration  */
  YYSYMBOL_initialization = 51,            /* initialization  */
  YYSYMBOL_asignation = 52,                /* asignation  */
  YYSYMBOL_operation_int = 53,             /* operation_int  */
  YYSYMBOL_operation_int_exp = 54,         /* operation_int_exp  */
  YYSYMBOL_operation_float = 55,           /* operation_float  */
  YYSYMBOL_operation_float_exp = 56,       /* operation_float_exp  */
  YYSYMBOL_condition = 57,                 /* condition  */
  YYSYMBOL_conditioncomp = 58,             /* conditioncomp  */
  YYSYMBOL_ifcondition = 59,               /* ifcondition  */
  YYSYMBOL_body = 60,                      /* body  */
  YYSYMBOL_bodies = 61,                    /* bodies  */
  YYSYMBOL_body_stmt = 62,                 /* body_stmt  */
  YYSYMBOL_elsebody = 63,                  /* elsebody  */
  YYSYMBOL_if = 64,                        /* if  */
  YYSYMBOL_whilecondition = 65,            /* whilecondition  */
  YYSYMBOL_while = 66,                     /* while  */
  YYSYMBOL_do_while = 67,                  /* do_while  */
  YYSYMBOL_for = 68,                       /* for  */
  YYSYMBOL_for_asignation = 69,            /* for_asignation  */
  YYSYMBOL_switch = 70,                    /* switch  */
  YYSYMBOL_cases = 71,                     /* cases  */
  YYSYMBOL_case = 72,                      /* case  */
  YYSYMBOL_try_catch = 73,                 /* try_catch  */
  YYSYMBOL_function = 74,                  /* function  */
  YYSYMBOL_parameters = 75                 /* parameters  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  302

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   164,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   187,   188,   189,   193,   194,   198,   199,   200,
     201,   205,   206,   207,   208,   209,   210,   211,   215,   216,
     217,   218,   219,   220,   221,   225,   226,   227,   228,   229,
     237,   241,   242,   243,   244,   252,   256,   257,   258,   259,
     260,   268,   272,   273,   274,   275,   283,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   308,   309,   310,   311,   312,
     313,   317,   318,   319,   323,   327,   328,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   345,   346,   350,
     351,   355,   356,   357,   361,   365,   369,   370,   374,   375,
     379,   383,   384,   388,   389,   393,   397,   398,   402,   403,
     404,   405
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "DEC", "STR",
  "IFR", "BOOLEAN", "TRUE", "FALSE", "TIF", "EIF", "ELSE", "DWHILE",
  "WHILE", "EWHILE", "FOR", "EFOR", "RET", "FUNCTION", "SWTC", "ESAC",
  "KAERB", "DEF", "YRT", "HCTAC", "PLUS", "MINUS", "MULT", "DIV", "MOD",
  "ASSIGN", "EQ", "DIFF", "NOT", "LT", "GT", "LEQ", "GEQ", "AND", "OR",
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "COL", "$accept", "program",
  "value", "boolean", "declaration", "initialization", "asignation",
  "operation_int", "operation_int_exp", "operation_float",
  "operation_float_exp", "condition", "conditioncomp", "ifcondition",
  "body", "bodies", "body_stmt", "elsebody", "if", "whilecondition",
  "while", "do_while", "for", "for_asignation", "switch", "cases", "case",
  "try_catch", "function", "parameters", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,     2,    10,    14,     7,    49,    21,    59,    51,    67,
     108,    83,    59,    69,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -18,   -10,     6,   165,    25,    20,
      59,    91,   125,    20,    59,    30,   101,   138,   132,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     147,   -83,   155,   -83,   167,   -83,    93,   126,   130,   149,
     160,   151,   -83,   156,   -83,    72,   -83,   -83,   -83,   -83,
     172,   -83,   -83,   170,   128,   103,   153,   178,   203,   234,
     256,   262,   273,   271,   235,   -83,   237,    91,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   116,   182,   240,   270,
     280,   281,    -3,   246,   248,   161,   189,   209,   216,   245,
     288,   289,   290,   291,   292,   -83,   293,   294,   295,   296,
     297,   -83,   -83,   -83,   -83,   299,   300,   301,   302,   303,
     -83,   304,   305,   306,   307,   308,   -83,   251,   268,   225,
     244,   252,   261,   267,   194,   271,   271,   271,   271,   271,
     271,   109,   109,   -83,    37,    44,   -83,   -83,   309,   276,
     283,   284,   285,   272,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   287,   298,     7,    59,   -83,    61,   277,   313,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   220,   282,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   286,   -83,   310,   -83,
     279,   -83,   320,   321,   -83,    59,   322,    -9,   311,   238,
     194,   194,    -7,   -83,   312,   314,   -83,     7,   -83,   271,
     315,   -14,   -83,    59,   194,   194,   316,   319,   271,   317,
     194,   194,   318,    59,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   323,   325,   326,   327,    59,   328,   330,   -83,   324,
     329,   332,   -83,   -83,   233,   331,   333,   334,   338,   339,
     335,   337,   -83,   -83,   -83,    59,    59,   348,   340,   -83,
     350,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    28,     0,    29,     0,    27,     0,     0,     0,     0,
       0,     0,    45,     0,    56,     0,    30,    23,    24,    22,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,    96,    99,   100,
     101,   102,   103,   104,   105,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,    40,    38,    41,    42,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,    91,    92,   109,     0,
       0,     0,     0,     0,    98,    94,    95,   113,   111,   112,
     114,     0,     0,   128,     0,   129,     0,     0,     0,    32,
      36,    33,    37,    31,    51,    52,    53,    54,    55,    62,
      63,    64,    65,    66,    46,    47,    48,    49,    50,    57,
      58,    59,    60,    61,    34,    35,    76,    75,    81,    77,
      82,    78,    83,    79,    84,    80,     0,     0,    67,    69,
      71,    72,    73,    74,    68,    70,     0,    85,     0,    86,
       0,    97,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,   126,   130,   131,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,   122,   125,    87,    89,    88,
      90,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,     0,   124,   107,     0,     0,     0,     0,     0,     0,
       0,     0,   123,   118,   119,     0,     0,     0,     0,   116,
       0,   117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -82,   -23,   336,    19,   -11,   341,   -83,   274,
     -83,   -28,   345,   -83,   -12,   247,   -83,   -83,    31,   -83,
       4,    77,    84,   -83,    86,   -83,    80,    87,   112,   -83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    13,    74,   216,    14,    85,    16,    61,    62,    63,
      64,    76,    77,    30,    32,    86,    87,   243,    88,    34,
      89,    90,    91,   285,    92,   251,   252,    93,    94,   176
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,   163,    42,   173,    18,    97,    75,   249,    24,   250,
      96,   258,   249,    50,   250,   259,    25,    44,    78,    15,
      26,    52,    99,    67,    68,    69,    70,    51,    71,    72,
     264,    17,    41,   100,   101,    53,    95,    54,    27,   174,
      67,    68,    69,    70,    43,    71,    72,    67,    68,    69,
      70,    55,    71,    72,    73,    28,    65,   207,   209,   211,
     213,   215,    29,   218,   219,   220,   221,   222,   223,    39,
      66,   226,     1,     2,     3,     4,     5,    19,   228,     6,
     137,   138,     7,     8,    20,     9,    21,    22,    10,    11,
      45,   175,    33,    12,    79,    80,    81,    46,    82,    47,
      48,     6,    31,   235,     7,     8,   236,     9,    35,    83,
      10,    11,    23,    84,    36,    12,   217,    71,    72,   110,
     111,   112,   113,   114,    37,    49,   227,   229,   224,   225,
       1,     2,     3,     4,     5,   151,   152,     6,   115,     8,
       7,     8,   102,     9,   103,   153,    10,    11,   151,   152,
     105,    12,   116,   117,   118,   119,   120,   104,   167,   107,
     145,   146,   234,   147,   148,   149,   150,   262,    56,    57,
      58,   121,   109,    59,    60,   122,   271,   125,   126,   127,
     128,   129,   131,   132,   133,   134,   135,   110,   111,   112,
     113,   114,   154,   155,   123,   156,   130,    67,    68,    69,
      70,   136,    71,    72,   139,   124,   179,   140,   141,   142,
     143,   144,   256,   257,   158,   125,   126,   127,   128,   129,
     157,   154,   155,   246,   168,   248,   267,   268,    67,    68,
      69,   206,   273,   274,   180,   116,   117,   118,   119,   120,
     159,   266,   131,   132,   133,   134,   135,    67,    68,    69,
     208,   276,   151,   152,   181,    67,    68,    69,   210,   288,
     289,   182,   160,   281,    67,    68,    69,   212,   161,   286,
      67,    68,    69,   214,    67,    68,    69,   254,   255,   162,
     164,   165,   169,   297,   298,   170,   171,   172,   177,   178,
     183,   184,   185,   186,   187,   188,   204,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    50,   199,   200,
     201,   202,   203,   205,    52,    54,    65,   231,   232,   238,
     237,   230,   242,   244,   239,   245,   108,   240,   247,   233,
     284,   265,     0,     0,   166,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,   241,     0,   253,   287,     0,     0,   260,   269,   261,
     263,   270,   272,   275,   293,   299,   294,   301,   277,   278,
       0,   279,   280,   282,   283,   291,   290,   295,    98,   292,
     296,     0,     0,     0,   300,     0,     0,     0,     0,     0,
       0,   106
};

static const yytype_int16 yycheck[] =
{
      12,    83,    13,     6,     0,    33,    29,    21,     6,    23,
      33,    18,    21,    31,    23,    22,     6,    13,    30,     0,
       6,    31,    34,     3,     4,     5,     6,    45,     8,     9,
      44,     0,    13,     3,     4,    45,    32,    31,    31,    42,
       3,     4,     5,     6,    13,     8,     9,     3,     4,     5,
       6,    45,     8,     9,    34,     6,    31,   139,   140,   141,
     142,   143,    41,   145,   146,   147,   148,   149,   150,     0,
      45,    34,     3,     4,     5,     6,     7,     0,    34,    10,
       8,     9,    13,    14,     0,    16,     0,     0,    19,    20,
      13,   102,    41,    24,     3,     4,     5,    13,     7,    13,
      13,    10,    43,    42,    13,    14,    45,    16,    41,    18,
      19,    20,     0,    22,     6,    24,   144,     8,     9,    26,
      27,    28,    29,    30,    41,    13,   154,   155,   151,   152,
       3,     4,     5,     6,     7,    32,    33,    10,    45,    14,
      13,    14,    41,    16,     6,    42,    19,    20,    32,    33,
       3,    24,    26,    27,    28,    29,    30,    25,    42,     4,
      32,    33,   174,    35,    36,    37,    38,   249,     3,     4,
       5,    45,     5,     8,     9,    45,   258,    26,    27,    28,
      29,    30,    26,    27,    28,    29,    30,    26,    27,    28,
      29,    30,    39,    40,    45,    42,    45,     3,     4,     5,
       6,    45,     8,     9,    32,    45,    45,    35,    36,    37,
      38,    41,   240,   241,    11,    26,    27,    28,    29,    30,
      42,    39,    40,   235,    42,   236,   254,   255,     3,     4,
       5,     6,   260,   261,    45,    26,    27,    28,    29,    30,
       6,   253,    26,    27,    28,    29,    30,     3,     4,     5,
       6,   263,    32,    33,    45,     3,     4,     5,     6,    26,
      27,    45,     6,   275,     3,     4,     5,     6,     6,   280,
       3,     4,     5,     6,     3,     4,     5,    39,    40,     6,
      45,    44,    42,   295,   296,    15,     6,     6,    42,    41,
      45,     3,     3,     3,     3,     3,    45,     4,     4,     4,
       4,     4,     3,     3,     3,     3,     3,    31,     4,     4,
       4,     4,     4,    45,    31,    31,    31,    45,    31,     6,
      43,    12,    43,     3,    42,     4,    52,    41,     6,    31,
       6,   251,    -1,    -1,    87,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    41,    -1,    42,    22,    -1,    -1,    45,    42,    45,
      45,    42,    45,    45,    26,    17,    27,    17,    45,    44,
      -1,    45,    45,    45,    44,    42,    45,    42,    33,    45,
      43,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    13,    14,    16,
      19,    20,    24,    47,    50,    51,    52,    64,    66,    67,
      68,    70,    73,    74,     6,     6,     6,    31,     6,    41,
      59,    43,    60,    41,    65,    41,     6,    41,    60,     0,
      50,    51,    52,    64,    66,    67,    68,    70,    73,    74,
      31,    45,    31,    45,    31,    45,     3,     4,     5,     8,
       9,    53,    54,    55,    56,    31,    45,     3,     4,     5,
       6,     8,     9,    34,    48,    49,    57,    58,    60,     3,
       4,     5,     7,    18,    22,    51,    61,    62,    64,    66,
      67,    68,    70,    73,    74,    66,    49,    57,    58,    60,
       3,     4,    41,     6,    25,     3,    53,     4,    55,     5,
      26,    27,    28,    29,    30,    45,    26,    27,    28,    29,
      30,    45,    45,    45,    45,    26,    27,    28,    29,    30,
      45,    26,    27,    28,    29,    30,    45,     8,     9,    32,
      35,    36,    37,    38,    41,    32,    33,    35,    36,    37,
      38,    32,    33,    42,    39,    40,    42,    42,    11,     6,
       6,     6,     6,    48,    45,    44,    61,    42,    42,    42,
      15,     6,     6,     6,    42,    52,    75,    42,    41,    45,
      45,    45,    45,    45,     3,     3,     3,     3,     3,     4,
       4,     4,     4,     4,     3,     3,     3,     3,     3,     4,
       4,     4,     4,     4,    45,    45,     6,    48,     6,    48,
       6,    48,     6,    48,     6,    48,    49,    57,    48,    48,
      48,    48,    48,    48,    49,    49,    34,    57,    34,    57,
      12,    45,    31,    31,    60,    42,    45,    43,     6,    42,
      41,    41,    43,    63,     3,     4,    60,     6,    52,    21,
      23,    71,    72,    42,    39,    40,    57,    57,    18,    22,
      45,    45,    48,    45,    44,    72,    60,    57,    57,    42,
      42,    48,    45,    57,    57,    45,    60,    45,    44,    45,
      45,    60,    45,    44,     6,    69,    52,    22,    26,    27,
      45,    42,    45,    26,    27,    42,    43,    60,    60,    17,
      44,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    48,    48,    48,    49,    49,    50,    50,    50,
      50,    51,    51,    51,    51,    51,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    56,    56,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    66,    67,    68,    68,    69,    69,
      70,    71,    71,    72,    72,    73,    74,    74,    75,    75,
      75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     5,     5,     5,     5,     5,     5,     5,     4,     4,
       4,     4,     4,     4,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     6,     6,     6,
       6,     3,     3,     3,     3,     2,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     4,
       6,     3,     3,     3,     4,     3,    14,    15,     3,     3,
       7,     1,     2,     6,     4,     7,     6,     5,     1,     1,
       3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 27: /* declaration: STR IFR COL  */
#line 198 "compilersintactic.y"
                  {addSymbol((yyvsp[-1].strval), ST);}
#line 1481 "compilersintactic.tab.c"
    break;

  case 28: /* declaration: INT IFR COL  */
#line 199 "compilersintactic.y"
                  {addSymbol((yyvsp[-1].strval), IN);}
#line 1487 "compilersintactic.tab.c"
    break;

  case 29: /* declaration: DEC IFR COL  */
#line 200 "compilersintactic.y"
                  {addSymbol((yyvsp[-1].strval), FL);}
#line 1493 "compilersintactic.tab.c"
    break;

  case 30: /* declaration: BOOLEAN IFR COL  */
#line 201 "compilersintactic.y"
                      {addSymbol((yyvsp[-1].strval), BO);}
#line 1499 "compilersintactic.tab.c"
    break;

  case 31: /* initialization: STR IFR ASSIGN STR COL  */
#line 205 "compilersintactic.y"
                             {addSymbol((yyvsp[-3].strval), ST); setStringValue((yyvsp[-3].strval), (yyvsp[-1].strval));}
#line 1505 "compilersintactic.tab.c"
    break;

  case 32: /* initialization: INT IFR ASSIGN INT COL  */
#line 206 "compilersintactic.y"
                             {addSymbol((yyvsp[-3].strval), IN); setIntValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1511 "compilersintactic.tab.c"
    break;

  case 33: /* initialization: DEC IFR ASSIGN DEC COL  */
#line 207 "compilersintactic.y"
                             {addSymbol((yyvsp[-3].strval), FL); setFloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1517 "compilersintactic.tab.c"
    break;

  case 34: /* initialization: BOOLEAN IFR ASSIGN TRUE COL  */
#line 208 "compilersintactic.y"
                                  {addSymbol((yyvsp[-3].strval), BO); setBooleanValue((yyvsp[-3].strval), 1);}
#line 1523 "compilersintactic.tab.c"
    break;

  case 35: /* initialization: BOOLEAN IFR ASSIGN FALSE COL  */
#line 209 "compilersintactic.y"
                                   {addSymbol((yyvsp[-3].strval), BO); setBooleanValue((yyvsp[-3].strval), 0);}
#line 1529 "compilersintactic.tab.c"
    break;

  case 36: /* initialization: INT IFR ASSIGN operation_int COL  */
#line 210 "compilersintactic.y"
                                       {addSymbol((yyvsp[-3].strval), IN); setIntValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1535 "compilersintactic.tab.c"
    break;

  case 37: /* initialization: DEC IFR ASSIGN operation_float COL  */
#line 211 "compilersintactic.y"
                                         {addSymbol((yyvsp[-3].strval), FL); setFloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1541 "compilersintactic.tab.c"
    break;

  case 38: /* asignation: IFR ASSIGN STR COL  */
#line 215 "compilersintactic.y"
                         {setStringValue((yyvsp[-3].strval), (yyvsp[-1].strval));}
#line 1547 "compilersintactic.tab.c"
    break;

  case 39: /* asignation: IFR ASSIGN INT COL  */
#line 216 "compilersintactic.y"
                         {setIntValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1553 "compilersintactic.tab.c"
    break;

  case 40: /* asignation: IFR ASSIGN DEC COL  */
#line 217 "compilersintactic.y"
                         {setFloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1559 "compilersintactic.tab.c"
    break;

  case 41: /* asignation: IFR ASSIGN TRUE COL  */
#line 218 "compilersintactic.y"
                          {setBooleanValue((yyvsp[-3].strval), 1);}
#line 1565 "compilersintactic.tab.c"
    break;

  case 42: /* asignation: IFR ASSIGN FALSE COL  */
#line 219 "compilersintactic.y"
                           {setBooleanValue((yyvsp[-3].strval), 0);}
#line 1571 "compilersintactic.tab.c"
    break;

  case 43: /* asignation: IFR ASSIGN operation_int COL  */
#line 220 "compilersintactic.y"
                                   {setIntValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1577 "compilersintactic.tab.c"
    break;

  case 44: /* asignation: IFR ASSIGN operation_float COL  */
#line 221 "compilersintactic.y"
                                     {setFloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1583 "compilersintactic.tab.c"
    break;

  case 46: /* operation_int: operation_int PLUS INT  */
#line 226 "compilersintactic.y"
                             { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval); }
#line 1589 "compilersintactic.tab.c"
    break;

  case 47: /* operation_int: operation_int MINUS INT  */
#line 227 "compilersintactic.y"
                              { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1595 "compilersintactic.tab.c"
    break;

  case 48: /* operation_int: operation_int MULT INT  */
#line 228 "compilersintactic.y"
                             { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1601 "compilersintactic.tab.c"
    break;

  case 49: /* operation_int: operation_int DIV INT  */
#line 229 "compilersintactic.y"
                            {
        if ((yyvsp[0].intval) == 0) {
            yyerror("División por cero");
            (yyval.intval) = 0;
        } else {
            (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);
        }
      }
#line 1614 "compilersintactic.tab.c"
    break;

  case 50: /* operation_int: operation_int MOD INT  */
#line 237 "compilersintactic.y"
                            { (yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval); }
#line 1620 "compilersintactic.tab.c"
    break;

  case 51: /* operation_int_exp: INT PLUS INT  */
#line 241 "compilersintactic.y"
                   { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval); }
#line 1626 "compilersintactic.tab.c"
    break;

  case 52: /* operation_int_exp: INT MINUS INT  */
#line 242 "compilersintactic.y"
                    { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1632 "compilersintactic.tab.c"
    break;

  case 53: /* operation_int_exp: INT MULT INT  */
#line 243 "compilersintactic.y"
                   { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1638 "compilersintactic.tab.c"
    break;

  case 54: /* operation_int_exp: INT DIV INT  */
#line 244 "compilersintactic.y"
                  {
        if ((yyvsp[0].intval) == 0) {
            yyerror("División por cero");
            (yyval.intval) = 0;
        } else {
            (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);
        }
      }
#line 1651 "compilersintactic.tab.c"
    break;

  case 55: /* operation_int_exp: INT MOD INT  */
#line 252 "compilersintactic.y"
                  { (yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval); }
#line 1657 "compilersintactic.tab.c"
    break;

  case 57: /* operation_float: operation_float PLUS DEC  */
#line 257 "compilersintactic.y"
                               { (yyval.floatval) = (yyvsp[-2].floatval) + (yyvsp[0].floatval); }
#line 1663 "compilersintactic.tab.c"
    break;

  case 58: /* operation_float: operation_float MINUS DEC  */
#line 258 "compilersintactic.y"
                                { (yyval.floatval) = (yyvsp[-2].floatval) - (yyvsp[0].floatval); }
#line 1669 "compilersintactic.tab.c"
    break;

  case 59: /* operation_float: operation_float MULT DEC  */
#line 259 "compilersintactic.y"
                               { (yyval.floatval) = (yyvsp[-2].floatval) * (yyvsp[0].floatval); }
#line 1675 "compilersintactic.tab.c"
    break;

  case 60: /* operation_float: operation_float DIV DEC  */
#line 260 "compilersintactic.y"
                              {
        if ((yyvsp[0].floatval) == 0) {
            yyerror("División por cero");
            (yyval.floatval) = 0;
        } else {
            (yyval.floatval) = (yyvsp[-2].floatval) / (yyvsp[0].floatval);
        }
      }
#line 1688 "compilersintactic.tab.c"
    break;

  case 61: /* operation_float: operation_float MOD DEC  */
#line 268 "compilersintactic.y"
                              { (yyval.floatval) = (int)(yyvsp[-2].floatval) % (int)(yyvsp[0].floatval); }
#line 1694 "compilersintactic.tab.c"
    break;

  case 62: /* operation_float_exp: DEC PLUS DEC  */
#line 272 "compilersintactic.y"
                   { (yyval.floatval) = (yyvsp[-2].floatval) + (yyvsp[0].floatval); }
#line 1700 "compilersintactic.tab.c"
    break;

  case 63: /* operation_float_exp: DEC MINUS DEC  */
#line 273 "compilersintactic.y"
                    { (yyval.floatval) = (yyvsp[-2].floatval) - (yyvsp[0].floatval); }
#line 1706 "compilersintactic.tab.c"
    break;

  case 64: /* operation_float_exp: DEC MULT DEC  */
#line 274 "compilersintactic.y"
                   { (yyval.floatval) = (yyvsp[-2].floatval) * (yyvsp[0].floatval); }
#line 1712 "compilersintactic.tab.c"
    break;

  case 65: /* operation_float_exp: DEC DIV DEC  */
#line 275 "compilersintactic.y"
                  {
        if ((yyvsp[0].floatval) == 0) {
            yyerror("División por cero");
            (yyval.floatval) = 0;
        } else {
            (yyval.floatval) = (yyvsp[-2].floatval) / (yyvsp[0].floatval);
        }
      }
#line 1725 "compilersintactic.tab.c"
    break;

  case 66: /* operation_float_exp: DEC MOD DEC  */
#line 283 "compilersintactic.y"
                  { (yyval.floatval) = (int)(yyvsp[-2].floatval) % (int)(yyvsp[0].floatval); }
#line 1731 "compilersintactic.tab.c"
    break;

  case 126: /* function: FUNCTION IFR LPAREN parameters RPAREN body  */
#line 397 "compilersintactic.y"
                                                 {addSymbol((yyvsp[-4].strval), FN); setFnValue((yyvsp[-4].strval), (yyvsp[-4].strval));}
#line 1737 "compilersintactic.tab.c"
    break;

  case 127: /* function: FUNCTION IFR LPAREN RPAREN body  */
#line 398 "compilersintactic.y"
                                      {addSymbol((yyvsp[-3].strval), FN); setFnValue((yyvsp[-3].strval), (yyvsp[-3].strval));}
#line 1743 "compilersintactic.tab.c"
    break;


#line 1747 "compilersintactic.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 408 "compilersintactic.y"


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
