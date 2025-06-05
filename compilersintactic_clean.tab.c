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
#line 2 "compilersintactic_clean.y"

#include "symbol_table.h"
#include <stdio.h>
extern int yylex(void);
extern char *yytext;
extern int yylineno;
void yyerror(char *s);
extern FILE *yyin;

void doReduction(const char* op, const char* var, int idx) {
    if (idx >= 0)
        printf("Reducción: %s(%s[%d])\n", op, var, idx);
    else
        printf("Reducción: %s(%s)\n", op, var);
}

#line 88 "compilersintactic_clean.tab.c"

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

#include "compilersintactic_clean.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DIG = 3,                        /* DIG  */
  YYSYMBOL_IFR = 4,                        /* IFR  */
  YYSYMBOL_STG = 5,                        /* STG  */
  YYSYMBOL_FLT = 6,                        /* FLT  */
  YYSYMBOL_PLUS = 7,                       /* PLUS  */
  YYSYMBOL_MINUS = 8,                      /* MINUS  */
  YYSYMBOL_LBRACKET = 9,                   /* LBRACKET  */
  YYSYMBOL_RBRACKET = 10,                  /* RBRACKET  */
  YYSYMBOL_SUM = 11,                       /* SUM  */
  YYSYMBOL_PROD = 12,                      /* PROD  */
  YYSYMBOL_MAX = 13,                       /* MAX  */
  YYSYMBOL_MIN = 14,                       /* MIN  */
  YYSYMBOL_MULT = 15,                      /* MULT  */
  YYSYMBOL_DIV = 16,                       /* DIV  */
  YYSYMBOL_TRUE = 17,                      /* TRUE  */
  YYSYMBOL_FALSE = 18,                     /* FALSE  */
  YYSYMBOL_STR = 19,                       /* STR  */
  YYSYMBOL_INT = 20,                       /* INT  */
  YYSYMBOL_DEC = 21,                       /* DEC  */
  YYSYMBOL_BOOLEAN = 22,                   /* BOOLEAN  */
  YYSYMBOL_DWHILE = 23,                    /* DWHILE  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_EWHILE = 25,                    /* EWHILE  */
  YYSYMBOL_FOR = 26,                       /* FOR  */
  YYSYMBOL_EFOR = 27,                      /* EFOR  */
  YYSYMBOL_TIF = 28,                       /* TIF  */
  YYSYMBOL_EIF = 29,                       /* EIF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_FUNCTION = 31,                  /* FUNCTION  */
  YYSYMBOL_RET = 32,                       /* RET  */
  YYSYMBOL_SWTC = 33,                      /* SWTC  */
  YYSYMBOL_ESAC = 34,                      /* ESAC  */
  YYSYMBOL_KAERB = 35,                     /* KAERB  */
  YYSYMBOL_DEF = 36,                       /* DEF  */
  YYSYMBOL_YRT = 37,                       /* YRT  */
  YYSYMBOL_HCTAC = 38,                     /* HCTAC  */
  YYSYMBOL_ASSIGN = 39,                    /* ASSIGN  */
  YYSYMBOL_EQ = 40,                        /* EQ  */
  YYSYMBOL_DIFF = 41,                      /* DIFF  */
  YYSYMBOL_LT = 42,                        /* LT  */
  YYSYMBOL_GT = 43,                        /* GT  */
  YYSYMBOL_LEQ = 44,                       /* LEQ  */
  YYSYMBOL_GEQ = 45,                       /* GEQ  */
  YYSYMBOL_AND = 46,                       /* AND  */
  YYSYMBOL_NOT = 47,                       /* NOT  */
  YYSYMBOL_OR = 48,                        /* OR  */
  YYSYMBOL_MOD = 49,                       /* MOD  */
  YYSYMBOL_LPAREN = 50,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 51,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 52,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 53,                    /* RBRACE  */
  YYSYMBOL_COL = 54,                       /* COL  */
  YYSYMBOL_COLON = 55,                     /* COLON  */
  YYSYMBOL_COMMA = 56,                     /* COMMA  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_statement = 59,                 /* statement  */
  YYSYMBOL_value = 60,                     /* value  */
  YYSYMBOL_element = 61,                   /* element  */
  YYSYMBOL_reduction = 62,                 /* reduction  */
  YYSYMBOL_boolean = 63,                   /* boolean  */
  YYSYMBOL_declaration = 64,               /* declaration  */
  YYSYMBOL_initialization = 65,            /* initialization  */
  YYSYMBOL_asignation = 66,                /* asignation  */
  YYSYMBOL_asignation_function = 67,       /* asignation_function  */
  YYSYMBOL_condition = 68,                 /* condition  */
  YYSYMBOL_conditioncomp = 69,             /* conditioncomp  */
  YYSYMBOL_ifcondition = 70,               /* ifcondition  */
  YYSYMBOL_body = 71,                      /* body  */
  YYSYMBOL_bodies = 72,                    /* bodies  */
  YYSYMBOL_body_stmt = 73,                 /* body_stmt  */
  YYSYMBOL_elsebody = 74,                  /* elsebody  */
  YYSYMBOL_if = 75,                        /* if  */
  YYSYMBOL_whilecondition = 76,            /* whilecondition  */
  YYSYMBOL_while = 77,                     /* while  */
  YYSYMBOL_78_do_while = 78,               /* do-while  */
  YYSYMBOL_for = 79,                       /* for  */
  YYSYMBOL_for_asignation = 80,            /* for_asignation  */
  YYSYMBOL_switch = 81,                    /* switch  */
  YYSYMBOL_cases = 82,                     /* cases  */
  YYSYMBOL_case = 83,                      /* case  */
  YYSYMBOL_84_try_catch = 84,              /* try-catch  */
  YYSYMBOL_function = 85,                  /* function  */
  YYSYMBOL_parameters = 86                 /* parameters  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  309

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    54,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    85,    89,    95,    96,    97,    98,
      99,   100,   101,   102,   106,   107,   110,   111,   112,   113,
     114,   115,   118,   119,   120,   121,   122,   125,   126,   127,
     128,   129,   130,   133,   134,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   157,   158,   159,   160,   161,   162,   165,
     166,   167,   170,   173,   174,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   189,   190,   193,   194,   197,
     198,   199,   202,   205,   208,   209,   211,   212,   215,   218,
     219,   222,   223,   225,   228,   229,   231,   232,   233,   234
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
  "\"end of file\"", "error", "\"invalid token\"", "DIG", "IFR", "STG",
  "FLT", "PLUS", "MINUS", "LBRACKET", "RBRACKET", "SUM", "PROD", "MAX",
  "MIN", "MULT", "DIV", "TRUE", "FALSE", "STR", "INT", "DEC", "BOOLEAN",
  "DWHILE", "WHILE", "EWHILE", "FOR", "EFOR", "TIF", "EIF", "ELSE",
  "FUNCTION", "RET", "SWTC", "ESAC", "KAERB", "DEF", "YRT", "HCTAC",
  "ASSIGN", "EQ", "DIFF", "LT", "GT", "LEQ", "GEQ", "AND", "NOT", "OR",
  "MOD", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "COL", "COLON", "COMMA",
  "$accept", "program", "statement", "value", "element", "reduction",
  "boolean", "declaration", "initialization", "asignation",
  "asignation_function", "condition", "conditioncomp", "ifcondition",
  "body", "bodies", "body_stmt", "elsebody", "if", "whilecondition",
  "while", "do-while", "for", "for_asignation", "switch", "cases", "case",
  "try-catch", "function", "parameters", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-60)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -60,   282,   -60,    -8,    58,    67,    81,    90,    49,   -12,
      55,    60,   115,   101,    49,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   267,   -15,    -9,    33,
      52,   301,   110,    23,    49,   109,    23,    49,   106,   133,
     121,   124,   178,   169,   171,   172,   173,   181,   231,   -60,
     197,   -60,   234,   237,   -60,   145,   -60,   242,   246,   247,
     249,     5,   184,   -60,   201,   301,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   146,   -60,   202,   209,   210,
     211,   -60,   -60,   217,     5,   250,   -60,   -60,   -19,   228,
     227,   244,   273,   283,   103,   261,   245,   269,    -1,   260,
     264,   -60,   297,   -60,   -60,   -60,   -60,   -60,   262,   263,
     308,   272,   274,   276,   292,   296,   298,   300,    53,   -60,
     -60,   -60,    45,   170,   195,   199,   218,   336,   337,   338,
     339,   135,   232,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,   152,   152,   -60,    86,   114,   -60,
     -60,   -60,   305,   306,   -60,   -60,   -60,   316,   309,    49,
     -60,   -23,   295,   345,   340,   -60,   -60,    34,   -60,   -60,
     -60,   -60,   178,   248,   178,   248,   178,   248,   178,   248,
     178,   248,     1,     3,    35,    84,   176,   302,   -60,    93,
      93,   -60,   -60,   248,   248,   248,   248,   248,   248,   -60,
     -60,   -60,   304,   -60,   307,   -60,   348,   346,   303,   154,
     -60,    49,   352,    88,   310,   349,   356,   -60,   357,   -60,
     359,   -60,   360,   -60,   361,   -60,   129,   135,   135,   311,
     312,    79,   -60,   248,   -60,   -60,   309,   -60,     5,   313,
      87,   -60,    49,   364,   362,   363,   365,   366,   367,   135,
     135,   318,   319,   135,   135,     5,   317,    -2,    49,   -60,
     -60,   -60,   368,   320,   328,   329,   330,   331,   -60,   -60,
     -60,   -60,   332,   333,   226,   335,    49,   341,   -60,   -60,
     -60,   -60,   -60,   -60,   379,   380,   343,   -60,   350,   -60,
     187,   344,   342,   -60,   347,   382,   383,   351,   353,   -60,
     -60,   -60,    49,    49,   370,   354,   -60,   372,   -60
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,     0,     0,    38,     0,    39,     0,     0,     0,
       0,     0,     0,    94,     0,    84,    87,    88,    89,    90,
      91,    92,    93,   103,    14,     0,    15,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    17,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,    47,    50,    51,    52,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,     0,     0,    99,
     100,   102,     0,     0,    81,    79,    80,    97,   116,     0,
     117,     0,     0,     0,     0,    42,    43,     0,    44,    45,
      46,    85,    64,    63,    69,    65,    70,    66,    71,    67,
      72,    68,     0,     0,     0,     0,     0,     0,    18,    19,
      20,    21,    22,    55,    57,    59,    60,    61,    62,    23,
      56,    58,     0,    73,     0,    74,     0,     0,     0,     0,
     115,     0,     0,     0,     0,    24,     0,    40,     0,    26,
       0,    27,     0,    28,     0,    29,     0,     0,     0,     0,
       0,     0,    98,    53,    54,   114,   118,   119,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     110,   113,     0,     0,     0,     0,     0,     0,    75,    77,
      76,    78,     0,     0,     0,     0,     0,     0,    25,    41,
      30,    31,    32,    33,     0,     0,     0,    96,     0,   112,
       0,     0,     0,    95,     0,     0,     0,     0,     0,   111,
     106,   107,     0,     0,     0,     0,   104,     0,   105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   -60,   -59,   374,   -60,   -29,   -60,   389,   107,
     182,   -35,   373,   -60,   -14,   355,   -60,   -60,   402,   -60,
      14,   403,   405,   -60,   407,   -60,   174,   409,   410,   -60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    15,    85,    86,    87,   186,    16,    63,    18,
     160,    89,    90,    37,    32,    64,    65,   232,    66,    34,
      67,    68,    69,   291,    70,   240,   241,    71,    72,   161
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    95,   118,   158,    88,   133,   134,    94,    74,    42,
     218,    76,   220,   135,   136,    20,    77,    78,    79,    80,
      91,   144,   145,    97,    48,   132,    74,    75,   211,    76,
      50,    26,   146,   212,    77,    78,    79,    80,    33,    49,
      81,    82,    52,   216,   222,    51,    73,   143,    74,   172,
     159,    76,   219,   276,   221,    84,    77,    78,    79,    80,
     133,   134,    27,   173,   175,   177,   179,   181,   135,   136,
      83,    28,    53,    84,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,    29,   223,    54,   217,    74,
      75,    55,    76,   224,    30,    84,   187,    77,    78,    79,
      80,    31,   143,    81,    82,    35,    56,   171,   135,   136,
      36,   255,   203,   205,   256,   200,   201,    74,    75,    38,
      76,   238,   238,   239,   239,    77,    78,    79,    80,    92,
      93,    81,    82,   202,     9,   225,    84,    99,    74,    75,
     259,    76,   143,   144,   145,   210,    77,    78,    79,    80,
     233,    39,    81,    82,   154,   102,    98,    74,    42,   100,
      76,   204,   112,   113,    84,    77,    78,    79,    80,    81,
      82,    81,    82,    74,   174,   249,    76,   250,   101,   257,
     234,    77,    78,    79,    80,    84,   122,   102,   123,   124,
     125,   126,   251,   252,   295,   296,   274,   235,    74,   176,
     109,    76,    74,   178,    84,    76,    77,    78,    79,    80,
      77,    78,    79,    80,   268,   269,   144,   145,   272,   273,
      84,    74,   180,   103,    76,   104,   105,   106,   261,    77,
      78,    79,    80,   133,   134,   107,   108,   110,   119,   133,
     134,   135,   136,   111,   277,    84,   114,   135,   136,    84,
     115,   116,   127,   117,   120,   133,   134,   133,   134,   128,
     129,   130,   288,   135,   136,   135,   136,   131,    84,   151,
      41,    42,    43,    44,   147,   143,   148,   152,   150,   149,
     286,   143,     2,   188,    45,    46,     3,   153,   304,   305,
     137,   138,   139,   140,   141,   142,   156,   143,   157,   143,
     164,     4,     5,     6,     7,     8,     9,   147,    10,   148,
      11,   162,   155,    12,   163,    13,   165,   166,   167,    14,
      57,    58,    59,    60,     8,     9,   168,    10,   169,    11,
     170,    48,    12,    61,    13,    50,    62,    53,    14,    55,
     182,   183,   184,   185,   206,   207,   208,   213,   209,   214,
     215,   229,   230,   226,   227,   231,   236,   228,   243,   244,
     245,   242,   246,   247,   248,   253,   254,   262,   258,   270,
     271,   275,   263,   264,   279,   265,   266,   267,   278,   280,
     281,   282,   283,   290,     3,   294,   284,   285,   287,   300,
      17,   301,   292,   298,   237,   289,   293,   306,   297,   308,
      47,   299,   302,    19,    21,   303,    22,   307,    23,    96,
      24,    25,     0,     0,   260,     0,     0,     0,     0,     0,
     121
};

static const yytype_int16 yycheck[] =
{
      14,    36,    61,     4,    33,     7,     8,    36,     3,     4,
       9,     6,     9,    15,    16,     1,    11,    12,    13,    14,
      34,    40,    41,    37,    39,    84,     3,     4,    51,     6,
      39,    39,    51,    56,    11,    12,    13,    14,    50,    54,
      17,    18,     9,     9,     9,    54,    32,    49,     3,     4,
      51,     6,    51,    55,    51,    50,    11,    12,    13,    14,
       7,     8,     4,   122,   123,   124,   125,   126,    15,    16,
      47,     4,    39,    50,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     4,    51,    54,    54,     3,
       4,    39,     6,     9,     4,    50,   131,    11,    12,    13,
      14,    52,    49,    17,    18,    50,    54,    54,    15,    16,
      50,    32,   147,   148,    35,   144,   145,     3,     4,     4,
       6,    34,    34,    36,    36,    11,    12,    13,    14,    20,
      21,    17,    18,    47,    24,    51,    50,     4,     3,     4,
      53,     6,    49,    40,    41,   159,    11,    12,    13,    14,
     209,    50,    17,    18,    51,     9,    50,     3,     4,    38,
       6,    47,    17,    18,    50,    11,    12,    13,    14,    17,
      18,    17,    18,     3,     4,    46,     6,    48,    54,   238,
     209,    11,    12,    13,    14,    50,    40,     9,    42,    43,
      44,    45,   227,   228,     7,     8,   255,   211,     3,     4,
       3,     6,     3,     4,    50,     6,    11,    12,    13,    14,
      11,    12,    13,    14,   249,   250,    40,    41,   253,   254,
      50,     3,     4,    54,     6,    54,    54,    54,   242,    11,
      12,    13,    14,     7,     8,    54,     5,     3,    54,     7,
       8,    15,    16,     6,   258,    50,     4,    15,    16,    50,
       4,     4,    50,     4,    53,     7,     8,     7,     8,    50,
      50,    50,   276,    15,    16,    15,    16,    50,    50,    25,
       3,     4,     5,     6,    46,    49,    48,     4,    51,    51,
      54,    49,     0,    51,    17,    18,     4,     4,   302,   303,
      40,    41,    42,    43,    44,    45,    51,    49,    29,    49,
       3,    19,    20,    21,    22,    23,    24,    46,    26,    48,
      28,    51,    51,    31,    50,    33,    54,    54,    10,    37,
      19,    20,    21,    22,    23,    24,    54,    26,    54,    28,
      54,    39,    31,    32,    33,    39,    35,    39,    37,    39,
       4,     4,     4,     4,    39,    39,    30,    52,    39,     4,
      10,     3,     6,    51,    50,    52,     4,    50,     9,     3,
       3,    51,     3,     3,     3,    54,    54,     3,    55,    51,
      51,    54,    10,    10,    54,    10,    10,    10,    10,    51,
      51,    51,    51,     4,     4,    35,    54,    54,    53,     7,
       1,     8,   285,    51,   212,    54,    53,    27,    54,    27,
      26,    54,    51,     1,     1,    52,     1,    53,     1,    36,
       1,     1,    -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,
      65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    58,     0,     4,    19,    20,    21,    22,    23,    24,
      26,    28,    31,    33,    37,    59,    64,    65,    66,    75,
      77,    78,    79,    81,    84,    85,    39,     4,     4,     4,
       4,    52,    71,    50,    76,    50,    50,    70,     4,    50,
      71,     3,     4,     5,     6,    17,    18,    61,    39,    54,
      39,    54,     9,    39,    54,    39,    54,    19,    20,    21,
      22,    32,    35,    65,    72,    73,    75,    77,    78,    79,
      81,    84,    85,    77,     3,     4,     6,    11,    12,    13,
      14,    17,    18,    47,    50,    60,    61,    62,    63,    68,
      69,    71,    20,    21,    63,    68,    69,    71,    50,     4,
      38,    54,     9,    54,    54,    54,    54,    54,     5,     3,
       3,     6,    17,    18,     4,     4,     4,     4,    60,    54,
      53,    72,    40,    42,    43,    44,    45,    50,    50,    50,
      50,    50,    60,     7,     8,    15,    16,    40,    41,    42,
      43,    44,    45,    49,    40,    41,    51,    46,    48,    51,
      51,    25,     4,     4,    51,    51,    51,    29,     4,    51,
      67,    86,    51,    50,     3,    54,    54,    10,    54,    54,
      54,    54,     4,    60,     4,    60,     4,    60,     4,    60,
       4,    60,     4,     4,     4,     4,    63,    68,    51,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      63,    63,    47,    68,    47,    68,    39,    39,    30,    39,
      71,    51,    56,    52,     4,    10,     9,    54,     9,    51,
       9,    51,     9,    51,     9,    51,    51,    50,    50,     3,
       6,    52,    74,    60,    63,    71,     4,    67,    34,    36,
      82,    83,    51,     9,     3,     3,     3,     3,     3,    46,
      48,    68,    68,    54,    54,    32,    35,    60,    55,    53,
      83,    71,     3,    10,    10,    10,    10,    10,    68,    68,
      51,    51,    68,    68,    60,    54,    55,    71,    10,    54,
      51,    51,    51,    51,    54,    54,    54,    53,    71,    54,
       4,    80,    66,    53,    35,     7,     8,    54,    51,    54,
       7,     8,    51,    52,    71,    71,    27,    53,    27
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    75,    75,    76,
      76,    76,    77,    78,    79,    79,    80,    80,    81,    82,
      82,    83,    83,    84,    85,    85,    86,    86,    86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     4,     7,     4,     4,     4,     4,
       7,     7,     7,     7,     1,     1,     3,     3,     3,     3,
       6,     9,     5,     5,     5,     5,     5,     4,     4,     4,
       4,     4,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     6,     6,     6,     3,
       3,     3,     3,     2,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     4,     6,     3,
       3,     3,     4,     3,    14,    15,     3,     3,     7,     1,
       2,     6,     4,     7,     6,     5,     1,     1,     3,     3
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
  case 14: /* value: DIG  */
