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
#line 4 "compilersintactic_clean.y"

//#define YYDEBUG 1
//int yydebug = 1;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"
extern char *yytext;
extern int yylineno;
extern FILE *yyin;
extern int yylex(void);
void yyerror(char *s);

#line 85 "compilersintactic.tab.c"

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
  YYSYMBOL_ASSERT = 9,                     /* ASSERT  */
  YYSYMBOL_BOOLEAN = 10,                   /* BOOLEAN  */
  YYSYMBOL_MAKE = 11,                      /* MAKE  */
  YYSYMBOL_LOOP = 12,                      /* LOOP  */
  YYSYMBOL_ENDLOOP = 13,                   /* ENDLOOP  */
  YYSYMBOL_TRUE = 14,                      /* TRUE  */
  YYSYMBOL_FALSE = 15,                     /* FALSE  */
  YYSYMBOL_TIF = 16,                       /* TIF  */
  YYSYMBOL_EIF = 17,                       /* EIF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_DWHILE = 19,                    /* DWHILE  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_EWHILE = 21,                    /* EWHILE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_EFOR = 23,                      /* EFOR  */
  YYSYMBOL_RET = 24,                       /* RET  */
  YYSYMBOL_FUNCTION = 25,                  /* FUNCTION  */
  YYSYMBOL_SWTC = 26,                      /* SWTC  */
  YYSYMBOL_ESAC = 27,                      /* ESAC  */
  YYSYMBOL_KAERB = 28,                     /* KAERB  */
  YYSYMBOL_DEF = 29,                       /* DEF  */
  YYSYMBOL_YRT = 30,                       /* YRT  */
  YYSYMBOL_HCTAC = 31,                     /* HCTAC  */
  YYSYMBOL_SUM = 32,                       /* SUM  */
  YYSYMBOL_PROD = 33,                      /* PROD  */
  YYSYMBOL_MAX = 34,                       /* MAX  */
  YYSYMBOL_MIN = 35,                       /* MIN  */
  YYSYMBOL_INCR = 36,                      /* INCR  */
  YYSYMBOL_DECR = 37,                      /* DECR  */
  YYSYMBOL_PLUS = 38,                      /* PLUS  */
  YYSYMBOL_MINUS = 39,                     /* MINUS  */
  YYSYMBOL_MULT = 40,                      /* MULT  */
  YYSYMBOL_DIV = 41,                       /* DIV  */
  YYSYMBOL_MOD = 42,                       /* MOD  */
  YYSYMBOL_ASSIGN = 43,                    /* ASSIGN  */
  YYSYMBOL_EQ = 44,                        /* EQ  */
  YYSYMBOL_DIFF = 45,                      /* DIFF  */
  YYSYMBOL_NOT = 46,                       /* NOT  */
  YYSYMBOL_LT = 47,                        /* LT  */
  YYSYMBOL_GT = 48,                        /* GT  */
  YYSYMBOL_LEQ = 49,                       /* LEQ  */
  YYSYMBOL_GEQ = 50,                       /* GEQ  */
  YYSYMBOL_AND = 51,                       /* AND  */
  YYSYMBOL_OR = 52,                        /* OR  */
  YYSYMBOL_LPAREN = 53,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 54,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 55,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 56,                    /* RBRACE  */
  YYSYMBOL_COL = 57,                       /* COL  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_statement_list = 60,            /* statement_list  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_value = 62,                     /* value  */
  YYSYMBOL_boolean = 63,                   /* boolean  */
  YYSYMBOL_declaration = 64,               /* declaration  */
  YYSYMBOL_initialization = 65,            /* initialization  */
  YYSYMBOL_asignation = 66,                /* asignation  */
  YYSYMBOL_operation_int = 67,             /* operation_int  */
  YYSYMBOL_operation_float = 68,           /* operation_float  */
  YYSYMBOL_reduction = 69,                 /* reduction  */
  YYSYMBOL_condition = 70,                 /* condition  */
  YYSYMBOL_conditioncomp = 71,             /* conditioncomp  */
  YYSYMBOL_ifcondition = 72,               /* ifcondition  */
  YYSYMBOL_body = 73,                      /* body  */
  YYSYMBOL_74_1 = 74,                      /* $@1  */
  YYSYMBOL_bodies = 75,                    /* bodies  */
  YYSYMBOL_whileloop = 76,                 /* whileloop  */
  YYSYMBOL_body_stmt = 77,                 /* body_stmt  */
  YYSYMBOL_elsebody = 78,                  /* elsebody  */
  YYSYMBOL_if = 79,                        /* if  */
  YYSYMBOL_if_stmt = 80,                   /* if_stmt  */
  YYSYMBOL_if_else_stmt = 81,              /* if_else_stmt  */
  YYSYMBOL_assert_stmt = 82,               /* assert_stmt  */
  YYSYMBOL_whilecondition = 83,            /* whilecondition  */
  YYSYMBOL_while = 84,                     /* while  */
  YYSYMBOL_do_while = 85,                  /* do_while  */
  YYSYMBOL_for = 86,                       /* for  */
  YYSYMBOL_for_asignation = 87,            /* for_asignation  */
  YYSYMBOL_switch = 88,                    /* switch  */
  YYSYMBOL_cases = 89,                     /* cases  */
  YYSYMBOL_case = 90,                      /* case  */
  YYSYMBOL_try_catch = 91,                 /* try_catch  */
  YYSYMBOL_function = 92,                  /* function  */
  YYSYMBOL_parameters = 93,                /* parameters  */
  YYSYMBOL_parameter = 94                  /* parameter  */
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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   454

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    52,    54,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    73,    74,    75,
      76,    80,    81,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,   100,   101,   102,   103,   104,
     105,   106,   107,   112,   113,   114,   115,   116,   117,   118,
     119,   123,   124,   125,   126,   127,   128,   129,   130,   139,
     140,   141,   142,   143,   144,   145,   146,   155,   156,   157,
     158,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   183,
     184,   188,   189,   190,   194,   194,   199,   201,   205,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   227,   228,   231,   231,   234,   238,   242,   246,   247,
     248,   252,   256,   260,   261,   265,   266,   270,   274,   275,
     279,   280,   284,   288,   289,   293,   294,   298,   299,   300,
     301
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
  "IFR", "LBRACKET", "RBRACKET", "ASSERT", "BOOLEAN", "MAKE", "LOOP",
  "ENDLOOP", "TRUE", "FALSE", "TIF", "EIF", "ELSE", "DWHILE", "WHILE",
  "EWHILE", "FOR", "EFOR", "RET", "FUNCTION", "SWTC", "ESAC", "KAERB",
  "DEF", "YRT", "HCTAC", "SUM", "PROD", "MAX", "MIN", "INCR", "DECR",
  "PLUS", "MINUS", "MULT", "DIV", "MOD", "ASSIGN", "EQ", "DIFF", "NOT",
  "LT", "GT", "LEQ", "GEQ", "AND", "OR", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "COL", "$accept", "program", "statement_list", "statement",
  "value", "boolean", "declaration", "initialization", "asignation",
  "operation_int", "operation_float", "reduction", "condition",
  "conditioncomp", "ifcondition", "body", "$@1", "bodies", "whileloop",
  "body_stmt", "elsebody", "if", "if_stmt", "if_else_stmt", "assert_stmt",
  "whilecondition", "while", "do_while", "for", "for_asignation", "switch",
  "cases", "case", "try_catch", "function", "parameters", "parameter", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-170)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     232,     6,    54,    60,    43,    59,   172,   127,   165,   179,
     181,   243,   200,   165,   284,  -170,   232,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,    13,    19,    21,    40,   116,    34,   116,   165,  -170,
     236,   116,   165,   112,   235,   257,   266,  -170,  -170,   288,
      15,  -170,   292,    61,  -170,   311,   312,  -170,   270,   273,
     274,  -170,   275,   276,   281,   282,   285,   286,    10,    56,
     228,   279,  -170,  -170,  -170,   263,  -170,  -170,   256,   100,
    -170,   267,   334,   142,  -170,   167,    38,   287,   323,   203,
     290,  -170,   242,   264,   291,   321,   338,   340,     5,   293,
     295,   341,   296,  -170,    16,   233,   297,   342,   298,  -170,
      75,   241,   343,   299,  -170,  -170,  -170,  -170,  -170,   346,
     351,   352,   353,  -170,  -170,   176,   205,    16,    16,    16,
      16,    16,  -170,    75,    75,    75,    75,    75,  -170,  -170,
     137,   149,   155,   159,   170,   163,   163,   163,   163,   163,
     163,   294,   294,   303,   354,   304,   306,  -170,   116,   116,
    -170,  -170,   347,   358,   360,   361,   362,   163,   313,  -170,
    -170,   315,  -170,   203,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,   116,  -170,  -170,  -170,  -170,   326,   329,   367,   368,
     369,   370,   165,    31,  -170,   322,   372,     4,  -170,  -170,
    -170,    44,  -170,  -170,    45,  -170,   325,   327,   328,   330,
    -170,  -170,    92,    92,  -170,  -170,  -170,   283,   283,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,    46,  -170,  -170,  -170,  -170,   331,   337,   344,   345,
     348,   332,  -170,  -170,  -170,   268,   380,   381,  -170,  -170,
    -170,  -170,  -170,   165,   289,    98,   336,   389,  -170,   390,
    -170,   391,  -170,  -170,  -170,  -170,  -170,   392,  -170,    -1,
    -170,  -170,   349,   339,   350,  -170,  -170,   163,   355,    53,
    -170,   165,   393,   394,   395,   397,   163,   356,   203,   116,
     116,   357,   165,  -170,  -170,  -170,   359,   363,   364,   365,
     366,   371,   373,   374,   375,   165,   376,  -170,  -170,  -170,
    -170,   378,  -170,   377,   400,   402,   382,  -170,  -170,  -170,
     161,   379,   383,   384,   386,   387,   385,   388,  -170,  -170,
    -170,   165,   165,   396,   398,  -170,   405,  -170
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     5,     6,     7,
       8,     9,   113,   114,    16,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     1,     4,     0,
       0,    24,     0,     0,    25,     0,     0,    23,    57,    65,
       0,    58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    19,    17,     0,    21,    22,     0,     0,
      20,     0,     0,     0,    26,     0,     0,     0,     0,    96,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,     0,     0,     0,     0,    65,    66,
       0,     0,     0,     0,    44,    45,    43,    46,    47,     0,
       0,     0,     0,    57,    65,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,    50,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
      91,    92,   115,     0,     0,     0,     0,     0,     0,   109,
     110,     0,   103,    96,   101,   102,   104,   105,   106,   107,
     108,     0,   120,   118,   119,   121,     0,     0,     0,     0,
       0,     0,     0,     0,   135,     0,     0,     0,    36,    40,
      42,     0,    37,    41,     0,    35,     0,     0,     0,     0,
      56,    64,    51,    52,    53,    54,    55,    59,    60,    61,
      62,    63,    80,    79,    85,    81,    86,    82,    87,    83,
      88,    84,    71,    73,    75,    76,    77,    78,    72,    74,
     117,     0,    38,    39,    89,    90,     0,     0,     0,     0,
       0,     0,   100,    95,    97,     0,     0,     0,   137,   138,
     140,   139,   134,     0,     0,     0,     0,     0,    28,     0,
      29,     0,    27,    67,    68,    69,    70,     0,    30,     0,
     116,    99,     0,     0,     0,   133,   136,     0,     0,     0,
     128,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,     0,     0,   127,   129,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    31,
      34,     0,   112,     0,     0,     0,     0,   131,   111,    98,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   125,
     126,     0,     0,     0,     0,   123,     0,   124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,   399,  -170,  -110,   -34,  -170,    83,     1,     8,
     -29,    50,   -35,   401,  -170,   -13,  -170,  -169,   110,  -170,
    -170,   185,  -170,  -170,  -170,  -170,    71,   210,   224,  -170,
     239,  -170,   108,   260,   261,  -170,   135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    14,    15,    16,    78,    79,    17,   169,   170,   125,
     126,    80,    81,    94,    38,    40,    89,   171,   172,   173,
     280,   174,    22,    23,    24,    42,   175,   176,   177,   331,
     178,   289,   290,   179,   180,   193,   194
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    19,    86,    85,   254,    70,    93,    92,   188,   189,
     190,   267,    31,   123,   124,   191,    61,    19,   102,   123,
      49,   103,   103,   296,   111,    88,    52,   297,    55,    95,
     223,   225,   227,   229,   231,   232,   233,   234,   235,   236,
     237,    82,    69,    58,    59,    60,    61,    64,    65,    66,
      67,   269,   271,   277,    62,    63,    50,   251,   105,   192,
      32,   268,    53,    68,    56,   108,    33,   109,   104,   104,
      51,    25,    64,    65,    66,    67,    54,    83,    57,   124,
     287,   109,   288,    18,    71,   263,    34,    25,   264,   158,
     159,    84,   160,    68,   127,   128,   129,   130,   131,    18,
     106,   270,   272,   278,   217,   218,   219,   220,   221,   303,
      20,    91,    35,   132,   110,    96,    97,   238,   239,    72,
      73,    74,    75,   244,   245,   287,    20,   288,   110,   312,
      76,    77,   129,   130,   131,   212,   213,   214,   215,   216,
      72,    73,    74,   222,   151,   152,   255,    92,    64,    65,
      66,    67,    72,    73,    74,   224,   155,   156,    72,    73,
      74,   226,    72,    73,    74,   228,    72,    73,    74,    64,
      65,    66,    67,    72,    73,    74,   230,   301,    36,   262,
      37,    64,    65,    66,    67,    21,   310,    64,    65,    66,
      67,    64,    65,    66,    67,    64,    65,    66,    67,   334,
     335,    21,    64,    65,    66,    67,   163,   164,   165,     4,
      26,   151,   152,   166,   127,   128,   129,   130,   131,     7,
      39,   157,     8,     9,    27,    10,    26,   167,    11,    12,
     210,   168,    41,    13,    43,     1,     2,     3,     4,    28,
      27,     5,     6,   133,   134,   135,   136,   137,     7,    44,
     285,     8,     9,    45,    10,    28,    90,    11,    12,   211,
      29,    30,    13,    99,   313,   314,   133,   134,   135,   136,
     137,   127,   128,   129,   130,   131,    29,    30,   305,   133,
     134,   135,   136,   137,    47,   138,   151,   152,    98,   316,
     199,   101,   188,   189,   190,   107,   182,   100,   203,   191,
     145,   146,   326,   147,   148,   149,   150,   140,    76,    77,
     141,   142,   143,   144,   112,   158,   159,   113,   183,   158,
     159,   153,   282,   135,   136,   137,   332,   114,   343,   344,
     115,   116,   117,   118,   119,   120,   139,   154,   121,   122,
     162,   161,   185,   181,   186,   184,   187,   195,   196,   197,
     201,   204,   206,   198,   200,   202,   205,   207,   208,   209,
     240,   242,   241,   243,   247,   246,   248,   249,   250,   256,
     252,   253,   257,   258,   259,   260,   261,   265,   266,   273,
      50,   274,   275,   283,   276,   284,   279,    53,    56,   281,
     291,    83,   292,   293,   294,   295,   299,   304,   329,   286,
       0,   306,   307,   308,   298,   309,   330,   300,     4,     0,
     333,     0,   302,   311,   315,    48,   317,     0,     0,   345,
     318,   319,   320,   321,   339,     0,   340,   322,   347,   323,
       0,   324,   325,   327,   328,     0,   336,   337,    87,   341,
       0,   338,     0,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   346
};

