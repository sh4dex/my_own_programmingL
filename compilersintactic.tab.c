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
#line 3 "compilersintactic.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
extern char *yytext;
extern int yylineno;
extern FILE *yyin;
extern int yylex(void);
void yyerror(char *s);

#line 83 "compilersintactic.tab.c"

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
  YYSYMBOL_LBRACKET = 7,                   /* LBRACKET  */
  YYSYMBOL_RBRACKET = 8,                   /* RBRACKET  */
  YYSYMBOL_BOOLEAN = 9,                    /* BOOLEAN  */
  YYSYMBOL_MAKE = 10,                      /* MAKE  */
  YYSYMBOL_LOOP = 11,                      /* LOOP  */
  YYSYMBOL_ENDLOOP = 12,                   /* ENDLOOP  */
  YYSYMBOL_TRUE = 13,                      /* TRUE  */
  YYSYMBOL_FALSE = 14,                     /* FALSE  */
  YYSYMBOL_TIF = 15,                       /* TIF  */
  YYSYMBOL_EIF = 16,                       /* EIF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_DWHILE = 18,                    /* DWHILE  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_EWHILE = 20,                    /* EWHILE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_EFOR = 22,                      /* EFOR  */
  YYSYMBOL_RET = 23,                       /* RET  */
  YYSYMBOL_FUNCTION = 24,                  /* FUNCTION  */
  YYSYMBOL_SWTC = 25,                      /* SWTC  */
  YYSYMBOL_ESAC = 26,                      /* ESAC  */
  YYSYMBOL_KAERB = 27,                     /* KAERB  */
  YYSYMBOL_DEF = 28,                       /* DEF  */
  YYSYMBOL_YRT = 29,                       /* YRT  */
  YYSYMBOL_HCTAC = 30,                     /* HCTAC  */
  YYSYMBOL_SUM = 31,                       /* SUM  */
  YYSYMBOL_PROD = 32,                      /* PROD  */
  YYSYMBOL_MAX = 33,                       /* MAX  */
  YYSYMBOL_MIN = 34,                       /* MIN  */
  YYSYMBOL_INCR = 35,                      /* INCR  */
  YYSYMBOL_DECR = 36,                      /* DECR  */
  YYSYMBOL_PLUS = 37,                      /* PLUS  */
  YYSYMBOL_MINUS = 38,                     /* MINUS  */
  YYSYMBOL_MULT = 39,                      /* MULT  */
  YYSYMBOL_DIV = 40,                       /* DIV  */
  YYSYMBOL_MOD = 41,                       /* MOD  */
  YYSYMBOL_ASSIGN = 42,                    /* ASSIGN  */
  YYSYMBOL_EQ = 43,                        /* EQ  */
  YYSYMBOL_DIFF = 44,                      /* DIFF  */
  YYSYMBOL_NOT = 45,                       /* NOT  */
  YYSYMBOL_LT = 46,                        /* LT  */
  YYSYMBOL_GT = 47,                        /* GT  */
  YYSYMBOL_LEQ = 48,                       /* LEQ  */
  YYSYMBOL_GEQ = 49,                       /* GEQ  */
  YYSYMBOL_AND = 50,                       /* AND  */
  YYSYMBOL_OR = 51,                        /* OR  */
  YYSYMBOL_LPAREN = 52,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 53,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 54,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 55,                    /* RBRACE  */
  YYSYMBOL_COL = 56,                       /* COL  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_statement_list = 59,            /* statement_list  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_value = 61,                     /* value  */
  YYSYMBOL_boolean = 62,                   /* boolean  */
  YYSYMBOL_declaration = 63,               /* declaration  */
  YYSYMBOL_initialization = 64,            /* initialization  */
  YYSYMBOL_asignation = 65,                /* asignation  */
  YYSYMBOL_operation_int = 66,             /* operation_int  */
  YYSYMBOL_operation_float = 67,           /* operation_float  */
  YYSYMBOL_reduction = 68,                 /* reduction  */
  YYSYMBOL_condition = 69,                 /* condition  */
  YYSYMBOL_conditioncomp = 70,             /* conditioncomp  */
  YYSYMBOL_ifcondition = 71,               /* ifcondition  */
  YYSYMBOL_body = 72,                      /* body  */
  YYSYMBOL_73_1 = 73,                      /* $@1  */
  YYSYMBOL_bodies = 74,                    /* bodies  */
  YYSYMBOL_whileloop = 75,                 /* whileloop  */
  YYSYMBOL_body_stmt = 76,                 /* body_stmt  */
  YYSYMBOL_elsebody = 77,                  /* elsebody  */
  YYSYMBOL_if = 78,                        /* if  */
  YYSYMBOL_whilecondition = 79,            /* whilecondition  */
  YYSYMBOL_while = 80,                     /* while  */
  YYSYMBOL_do_while = 81,                  /* do_while  */
  YYSYMBOL_for = 82,                       /* for  */
  YYSYMBOL_for_asignation = 83,            /* for_asignation  */
  YYSYMBOL_switch = 84,                    /* switch  */
  YYSYMBOL_cases = 85,                     /* cases  */
  YYSYMBOL_case = 86,                      /* case  */
  YYSYMBOL_try_catch = 87,                 /* try_catch  */
  YYSYMBOL_function = 88,                  /* function  */
  YYSYMBOL_parameters = 89                 /* parameters  */
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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   492

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  360

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
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    48,    50,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    68,    69,    70,    71,
      75,    76,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    95,    96,    97,    98,    99,   100,
     101,   105,   106,   107,   108,   109,   110,   111,   115,   116,
     117,   118,   119,   120,   121,   122,   131,   132,   133,   134,
     135,   136,   137,   138,   147,   148,   149,   150,   151,   152,
     153,   154,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     179,   180,   181,   182,   183,   184,   188,   189,   190,   194,
     194,   199,   201,   205,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   224,   225,   229,   230,
     234,   235,   236,   240,   244,   248,   249,   253,   254,   258,
     262,   263,   267,   268,   272,   276,   277,   281,   282,   283,
     284
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
  "IFR", "LBRACKET", "RBRACKET", "BOOLEAN", "MAKE", "LOOP", "ENDLOOP",
  "TRUE", "FALSE", "TIF", "EIF", "ELSE", "DWHILE", "WHILE", "EWHILE",
  "FOR", "EFOR", "RET", "FUNCTION", "SWTC", "ESAC", "KAERB", "DEF", "YRT",
  "HCTAC", "SUM", "PROD", "MAX", "MIN", "INCR", "DECR", "PLUS", "MINUS",
  "MULT", "DIV", "MOD", "ASSIGN", "EQ", "DIFF", "NOT", "LT", "GT", "LEQ",
  "GEQ", "AND", "OR", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "COL",
  "$accept", "program", "statement_list", "statement", "value", "boolean",
  "declaration", "initialization", "asignation", "operation_int",
  "operation_float", "reduction", "condition", "conditioncomp",
  "ifcondition", "body", "$@1", "bodies", "whileloop", "body_stmt",
  "elsebody", "if", "whilecondition", "while", "do_while", "for",
  "for_asignation", "switch", "cases", "case", "try_catch", "function",
  "parameters", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-128)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     314,    64,    73,    90,    -2,    92,    41,    99,    51,   115,
     129,   117,    99,   163,  -128,   314,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,    15,    16,    17,
      33,    20,   146,    99,  -128,   157,   146,    99,   124,   144,
     213,   203,  -128,  -128,   241,    47,  -128,   242,    48,  -128,
     254,   259,  -128,   209,   230,   237,  -128,   245,   246,    45,
     231,   307,   302,   168,  -128,  -128,  -128,  -128,   328,  -128,
    -128,   255,   263,   264,   269,   270,   318,    87,  -128,    10,
     277,   315,   285,   282,  -128,   161,    24,   283,   339,   331,
     354,    49,   316,   320,   362,   322,  -128,    61,   312,   371,
     324,  -128,    74,   317,   373,   326,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,   258,   287,    61,    61,    61,    61,    61,
    -128,    74,    74,    74,    74,    74,  -128,   375,   329,   330,
     141,   184,   207,   243,   247,   378,   381,   382,   383,   195,
     251,   251,   251,   251,   251,   251,   193,   193,  -128,   152,
     189,  -128,  -128,   374,   384,   386,   387,   388,   251,   340,
    -128,  -128,   342,  -128,   285,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,   146,  -128,  -128,  -128,  -128,   353,   356,    -2,
      99,  -128,    83,   345,   394,    25,  -128,  -128,    26,  -128,
    -128,    34,  -128,  -128,  -128,   102,   102,  -128,  -128,  -128,
     191,   191,  -128,  -128,  -128,    38,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,    76,    79,
      80,    81,   181,   348,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,   350,  -128,   351,  -128,   352,   363,   365,   366,
     367,   355,  -128,  -128,  -128,   111,   401,   406,  -128,    99,
     407,    63,   359,   411,  -128,   412,  -128,   413,  -128,   414,
    -128,   415,  -128,   416,  -128,   417,  -128,   418,  -128,   192,
     195,   195,    42,  -128,  -128,    99,   368,   369,  -128,    -2,
    -128,   251,   370,    40,  -128,    99,   419,   420,   421,   422,
     423,   424,   425,   426,   195,   195,   385,   389,   251,   379,
     402,   195,   195,   380,    99,  -128,  -128,  -128,   390,   391,
     392,   393,   397,   398,   399,   400,  -128,  -128,  -128,  -128,
     403,   405,  -128,   408,   409,    99,   410,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,   427,  -128,   431,   433,   396,
    -128,  -128,   224,   428,   404,   429,   430,   432,   434,   435,
    -128,  -128,  -128,    99,    99,   436,   437,  -128,   439,  -128
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     1,     4,     0,     0,    23,     0,     0,    24,
       0,     0,    22,    54,    62,     0,    55,     0,     0,     0,
       0,     0,     0,     0,    25,    17,    18,    16,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,   101,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    55,     0,     0,     0,
      62,    63,     0,     0,     0,     0,    42,    43,    41,    44,
      45,    54,    62,     0,     0,     0,     0,     0,     0,     0,
      46,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    96,    97,   118,     0,     0,     0,     0,     0,     0,
     114,   115,     0,   108,   101,   106,   107,   109,   110,   111,
     112,   113,     0,   122,   120,   121,   123,     0,     0,   137,
       0,   138,     0,     0,     0,     0,    35,    39,     0,    36,
      40,     0,    34,    53,    61,    48,    49,    50,    51,    52,
      56,    57,    58,    59,    60,     0,    37,    38,    81,    80,
      86,    82,    87,    83,    88,    84,    89,    85,     0,     0,
       0,     0,     0,     0,    72,    74,    76,    77,    78,    79,
      73,    75,     0,    90,     0,    91,     0,     0,     0,     0,
       0,     0,   105,   100,   102,     0,     0,     0,   136,     0,
       0,     0,     0,     0,    27,     0,    28,     0,    26,     0,
      29,     0,    64,     0,    65,     0,    66,     0,    67,     0,
       0,     0,     0,   119,   104,     0,     0,     0,   135,   139,
     140,     0,     0,     0,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   131,   134,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    94,    93,    95,
       0,     0,   103,     0,     0,     0,     0,    31,    32,    30,
      33,    68,    69,    70,    71,     0,   117,     0,     0,     0,
     133,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   127,   128,     0,     0,     0,     0,   125,     0,   126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,   440,  -128,  -127,   -24,  -128,   -72,   -80,   -10,
      -4,  -128,   -35,   441,  -128,   -12,  -128,   276,   -63,  -128,
    -128,   -54,  -128,   -26,   -53,   -52,  -128,   -48,  -128,   158,
     -40,   -39,  -128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    13,    14,    15,    76,   222,    16,    17,    18,   113,
     114,    78,    79,    87,    33,    35,    82,   162,    19,   164,
     273,    20,    37,    21,    22,    23,   343,    24,   283,   284,
      25,    26,   182
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    86,   161,   209,   211,   213,   215,   217,    77,    84,
     160,   181,    85,   224,   225,   226,   227,   228,   229,   163,
      60,    81,    44,    47,    50,    88,    61,    62,   165,   167,
     168,   241,   253,   255,   169,    98,    53,    54,    55,    56,
      30,   257,   170,   171,   103,   259,    57,    58,   111,   112,
      95,    56,   100,    96,   101,   179,   166,    45,    48,    51,
     149,   150,    63,   151,   111,   298,   281,    96,   282,   299,
      27,    46,    49,    52,   149,   150,    64,   174,   112,    28,
     101,   254,   256,   261,   161,    59,   263,   265,   267,   281,
     258,   282,   160,    32,   260,   305,    29,    59,    31,    97,
     102,   163,   180,    36,   223,   195,   196,   197,   198,   199,
     165,   167,   168,    97,   233,   235,   169,   200,   201,   202,
     203,   204,   230,   231,   170,   171,   102,    89,    90,   262,
     146,   147,   264,   266,   268,    39,   249,   245,   166,   250,
     148,   117,   118,   119,    65,    66,    67,   208,    85,    65,
      66,    67,    68,    34,   303,    65,    66,    67,    68,    69,
      70,   149,   150,    42,   275,    69,    70,    38,   248,    40,
     280,   320,    71,    72,    73,    74,    83,    71,    72,    73,
      74,   128,   129,    71,    72,    73,    74,    65,    66,    67,
     210,    75,    65,    66,    67,    68,    91,   232,    65,    66,
      67,    68,    69,    70,   146,   147,    69,    70,    69,    70,
      65,    66,    67,   212,   173,    71,    72,    73,    74,    92,
      71,    72,    73,    74,   146,   147,    71,    72,    73,    74,
     123,   124,   125,    93,   234,   296,   297,   278,    71,    72,
      73,    74,   294,   295,    94,    99,    65,    66,    67,   214,
      65,    66,    67,   216,    65,    66,    67,   104,   344,   316,
     317,   346,   347,   300,   105,   106,   323,   324,   115,   116,
     117,   118,   119,   307,    71,    72,    73,    74,    71,    72,
      73,    74,    71,    72,    73,    74,   107,   120,   154,   155,
     156,     4,   326,   108,   157,   115,   116,   117,   118,   119,
       6,   109,   110,     7,     8,   127,     9,   135,   158,    10,
      11,   193,   159,   339,    12,   136,   137,     1,     2,     3,
       4,   138,   139,     5,   121,   122,   123,   124,   125,     6,
     152,   153,     7,     8,   172,     9,   175,   177,    10,    11,
     194,   355,   356,    12,   121,   122,   123,   124,   125,   115,
     116,   117,   118,   119,   121,   122,   123,   124,   125,   176,
     178,   140,   141,   126,   142,   143,   144,   145,   187,   183,
     185,   130,   184,   190,   131,   132,   133,   134,   186,   188,
     189,   191,   192,   205,   218,   206,   207,   219,   220,   221,
     237,   236,   238,   239,   240,   246,   242,   243,   247,   251,
     252,   269,   270,   271,   276,    45,   272,    48,    51,    63,
     277,   274,   285,   279,   286,   287,   288,   289,   290,   291,
     292,   293,   322,   345,   301,   302,   304,   308,   309,   310,
     311,   312,   313,   314,   315,   321,   325,   342,   318,     4,
     244,   306,   319,     0,     0,     0,   327,   328,   329,   330,
     331,   332,   333,   334,     0,    43,     0,   349,   357,   335,
     336,   359,     0,     0,   337,   338,   340,   351,     0,     0,
     352,     0,     0,    80,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,   348,   350,     0,   353,     0,   354,
       0,     0,   358
};