#line 72 "compilersintactic_clean.y"
              { (yyval.floatval) = (float)(yyvsp[0].intval); }
#line 1375 "compilersintactic_clean.tab.c"
    break;

  case 18: /* value: LPAREN value RPAREN  */
#line 76 "compilersintactic_clean.y"
                          { (yyval.floatval) = (yyvsp[-1].floatval); }
#line 1381 "compilersintactic_clean.tab.c"
    break;

  case 19: /* value: value PLUS value  */
#line 77 "compilersintactic_clean.y"
                            { (yyval.floatval) = (yyvsp[-2].floatval) + (yyvsp[0].floatval); }
#line 1387 "compilersintactic_clean.tab.c"
    break;

  case 20: /* value: value MINUS value  */
#line 78 "compilersintactic_clean.y"
                            { (yyval.floatval) = (yyvsp[-2].floatval) - (yyvsp[0].floatval); }
#line 1393 "compilersintactic_clean.tab.c"
    break;

  case 21: /* value: value MULT value  */
#line 79 "compilersintactic_clean.y"
                            { (yyval.floatval) = (yyvsp[-2].floatval) * (yyvsp[0].floatval); }
#line 1399 "compilersintactic_clean.tab.c"
    break;

  case 22: /* value: value DIV value  */
#line 80 "compilersintactic_clean.y"
                            { if ((yyvsp[0].floatval) == 0) { yyerror("División por cero"); (yyval.floatval) = 0; } else { (yyval.floatval) = (yyvsp[-2].floatval) / (yyvsp[0].floatval); } }