static const yytype_int16 yycheck[] =
{
      13,     0,    37,    37,   173,    34,    41,    41,     3,     4,
       5,     7,     6,     3,     4,    10,     6,    16,     3,     3,
       7,     6,     6,    24,    53,    38,     7,    28,     7,    42,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     7,    34,     3,     4,     5,     6,    32,    33,    34,
      35,     7,     7,     7,    14,    15,    43,   167,    50,    54,
       6,    57,    43,    53,    43,     4,     6,     6,    53,    53,
      57,     0,    32,    33,    34,    35,    57,    43,    57,     4,
      27,     6,    29,     0,    34,    54,    43,    16,    57,    51,
      52,    57,    54,    53,    38,    39,    40,    41,    42,    16,
      50,    57,    57,    57,   133,   134,   135,   136,   137,    56,
       0,    40,    53,    57,    53,     3,     4,   151,   152,     3,
       4,     5,     6,   158,   159,    27,    16,    29,    53,   298,
      14,    15,    40,    41,    42,   127,   128,   129,   130,   131,
       3,     4,     5,     6,    44,    45,   181,   181,    32,    33,
      34,    35,     3,     4,     5,     6,    14,    15,     3,     4,
       5,     6,     3,     4,     5,     6,     3,     4,     5,    32,
      33,    34,    35,     3,     4,     5,     6,   287,     6,   192,
      53,    32,    33,    34,    35,     0,   296,    32,    33,    34,
      35,    32,    33,    34,    35,    32,    33,    34,    35,    38,
      39,    16,    32,    33,    34,    35,     3,     4,     5,     6,
       0,    44,    45,    10,    38,    39,    40,    41,    42,    16,
      55,    54,    19,    20,     0,    22,    16,    24,    25,    26,
      54,    28,    53,    30,    53,     3,     4,     5,     6,     0,
      16,     9,    10,    38,    39,    40,    41,    42,    16,     6,
     263,    19,    20,    53,    22,    16,    20,    25,    26,    54,
       0,     0,    30,     6,   299,   300,    38,    39,    40,    41,
      42,    38,    39,    40,    41,    42,    16,    16,   291,    38,
      39,    40,    41,    42,     0,    57,    44,    45,    53,   302,
      57,     3,     3,     4,     5,     3,    54,    31,    57,    10,
      44,    45,   315,    47,    48,    49,    50,    44,    14,    15,
      47,    48,    49,    50,     3,    51,    52,     5,    54,    51,
      52,    54,    54,    40,    41,    42,   325,    57,   341,   342,
      57,    57,    57,    57,    53,    53,    57,     3,    53,    53,
      17,    54,    21,    53,     6,    54,     6,    54,    53,     8,
       8,     8,     6,    57,    57,    57,    57,     6,     6,     6,
      57,    57,     8,    57,     6,    18,     6,     6,     6,    43,
      57,    56,    43,     6,     6,     6,     6,    55,     6,    54,
      43,    54,    54,     3,    54,     4,    55,    43,    43,    57,
      54,    43,     3,     3,     3,     3,    57,   289,    21,   264,
      -1,     8,     8,     8,    55,     8,     6,    57,     6,    -1,
      28,    -1,    57,    57,    57,    16,    57,    -1,    -1,    23,
      57,    57,    57,    57,    38,    -1,    39,    56,    23,    56,
      -1,    57,    57,    57,    56,    -1,    57,    54,    37,    54,
      -1,    57,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    10,    16,    19,    20,
      22,    25,    26,    30,    59,    60,    61,    64,    65,    66,
      76,    79,    80,    81,    82,    84,    85,    86,    88,    91,
      92,     6,     6,     6,    43,    53,     6,    53,    72,    55,
      73,    53,    83,    53,     6,    53,    73,     0,    60,     7,
      43,    57,     7,    43,    57,     7,    43,    57,     3,     4,
       5,     6,    14,    15,    32,    33,    34,    35,    53,    67,
      68,    69,     3,     4,     5,     6,    14,    15,    62,    63,
      69,    70,     7,    43,    57,    63,    70,    71,    73,    74,
      20,    84,    63,    70,    71,    73,     3,     4,    53,     6,
      31,     3,     3,     6,    53,    67,    69,     3,     4,     6,
      53,    68,     3,     5,    57,    57,    57,    57,    57,    53,
      53,    53,    53,     3,     4,    67,    68,    38,    39,    40,
      41,    42,    57,    38,    39,    40,    41,    42,    57,    57,
      44,    47,    48,    49,    50,    44,    45,    47,    48,    49,
      50,    44,    45,    54,     3,    14,    15,    54,    51,    52,
      54,    54,    17,     3,     4,     5,    10,    24,    28,    65,
      66,    75,    76,    77,    79,    84,    85,    86,    88,    91,
      92,    53,    54,    54,    54,    21,     6,     6,     3,     4,
       5,    10,    54,    93,    94,    54,    53,     8,    57,    57,
      57,     8,    57,    57,     8,    57,     6,     6,     6,     6,
      54,    54,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    68,     6,    62,     6,    62,     6,    62,     6,    62,
       6,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      57,     8,    57,    57,    70,    70,    18,     6,     6,     6,
       6,    62,    57,    56,    75,    70,    43,    43,     6,     6,
       6,     6,    73,    54,    57,    55,     6,     7,    57,     7,
      57,     7,    57,    54,    54,    54,    54,     7,    57,    55,
      78,    57,    54,     3,     4,    73,    94,    27,    29,    89,
      90,    54,     3,     3,     3,     3,    24,    28,    55,    57,
      57,    62,    57,    56,    90,    73,     8,     8,     8,     8,
      62,    57,    75,    70,    70,    57,    73,    57,    57,    57,
      57,    57,    56,    56,    57,    57,    73,    57,    56,    21,
       6,    87,    66,    28,    38,    39,    57,    54,    57,    38,
      39,    54,    55,    73,    73,    23,    56,    23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    62,    62,
      62,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    72,    74,    73,    75,    75,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    79,    79,    80,    81,    82,    83,    83,
      83,    84,    85,    86,    86,    87,    87,    88,    89,    89,
      90,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     6,     6,     6,
       6,     9,     9,     9,     9,     5,     5,     5,     5,     5,
       5,     5,     5,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     1,     1,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     4,     0,     2,    10,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     1,     1,     4,     6,     5,     3,     3,
       3,     4,     3,    14,    15,     3,     3,     7,     1,     2,
       6,     4,     7,     6,     5,     1,     3,     2,     2,     2,
       2
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
  case 23: /* declaration: STR IFR COL  */
#line 85 "compilersintactic_clean.y"
                  {newSymbolToTable((yyvsp[-1].strval), ST);}
#line 1410 "compilersintactic.tab.c"
    break;

  case 24: /* declaration: INT IFR COL  */
#line 86 "compilersintactic_clean.y"
                  {newSymbolToTable((yyvsp[-1].strval), IN);}
#line 1416 "compilersintactic.tab.c"
    break;

  case 25: /* declaration: DEC IFR COL  */
#line 87 "compilersintactic_clean.y"
                  {newSymbolToTable((yyvsp[-1].strval), FL);}
#line 1422 "compilersintactic.tab.c"
    break;

  case 26: /* declaration: BOOLEAN IFR COL  */
#line 88 "compilersintactic_clean.y"
                      {newSymbolToTable((yyvsp[-1].strval), BO);}
#line 1428 "compilersintactic.tab.c"
    break;

  case 27: /* declaration: STR IFR LBRACKET INT RBRACKET COL  */
#line 89 "compilersintactic_clean.y"
                                        { }
#line 1434 "compilersintactic.tab.c"
    break;

  case 28: /* declaration: INT IFR LBRACKET INT RBRACKET COL  */
#line 90 "compilersintactic_clean.y"
                                        { }
#line 1440 "compilersintactic.tab.c"
    break;

  case 29: /* declaration: DEC IFR LBRACKET INT RBRACKET COL  */
#line 91 "compilersintactic_clean.y"
                                        { }
#line 1446 "compilersintactic.tab.c"
    break;

  case 30: /* declaration: BOOLEAN IFR LBRACKET INT RBRACKET COL  */
#line 92 "compilersintactic_clean.y"
                                            { }
#line 1452 "compilersintactic.tab.c"
    break;

  case 31: /* declaration: STR IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL  */
#line 93 "compilersintactic_clean.y"
                                                              { }
#line 1458 "compilersintactic.tab.c"
    break;

  case 32: /* declaration: INT IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL  */
#line 94 "compilersintactic_clean.y"
                                                              { }
#line 1464 "compilersintactic.tab.c"
    break;

  case 33: /* declaration: DEC IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL  */
#line 95 "compilersintactic_clean.y"
                                                              { }
#line 1470 "compilersintactic.tab.c"
    break;

  case 34: /* declaration: BOOLEAN IFR LBRACKET INT RBRACKET LBRACKET INT RBRACKET COL  */
#line 96 "compilersintactic_clean.y"
                                                                  { }
#line 1476 "compilersintactic.tab.c"
    break;

  case 35: /* initialization: STR IFR ASSIGN STR COL  */
#line 100 "compilersintactic_clean.y"
                             {newSymbolToTable((yyvsp[-3].strval), ST); setStringValue((yyvsp[-3].strval), (yyvsp[-1].strval));}
#line 1482 "compilersintactic.tab.c"
    break;

  case 36: /* initialization: INT IFR ASSIGN INT COL  */
#line 101 "compilersintactic_clean.y"
                             {newSymbolToTable((yyvsp[-3].strval), IN); setintValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1488 "compilersintactic.tab.c"
    break;

  case 37: /* initialization: DEC IFR ASSIGN DEC COL  */
#line 102 "compilersintactic_clean.y"
                             {newSymbolToTable((yyvsp[-3].strval), FL); setfloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1494 "compilersintactic.tab.c"
    break;

  case 38: /* initialization: BOOLEAN IFR ASSIGN TRUE COL  */
#line 103 "compilersintactic_clean.y"
                                  {newSymbolToTable((yyvsp[-3].strval), BO); setBooleanValue((yyvsp[-3].strval), 1);}
#line 1500 "compilersintactic.tab.c"
    break;

  case 39: /* initialization: BOOLEAN IFR ASSIGN FALSE COL  */
#line 104 "compilersintactic_clean.y"
                                   {newSymbolToTable((yyvsp[-3].strval), BO); setBooleanValue((yyvsp[-3].strval), 0);}
#line 1506 "compilersintactic.tab.c"
    break;

  case 40: /* initialization: INT IFR ASSIGN operation_int COL  */
#line 105 "compilersintactic_clean.y"
                                       {newSymbolToTable((yyvsp[-3].strval), IN); setintValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1512 "compilersintactic.tab.c"
    break;

  case 41: /* initialization: DEC IFR ASSIGN operation_float COL  */
#line 106 "compilersintactic_clean.y"
                                         {newSymbolToTable((yyvsp[-3].strval), FL); setfloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1518 "compilersintactic.tab.c"
    break;

  case 42: /* initialization: INT IFR ASSIGN reduction COL  */
#line 107 "compilersintactic_clean.y"
                                   { newSymbolToTable((yyvsp[-3].strval), IN); setintValue((yyvsp[-3].strval), (yyvsp[-1].intval)); }
#line 1524 "compilersintactic.tab.c"
    break;

  case 43: /* asignation: IFR ASSIGN STR COL  */
#line 112 "compilersintactic_clean.y"
                         {setStringValue((yyvsp[-3].strval), (yyvsp[-1].strval));}
#line 1530 "compilersintactic.tab.c"
    break;

  case 44: /* asignation: IFR ASSIGN INT COL  */
#line 113 "compilersintactic_clean.y"
                         {setintValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1536 "compilersintactic.tab.c"
    break;

  case 45: /* asignation: IFR ASSIGN DEC COL  */
#line 114 "compilersintactic_clean.y"
                         {setfloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1542 "compilersintactic.tab.c"
    break;

  case 46: /* asignation: IFR ASSIGN TRUE COL  */
#line 115 "compilersintactic_clean.y"
                          {setBooleanValue((yyvsp[-3].strval), 1);}
#line 1548 "compilersintactic.tab.c"
    break;

  case 47: /* asignation: IFR ASSIGN FALSE COL  */
#line 116 "compilersintactic_clean.y"
                           {setBooleanValue((yyvsp[-3].strval), 0);}
#line 1554 "compilersintactic.tab.c"
    break;

  case 48: /* asignation: IFR ASSIGN reduction COL  */
#line 117 "compilersintactic_clean.y"
                               { setintValue((yyvsp[-3].strval), (yyvsp[-1].intval)); }
#line 1560 "compilersintactic.tab.c"
    break;

  case 49: /* asignation: IFR ASSIGN operation_int COL  */
#line 118 "compilersintactic_clean.y"
                                   {setintValue((yyvsp[-3].strval), (yyvsp[-1].intval));}
#line 1566 "compilersintactic.tab.c"
    break;

  case 50: /* asignation: IFR ASSIGN operation_float COL  */
#line 119 "compilersintactic_clean.y"
                                     {setfloatValue((yyvsp[-3].strval), (yyvsp[-1].floatval));}
#line 1572 "compilersintactic.tab.c"
    break;

  case 51: /* operation_int: operation_int PLUS operation_int  */
#line 123 "compilersintactic_clean.y"
                                         { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval); }
#line 1578 "compilersintactic.tab.c"
    break;

  case 52: /* operation_int: operation_int MINUS operation_int  */
#line 124 "compilersintactic_clean.y"
                                         { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1584 "compilersintactic.tab.c"
    break;

  case 53: /* operation_int: operation_int MULT operation_int  */
#line 125 "compilersintactic_clean.y"
                                         { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1590 "compilersintactic.tab.c"
    break;

  case 54: /* operation_int: operation_int DIV operation_int  */
#line 126 "compilersintactic_clean.y"
                                         { (yyval.intval) = ((yyvsp[0].intval) == 0) ? (yyerror("División por cero"), 0) : (yyvsp[-2].intval) / (yyvsp[0].intval); }
#line 1596 "compilersintactic.tab.c"
    break;

  case 55: /* operation_int: operation_int MOD operation_int  */
#line 127 "compilersintactic_clean.y"
                                         { (yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval); }
#line 1602 "compilersintactic.tab.c"
    break;

  case 56: /* operation_int: LPAREN operation_int RPAREN  */
#line 128 "compilersintactic_clean.y"
                                         { (yyval.intval) = (yyvsp[-1].intval); }
#line 1608 "compilersintactic.tab.c"
    break;

  case 57: /* operation_int: INT  */
#line 129 "compilersintactic_clean.y"
                                         { (yyval.intval) = (yyvsp[0].intval); }
#line 1614 "compilersintactic.tab.c"
    break;

  case 58: /* operation_int: IFR  */
#line 130 "compilersintactic_clean.y"
          {
        DataType t;
        int *val = getVal((yyvsp[0].strval), &t);
        if (val && t == IN) (yyval.intval) = *val;
        else { yyerror("Variable entera no declarada o tipo incorrecto"); (yyval.intval) = 0; }
      }
#line 1625 "compilersintactic.tab.c"
    break;

  case 59: /* operation_float: operation_float PLUS operation_float  */
#line 139 "compilersintactic_clean.y"
                                             { (yyval.floatval) = (yyvsp[-2].floatval) + (yyvsp[0].floatval); }
#line 1631 "compilersintactic.tab.c"
    break;

  case 60: /* operation_float: operation_float MINUS operation_float  */
#line 140 "compilersintactic_clean.y"
                                             { (yyval.floatval) = (yyvsp[-2].floatval) - (yyvsp[0].floatval); }
#line 1637 "compilersintactic.tab.c"
    break;

  case 61: /* operation_float: operation_float MULT operation_float  */
#line 141 "compilersintactic_clean.y"
                                             { (yyval.floatval) = (yyvsp[-2].floatval) * (yyvsp[0].floatval); }
#line 1643 "compilersintactic.tab.c"
    break;

  case 62: /* operation_float: operation_float DIV operation_float  */
#line 142 "compilersintactic_clean.y"
                                             { (yyval.floatval) = ((yyvsp[0].floatval) == 0) ? (yyerror("División por cero"), 0) : (yyvsp[-2].floatval) / (yyvsp[0].floatval); }
#line 1649 "compilersintactic.tab.c"
    break;

  case 63: /* operation_float: operation_float MOD operation_float  */
#line 143 "compilersintactic_clean.y"
                                             { (yyval.floatval) = (int)(yyvsp[-2].floatval) % (int)(yyvsp[0].floatval); }
#line 1655 "compilersintactic.tab.c"
    break;

  case 64: /* operation_float: LPAREN operation_float RPAREN  */
#line 144 "compilersintactic_clean.y"
                                            { (yyval.floatval) = (yyvsp[-1].floatval); }
#line 1661 "compilersintactic.tab.c"
    break;

  case 65: /* operation_float: DEC  */
#line 145 "compilersintactic_clean.y"
                                            { (yyval.floatval) = (yyvsp[0].floatval); }
#line 1667 "compilersintactic.tab.c"
    break;

  case 66: /* operation_float: IFR  */
#line 146 "compilersintactic_clean.y"
          {
        DataType t;
        float *val = getVal((yyvsp[0].strval), &t);
        if (val && t == FL) (yyval.floatval) = *val;
        else { yyerror("Variable decimal no declarada o tipo incorrecto"); (yyval.floatval) = 0; }
      }
#line 1678 "compilersintactic.tab.c"
    break;

  case 67: /* reduction: SUM LPAREN IFR RPAREN  */
#line 155 "compilersintactic_clean.y"
                            { (yyval.intval) = sumVectorInt((yyvsp[-1].strval)); }
#line 1684 "compilersintactic.tab.c"
    break;

  case 68: /* reduction: PROD LPAREN IFR RPAREN  */
#line 156 "compilersintactic_clean.y"
                             { (yyval.intval) = prodVectorInt((yyvsp[-1].strval)); }
#line 1690 "compilersintactic.tab.c"
    break;

  case 69: /* reduction: MAX LPAREN IFR RPAREN  */
#line 157 "compilersintactic_clean.y"
                            { (yyval.intval) = maxVectorInt((yyvsp[-1].strval)); }
#line 1696 "compilersintactic.tab.c"
    break;

  case 70: /* reduction: MIN LPAREN IFR RPAREN  */
#line 158 "compilersintactic_clean.y"
                            { (yyval.intval) = minVectorInt((yyvsp[-1].strval)); }
#line 1702 "compilersintactic.tab.c"
    break;

  case 94: /* $@1: %empty  */
#line 194 "compilersintactic_clean.y"
              { enterScope(); }
#line 1708 "compilersintactic.tab.c"
    break;

  case 95: /* body: LBRACE $@1 bodies RBRACE  */
#line 196 "compilersintactic_clean.y"
             { exitScope(); }
#line 1714 "compilersintactic.tab.c"
    break;

  case 98: /* whileloop: DWHILE body WHILE LPAREN condition RPAREN LBRACE bodies RBRACE EWHILE  */
#line 206 "compilersintactic_clean.y"
    {
        printf("Bucle do-while válido.\n");
    }
#line 1722 "compilersintactic.tab.c"
    break;

  case 133: /* function: FUNCTION IFR LPAREN parameters RPAREN body  */
#line 288 "compilersintactic_clean.y"
                                                 {newSymbolToTable((yyvsp[-4].strval), FN); setFnValue((yyvsp[-4].strval), (yyvsp[-4].strval));}
#line 1728 "compilersintactic.tab.c"
    break;

  case 134: /* function: FUNCTION IFR LPAREN RPAREN body  */
#line 289 "compilersintactic_clean.y"
                                      {newSymbolToTable((yyvsp[-3].strval), FN); setFnValue((yyvsp[-3].strval), (yyvsp[-3].strval));}
#line 1734 "compilersintactic.tab.c"
    break;


#line 1738 "compilersintactic.tab.c"

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

#line 304 "compilersintactic_clean.y"


void yyerror(char *s) {
    printf("Error sintáctico: %s en la linea: %i\n", s, yylineno);
}

int main(int argc, char **argv){
    printf("Running ... : \n");
    if(argc > 1){
        yyin = fopen(argv[1], "rt");
    }else{
        yyin = stdin;
    }
    yyparse();
    return 0;
}