static const yytype_int16 yycheck[] =
{
      12,    36,    82,   130,   131,   132,   133,   134,    32,    35,
      82,    91,    36,   140,   141,   142,   143,   144,   145,    82,
      30,    33,     7,     7,     7,    37,    30,     7,    82,    82,
      82,   158,     7,     7,    82,    45,     3,     4,     5,     6,
      42,     7,    82,    82,    48,     7,    13,    14,     3,     4,
       3,     6,     4,     6,     6,     6,    82,    42,    42,    42,
      50,    51,    42,    53,     3,    23,    26,     6,    28,    27,
       6,    56,    56,    56,    50,    51,    56,    53,     4,     6,
       6,    56,    56,     7,   164,    52,     7,     7,     7,    26,
      56,    28,   164,    52,    56,    55,     6,    52,     6,    52,
      52,   164,    53,    52,   139,   115,   116,   117,   118,   119,
     164,   164,   164,    52,   149,   150,   164,   121,   122,   123,
     124,   125,   146,   147,   164,   164,    52,     3,     4,    53,
      43,    44,    53,    53,    53,     6,    53,   172,   164,    56,
      53,    39,    40,    41,     3,     4,     5,     6,   172,     3,
       4,     5,     6,    54,   281,     3,     4,     5,     6,    13,
      14,    50,    51,     0,    53,    13,    14,    52,   180,    52,
     250,   298,    31,    32,    33,    34,    19,    31,    32,    33,
      34,    13,    14,    31,    32,    33,    34,     3,     4,     5,
       6,    45,     3,     4,     5,     6,    52,    45,     3,     4,
       5,     6,    13,    14,    43,    44,    13,    14,    13,    14,
       3,     4,     5,     6,    53,    31,    32,    33,    34,     6,
      31,    32,    33,    34,    43,    44,    31,    32,    33,    34,
      39,    40,    41,    30,    45,   270,   271,   249,    31,    32,
      33,    34,    50,    51,     3,     3,     3,     4,     5,     6,
       3,     4,     5,     6,     3,     4,     5,     3,   338,   294,
     295,    37,    38,   275,     5,    56,   301,   302,    37,    38,
      39,    40,    41,   285,    31,    32,    33,    34,    31,    32,
      33,    34,    31,    32,    33,    34,    56,    56,     3,     4,
       5,     6,   304,    56,     9,    37,    38,    39,    40,    41,
      15,    56,    56,    18,    19,     3,    21,    52,    23,    24,
      25,    53,    27,   325,    29,    52,    52,     3,     4,     5,
       6,    52,    52,     9,    37,    38,    39,    40,    41,    15,
      53,    16,    18,    19,    52,    21,    53,     6,    24,    25,
      53,   353,   354,    29,    37,    38,    39,    40,    41,    37,
      38,    39,    40,    41,    37,    38,    39,    40,    41,    20,
       6,    43,    44,    56,    46,    47,    48,    49,    56,    53,
       8,    43,    52,    56,    46,    47,    48,    49,    56,     8,
      56,     8,    56,     8,     6,    56,    56,     6,     6,     6,
       6,    17,     6,     6,     6,    42,    56,    55,    42,    54,
       6,    53,    52,    52,     3,    42,    54,    42,    42,    42,
       4,    56,    53,     6,     3,     3,     3,     3,     3,     3,
       3,     3,    20,    27,    56,    56,    56,     8,     8,     8,
       8,     8,     8,     8,     8,    56,    56,     6,    53,     6,
     164,   283,    53,    -1,    -1,    -1,    56,    56,    56,    56,
      53,    53,    53,    53,    -1,    15,    -1,    53,    22,    56,
      55,    22,    -1,    -1,    56,    56,    56,    37,    -1,    -1,
      38,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    56,    56,    -1,    53,    -1,    54,
      -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    15,    18,    19,    21,
      24,    25,    29,    58,    59,    60,    63,    64,    65,    75,
      78,    80,    81,    82,    84,    87,    88,     6,     6,     6,
      42,     6,    52,    71,    54,    72,    52,    79,    52,     6,
      52,    72,     0,    59,     7,    42,    56,     7,    42,    56,
       7,    42,    56,     3,     4,     5,     6,    13,    14,    52,
      66,    67,     7,    42,    56,     3,     4,     5,     6,    13,
      14,    31,    32,    33,    34,    45,    61,    62,    68,    69,
      70,    72,    73,    19,    80,    62,    69,    70,    72,     3,
       4,    52,     6,    30,     3,     3,     6,    52,    66,     3,
       4,     6,    52,    67,     3,     5,    56,    56,    56,    56,
      56,     3,     4,    66,    67,    37,    38,    39,    40,    41,
      56,    37,    38,    39,    40,    41,    56,     3,    13,    14,
      43,    46,    47,    48,    49,    52,    52,    52,    52,    52,
      43,    44,    46,    47,    48,    49,    43,    44,    53,    50,
      51,    53,    53,    16,     3,     4,     5,     9,    23,    27,
      64,    65,    74,    75,    76,    78,    80,    81,    82,    84,
      87,    88,    52,    53,    53,    53,    20,     6,     6,     6,
      53,    65,    89,    53,    52,     8,    56,    56,     8,    56,
      56,     8,    56,    53,    53,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    67,     8,    56,    56,     6,    61,
       6,    61,     6,    61,     6,    61,     6,    61,     6,     6,
       6,     6,    62,    69,    61,    61,    61,    61,    61,    61,
      62,    62,    45,    69,    45,    69,    17,     6,     6,     6,
       6,    61,    56,    55,    74,    69,    42,    42,    72,    53,
      56,    54,     6,     7,    56,     7,    56,     7,    56,     7,
      56,     7,    53,     7,    53,     7,    53,     7,    53,    53,
      52,    52,    54,    77,    56,    53,     3,     4,    72,     6,
      65,    26,    28,    85,    86,    53,     3,     3,     3,     3,
       3,     3,     3,     3,    50,    51,    69,    69,    23,    27,
      72,    56,    56,    61,    56,    55,    86,    72,     8,     8,
       8,     8,     8,     8,     8,     8,    69,    69,    53,    53,
      61,    56,    20,    69,    69,    56,    72,    56,    56,    56,
      56,    53,    53,    53,    53,    56,    55,    56,    56,    72,
      56,    55,     6,    83,    65,    27,    37,    38,    56,    53,
      56,    37,    38,    53,    54,    72,    72,    22,    55,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    61,    61,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    71,    71,    71,    73,
      72,    74,    74,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    80,    81,    82,    82,    83,    83,    84,
      85,    85,    86,    86,    87,    88,    88,    89,    89,    89,
      89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     6,     6,     6,     6,
       9,     9,     9,     9,     5,     5,     5,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     4,     4,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     4,     4,     4,     4,     7,     7,
       7,     7,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     6,     6,     6,     6,     3,     3,     3,     0,
       4,     0,     2,     8,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     4,     6,
       3,     3,     3,     4,     3,    14,    15,     3,     3,     7,
       1,     2,     6,     4,     7,     6,     5,     1,     1,     3,
       3
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
  case 22: /* declaration: STR IFR COL  */
#line 80 "compilersintactic.y"
                  {newSymbolToTable((yyvsp[-1].strval), ST);}
#line 1414 "compilersintactic.tab.c"
    break;

  case 23: /* declaration: INT IFR COL  */
#line 81 "compilersintactic.y"
                  {newSymbolToTable((yyvsp[-1].strval), IN);}
#line 1420 "compilersintactic.tab.c"
    break;

  case 24: /* declaration: DEC IFR COL  */
#line 82 "compilersintactic.y"
                  {newSymbolToTable((yyvsp[-1].strval), FL);}
#line 1426 "compilersintactic.tab.c"
    break;

  case 25: /* declaration: BOOLEAN IFR COL  */
#line 83 "compilersintactic.y"
                      {newSymbolToTable((yyvsp[-1].strval), BO);}
#line 1432 "compilersintactic.tab.c"
    break;

  case 26: /* declaration: STR IFR LBRACKET INT RBRACKET COL  */
#line 84 "compilersintactic.y"
                                        { /* vector string */ }
#line 1438 "compilersintactic.tab.c"
    break;

  case 27: /* declaration: INT IFR LBRACKET INT RBRACKET COL  */
#line 85 "compilersintactic.y"
                                        { /* vector int */ }
#line 1444 "compilersintactic.tab.c"
    break;

  case 28: /* declaration: DEC IFR LBRACKET INT RBRACKET COL  */
#line 86 "compilersintactic.y"
                                        { /* vector float */ }
#line 1450 "compilersintactic.tab.c"
    break;

  case 29: /* declaration: BOOLEAN IFR LBRACKET INT RBRACKET COL  */
#line 87 "compilersintactic.y"
                                            { /* vector bool */ }
#line 1456 "compilersintactic.tab.c"
    break;

  case 30: /* declaration: STR IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL  */
#line 88 "compilersintactic.y"
                                                              { /* matriz string */ }
#line 1462 "compilersintactic.tab.c"
    break;

  case 31: /* declaration: INT IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL  */
#line 89 "compilersintactic.y"
                                                              { /* matriz int */ }
#line 1468 "compilersintactic.tab.c"
    break;

  case 32: /* declaration: DEC IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL  */
#line 90 "compilersintactic.y"
                                                              { /* matriz float */ }
#line 1474 "compilersintactic.tab.c"
    break;

  case 33: /* declaration: BOOLEAN IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL  */
#line 91 "compilersintactic.y"
                                                                  { /* matriz bool */ }
#line 1480 "compilersintactic.tab.c"
    break;

  case 34: /* initialization: STR IFR ASSIGN STR COL  */
#line 95 "compilersintactic.y"
                             {newSymbolToTable((yyvsp[-3].strval), ST); setStringValue((yyvsp[-3].strval), (yyvsp[-1].strval));}
#line 1486 "compilersintactic.tab.c"
    break;

  case 35: /* initialization: INT IFR ASSIGN INT COL  */
#line 96 "compilersintactic.y"
                             {newSymbolToTable((yyvsp[-3].strval), IN); setintValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1492 "compilersintactic.tab.c"
    break;

  case 36: /* initialization: DEC IFR ASSIGN DEC COL  */
#line 97 "compilersintactic.y"
                             {newSymbolToTable((yyvsp[-3].strval), FL); setfloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1498 "compilersintactic.tab.c"
    break;

  case 37: /* initialization: BOOLEAN IFR ASSIGN TRUE COL  */
#line 98 "compilersintactic.y"
                                  {newSymbolToTable((yyvsp[-3].strval), BO); setBooleanValue((yyvsp[-3].strval), 1);}
#line 1504 "compilersintactic.tab.c"
    break;

  case 38: /* initialization: BOOLEAN IFR ASSIGN FALSE COL  */
#line 99 "compilersintactic.y"
                                   {newSymbolToTable((yyvsp[-3].strval), BO); setBooleanValue((yyvsp[-3].strval), 0);}
#line 1510 "compilersintactic.tab.c"
    break;

  case 39: /* initialization: INT IFR ASSIGN operation_int COL  */
#line 100 "compilersintactic.y"
                                       {newSymbolToTable((yyvsp[-3].strval), IN); setintValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1516 "compilersintactic.tab.c"
    break;

  case 40: /* initialization: DEC IFR ASSIGN operation_float COL  */
#line 101 "compilersintactic.y"
                                         {newSymbolToTable((yyvsp[-3].strval), FL); setfloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1522 "compilersintactic.tab.c"
    break;

  case 41: /* asignation: IFR ASSIGN STR COL  */
#line 105 "compilersintactic.y"
                         {setStringValue((yyvsp[-3].strval), (yyvsp[-1].strval));}
#line 1528 "compilersintactic.tab.c"
    break;

  case 42: /* asignation: IFR ASSIGN INT COL  */
#line 106 "compilersintactic.y"
                         {setintValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1534 "compilersintactic.tab.c"
    break;

  case 43: /* asignation: IFR ASSIGN DEC COL  */
#line 107 "compilersintactic.y"
                         {setfloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1540 "compilersintactic.tab.c"
    break;

  case 44: /* asignation: IFR ASSIGN TRUE COL  */
#line 108 "compilersintactic.y"
                          {setBooleanValue((yyvsp[-3].strval), 1);}
#line 1546 "compilersintactic.tab.c"
    break;

  case 45: /* asignation: IFR ASSIGN FALSE COL  */
#line 109 "compilersintactic.y"
                           {setBooleanValue((yyvsp[-3].strval), 0);}
#line 1552 "compilersintactic.tab.c"
    break;

  case 46: /* asignation: IFR ASSIGN operation_int COL  */
#line 110 "compilersintactic.y"
                                   {setintValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1558 "compilersintactic.tab.c"
    break;

  case 47: /* asignation: IFR ASSIGN operation_float COL  */
#line 111 "compilersintactic.y"
                                     {setfloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1564 "compilersintactic.tab.c"
    break;

  case 48: /* operation_int: operation_int PLUS operation_int  */
#line 115 "compilersintactic.y"
                                         { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval); }
#line 1570 "compilersintactic.tab.c"
    break;

  case 49: /* operation_int: operation_int MINUS operation_int  */
#line 116 "compilersintactic.y"
                                         { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1576 "compilersintactic.tab.c"
    break;

  case 50: /* operation_int: operation_int MULT operation_int  */
#line 117 "compilersintactic.y"
                                         { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1582 "compilersintactic.tab.c"
    break;

  case 51: /* operation_int: operation_int DIV operation_int  */
#line 118 "compilersintactic.y"
                                         { (yyval.intval) = ((yyvsp[0].intval) == 0) ? (yyerror("División por cero"), 0) : (yyvsp[-2].intval) / (yyvsp[0].intval); }
#line 1588 "compilersintactic.tab.c"
    break;

  case 52: /* operation_int: operation_int MOD operation_int  */
#line 119 "compilersintactic.y"
                                         { (yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval); }
#line 1594 "compilersintactic.tab.c"
    break;

  case 53: /* operation_int: LPAREN operation_int RPAREN  */
#line 120 "compilersintactic.y"
                                         { (yyval.intval) = (yyvsp[-1].intval); }
#line 1600 "compilersintactic.tab.c"
    break;

  case 54: /* operation_int: INT  */
#line 121 "compilersintactic.y"
                                         { (yyval.intval) = (yyvsp[0].intval); }
#line 1606 "compilersintactic.tab.c"
    break;

  case 55: /* operation_int: IFR  */
#line 122 "compilersintactic.y"
          { 
        DataType t; 
        int *val = getVal((yyvsp[0].strval), &t); 
        if (val && t == IN) (yyval.intval) = *val; 
        else { yyerror("Variable entera no declarada o tipo incorrecto"); (yyval.intval) = 0; }
      }
#line 1617 "compilersintactic.tab.c"
    break;

  case 56: /* operation_float: operation_float PLUS operation_float  */
#line 131 "compilersintactic.y"
                                             { (yyval.floatval) = (yyvsp[-2].floatval) + (yyvsp[0].floatval); }
#line 1623 "compilersintactic.tab.c"
    break;

  case 57: /* operation_float: operation_float MINUS operation_float  */
#line 132 "compilersintactic.y"
                                             { (yyval.floatval) = (yyvsp[-2].floatval) - (yyvsp[0].floatval); }
#line 1629 "compilersintactic.tab.c"
    break;

  case 58: /* operation_float: operation_float MULT operation_float  */
#line 133 "compilersintactic.y"
                                             { (yyval.floatval) = (yyvsp[-2].floatval) * (yyvsp[0].floatval); }
#line 1635 "compilersintactic.tab.c"
    break;

  case 59: /* operation_float: operation_float DIV operation_float  */
#line 134 "compilersintactic.y"
                                             { (yyval.floatval) = ((yyvsp[0].floatval) == 0) ? (yyerror("División por cero"), 0) : (yyvsp[-2].floatval) / (yyvsp[0].floatval); }
#line 1641 "compilersintactic.tab.c"
    break;

  case 60: /* operation_float: operation_float MOD operation_float  */
#line 135 "compilersintactic.y"
                                             { (yyval.floatval) = (int)(yyvsp[-2].floatval) % (int)(yyvsp[0].floatval); }
#line 1647 "compilersintactic.tab.c"
    break;

  case 61: /* operation_float: LPAREN operation_float RPAREN  */
#line 136 "compilersintactic.y"
                                            { (yyval.floatval) = (yyvsp[-1].floatval); }
#line 1653 "compilersintactic.tab.c"
    break;

  case 62: /* operation_float: DEC  */
#line 137 "compilersintactic.y"
                                            { (yyval.floatval) = (yyvsp[0].floatval); }
#line 1659 "compilersintactic.tab.c"
    break;

  case 63: /* operation_float: IFR  */
#line 138 "compilersintactic.y"
          { 
        DataType t; 
        float *val = getVal((yyvsp[0].strval), &t); 
        if (val && t == FL) (yyval.floatval) = *val; 
        else { yyerror("Variable decimal no declarada o tipo incorrecto"); (yyval.floatval) = 0; }
      }
#line 1670 "compilersintactic.tab.c"
    break;

  case 64: /* reduction: SUM LPAREN IFR RPAREN  */
#line 147 "compilersintactic.y"
                            { (yyval.intval) = sumVectorInt((yyvsp[-1].strval)); }
#line 1676 "compilersintactic.tab.c"
    break;

  case 65: /* reduction: PROD LPAREN IFR RPAREN  */
#line 148 "compilersintactic.y"
                             { (yyval.intval) = prodVectorInt((yyvsp[-1].strval)); }
#line 1682 "compilersintactic.tab.c"
    break;

  case 66: /* reduction: MAX LPAREN IFR RPAREN  */
#line 149 "compilersintactic.y"
                            { (yyval.intval) = maxVectorInt((yyvsp[-1].strval)); }
#line 1688 "compilersintactic.tab.c"
    break;

  case 67: /* reduction: MIN LPAREN IFR RPAREN  */
#line 150 "compilersintactic.y"
                            { (yyval.intval) = minVectorInt((yyvsp[-1].strval)); }
#line 1694 "compilersintactic.tab.c"
    break;

  case 68: /* reduction: SUM LPAREN IFR LBRACKET INT RBRACKET RPAREN  */
#line 151 "compilersintactic.y"
                                                    { /* suma fila/columna de matriz */ }
#line 1700 "compilersintactic.tab.c"
    break;

  case 69: /* reduction: PROD LPAREN IFR LBRACKET INT RBRACKET RPAREN  */
#line 152 "compilersintactic.y"
                                                    { /* producto fila/columna de matriz */ }
#line 1706 "compilersintactic.tab.c"
    break;

  case 70: /* reduction: MAX LPAREN IFR LBRACKET INT RBRACKET RPAREN  */
#line 153 "compilersintactic.y"
                                                    { /* máximo fila/columna de matriz */ }
#line 1712 "compilersintactic.tab.c"
    break;

  case 71: /* reduction: MIN LPAREN IFR LBRACKET INT RBRACKET RPAREN  */
#line 154 "compilersintactic.y"
                                                    { /* mínimo fila/columna de matriz */ }
#line 1718 "compilersintactic.tab.c"
    break;

  case 99: /* $@1: %empty  */
#line 194 "compilersintactic.y"
              { enterScope(); }
#line 1724 "compilersintactic.tab.c"
    break;

  case 100: /* body: LBRACE $@1 bodies RBRACE  */
#line 196 "compilersintactic.y"
             { exitScope(); }
#line 1730 "compilersintactic.tab.c"
    break;

  case 135: /* function: FUNCTION IFR LPAREN parameters RPAREN body  */
#line 276 "compilersintactic.y"
                                                 {newSymbolToTable((yyvsp[-4].strval), FN); setFnValue((yyvsp[-4].strval), (yyvsp[-4].strval));}
#line 1736 "compilersintactic.tab.c"
    break;

  case 136: /* function: FUNCTION IFR LPAREN RPAREN body  */
#line 277 "compilersintactic.y"
                                      {newSymbolToTable((yyvsp[-3].strval), FN); setFnValue((yyvsp[-3].strval), (yyvsp[-3].strval));}
#line 1742 "compilersintactic.tab.c"
    break;


#line 1746 "compilersintactic.tab.c"

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

#line 287 "compilersintactic.y"


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