#line 1405 "compilersintactic_clean.tab.c"
    break;

  case 23: /* value: value MOD value  */
#line 81 "compilersintactic_clean.y"
                            { (yyval.floatval) = (int)(yyvsp[-2].floatval) % (int)(yyvsp[0].floatval); }
#line 1411 "compilersintactic_clean.tab.c"
    break;

  case 24: /* element: IFR LBRACKET DIG RBRACKET  */
#line 85 "compilersintactic_clean.y"
                              {
        printf("Acceso a arreglo: %s[%d]\n", (yyvsp[-3].strval), (yyvsp[-1].intval));
        (yyval.floatval) = 42.0; // ejemplo
    }
#line 1420 "compilersintactic_clean.tab.c"
    break;

  case 25: /* element: IFR LBRACKET DIG RBRACKET LBRACKET DIG RBRACKET  */
#line 89 "compilersintactic_clean.y"
                                                    {
        printf("Acceso a matriz: %s[%d][%d]\n", (yyvsp[-6].strval), (yyvsp[-4].intval), (yyvsp[-1].intval));
        (yyval.floatval) = 99.0; // ejemplo
    }
#line 1429 "compilersintactic_clean.tab.c"
    break;

  case 26: /* reduction: SUM LPAREN IFR RPAREN  */
#line 95 "compilersintactic_clean.y"
                                      { doReduction("sum", (yyvsp[-1].strval), -1); (yyval.floatval) = 0.0; }
#line 1435 "compilersintactic_clean.tab.c"
    break;

  case 27: /* reduction: PROD LPAREN IFR RPAREN  */
#line 96 "compilersintactic_clean.y"
                                      { doReduction("prod", (yyvsp[-1].strval), -1); (yyval.floatval) = 0.0; }
#line 1441 "compilersintactic_clean.tab.c"
    break;

  case 28: /* reduction: MAX LPAREN IFR RPAREN  */
#line 97 "compilersintactic_clean.y"
                                      { doReduction("max", (yyvsp[-1].strval), -1); (yyval.floatval) = 0.0; }
#line 1447 "compilersintactic_clean.tab.c"
    break;

  case 29: /* reduction: MIN LPAREN IFR RPAREN  */
#line 98 "compilersintactic_clean.y"
                                      { doReduction("min", (yyvsp[-1].strval), -1); (yyval.floatval) = 0.0; }
#line 1453 "compilersintactic_clean.tab.c"
    break;

  case 30: /* reduction: SUM LPAREN IFR LBRACKET DIG RBRACKET RPAREN  */
#line 99 "compilersintactic_clean.y"
                                                    { doReduction("sum", (yyvsp[-4].strval), (yyvsp[-2].intval)); (yyval.floatval) = 0.0; }
#line 1459 "compilersintactic_clean.tab.c"
    break;

  case 31: /* reduction: PROD LPAREN IFR LBRACKET DIG RBRACKET RPAREN  */
#line 100 "compilersintactic_clean.y"
                                                    { doReduction("prod", (yyvsp[-4].strval), (yyvsp[-2].intval)); (yyval.floatval) = 0.0; }
#line 1465 "compilersintactic_clean.tab.c"
    break;

  case 32: /* reduction: MAX LPAREN IFR LBRACKET DIG RBRACKET RPAREN  */
#line 101 "compilersintactic_clean.y"
                                                    { doReduction("max", (yyvsp[-4].strval), (yyvsp[-2].intval)); (yyval.floatval) = 0.0; }
#line 1471 "compilersintactic_clean.tab.c"
    break;

  case 33: /* reduction: MIN LPAREN IFR LBRACKET DIG RBRACKET RPAREN  */
#line 102 "compilersintactic_clean.y"
                                                    { doReduction("min", (yyvsp[-4].strval), (yyvsp[-2].intval)); (yyval.floatval) = 0.0; }
#line 1477 "compilersintactic_clean.tab.c"
    break;

  case 36: /* declaration: STR IFR COL  */
#line 110 "compilersintactic_clean.y"
                                            {addSymbol((yyvsp[-1].strval), ST);}
#line 1483 "compilersintactic_clean.tab.c"
    break;

  case 37: /* declaration: INT IFR COL  */
#line 111 "compilersintactic_clean.y"
                                    {addSymbol((yyvsp[-1].strval), IN);}
#line 1489 "compilersintactic_clean.tab.c"
    break;

  case 38: /* declaration: DEC IFR COL  */
#line 112 "compilersintactic_clean.y"
                                    {addSymbol((yyvsp[-1].strval), FL);}
#line 1495 "compilersintactic_clean.tab.c"
    break;

  case 39: /* declaration: BOOLEAN IFR COL  */
#line 113 "compilersintactic_clean.y"
                                        {addSymbol((yyvsp[-1].strval), BO);}
#line 1501 "compilersintactic_clean.tab.c"
    break;

  case 42: /* initialization: STR IFR ASSIGN STG COL  */
#line 118 "compilersintactic_clean.y"
                                                       {addSymbol((yyvsp[-3].strval), ST); setStringValue((yyvsp[-3].strval), (yyvsp[-1].strval));}
#line 1507 "compilersintactic_clean.tab.c"
    break;

  case 43: /* initialization: INT IFR ASSIGN DIG COL  */
#line 119 "compilersintactic_clean.y"
                                               {addSymbol((yyvsp[-3].strval), IN); setIntValue((yyvsp[-3].strval),(yyvsp[-1].intval));}
#line 1513 "compilersintactic_clean.tab.c"
    break;

  case 44: /* initialization: DEC IFR ASSIGN FLT COL  */
#line 120 "compilersintactic_clean.y"
                                               {addSymbol((yyvsp[-3].strval), FL); setFloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1519 "compilersintactic_clean.tab.c"
    break;

  case 45: /* initialization: BOOLEAN IFR ASSIGN TRUE COL  */
#line 121 "compilersintactic_clean.y"
                                                    {addSymbol((yyvsp[-3].strval), BO); setIntValue((yyvsp[-3].strval),1);}
#line 1525 "compilersintactic_clean.tab.c"
    break;

  case 46: /* initialization: BOOLEAN IFR ASSIGN FALSE COL  */
#line 122 "compilersintactic_clean.y"
                                                     {addSymbol((yyvsp[-3].strval), BO); setIntValue((yyvsp[-3].strval),0);}
#line 1531 "compilersintactic_clean.tab.c"
    break;

  case 47: /* asignation: IFR ASSIGN STG COL  */
#line 125 "compilersintactic_clean.y"
                                                                {setStringValue((yyvsp[-3].strval),(yyvsp[-1].strval));}
#line 1537 "compilersintactic_clean.tab.c"
    break;

  case 48: /* asignation: IFR ASSIGN element COL  */
#line 126 "compilersintactic_clean.y"
                                               { setIntValue((yyvsp[-3].strval), (yyvsp[-1].floatval)); }
#line 1543 "compilersintactic_clean.tab.c"
    break;

  case 49: /* asignation: IFR ASSIGN DIG COL  */
#line 127 "compilersintactic_clean.y"
                                               {setIntValue((yyvsp[-3].strval),(yyvsp[-1].intval));}
#line 1549 "compilersintactic_clean.tab.c"
    break;

  case 50: /* asignation: IFR ASSIGN FLT COL  */
#line 128 "compilersintactic_clean.y"
                                                {setFloatValue((yyvsp[-3].strval),(yyvsp[-1].floatval));}
#line 1555 "compilersintactic_clean.tab.c"
    break;

  case 51: /* asignation: IFR ASSIGN TRUE COL  */
#line 129 "compilersintactic_clean.y"
                                                {setIntValue((yyvsp[-3].strval),1);}
#line 1561 "compilersintactic_clean.tab.c"
    break;

  case 52: /* asignation: IFR ASSIGN FALSE COL  */
#line 130 "compilersintactic_clean.y"
                                                 {setIntValue((yyvsp[-3].strval),0);}
#line 1567 "compilersintactic_clean.tab.c"
    break;

  case 114: /* function: FUNCTION IFR LPAREN parameters RPAREN body  */
#line 228 "compilersintactic_clean.y"
                                                                                   {addSymbol((yyvsp[-4].strval), FN);setFnValue((yyvsp[-4].strval), (yyvsp[-4].strval));}
#line 1573 "compilersintactic_clean.tab.c"
    break;

  case 115: /* function: FUNCTION IFR LPAREN RPAREN body  */
#line 229 "compilersintactic_clean.y"
                                                        {addSymbol((yyvsp[-3].strval), FN);setFnValue((yyvsp[-3].strval), (yyvsp[-3].strval));}
#line 1579 "compilersintactic_clean.tab.c"
    break;


#line 1583 "compilersintactic_clean.tab.c"

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

#line 237 "compilersintactic_clean.y"


void yyerror(char *s) {
    printf("Error sintáctico: %s en la linea: %i\n", s, yylineno);
}

int main(int argc, char **argv){
    printf("Running... \n");
    if(argc > 1){
        yyin = fopen(argv[1], "rt");
    }else{
        yyin = stdin;
    }
    yyparse();
    return 0;
}
