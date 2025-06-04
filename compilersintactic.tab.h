/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_COMPILERSINTACTIC_TAB_H_INCLUDED
# define YY_YY_COMPILERSINTACTIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    DEC = 259,                     /* DEC  */
    STR = 260,                     /* STR  */
    IFR = 261,                     /* IFR  */
    LBRACKET = 262,                /* LBRACKET  */
    RBRACKET = 263,                /* RBRACKET  */
    BOOLEAN = 264,                 /* BOOLEAN  */
    MAKE = 265,                    /* MAKE  */
    LOOP = 266,                    /* LOOP  */
    ENDLOOP = 267,                 /* ENDLOOP  */
    TRUE = 268,                    /* TRUE  */
    FALSE = 269,                   /* FALSE  */
    TIF = 270,                     /* TIF  */
    EIF = 271,                     /* EIF  */
    ELSE = 272,                    /* ELSE  */
    DWHILE = 273,                  /* DWHILE  */
    WHILE = 274,                   /* WHILE  */
    EWHILE = 275,                  /* EWHILE  */
    FOR = 276,                     /* FOR  */
    EFOR = 277,                    /* EFOR  */
    RET = 278,                     /* RET  */
    FUNCTION = 279,                /* FUNCTION  */
    SWTC = 280,                    /* SWTC  */
    ESAC = 281,                    /* ESAC  */
    KAERB = 282,                   /* KAERB  */
    DEF = 283,                     /* DEF  */
    YRT = 284,                     /* YRT  */
    HCTAC = 285,                   /* HCTAC  */
    SUM = 286,                     /* SUM  */
    PROD = 287,                    /* PROD  */
    MAX = 288,                     /* MAX  */
    MIN = 289,                     /* MIN  */
    INCR = 290,                    /* INCR  */
    DECR = 291,                    /* DECR  */
    PLUS = 292,                    /* PLUS  */
    MINUS = 293,                   /* MINUS  */
    MULT = 294,                    /* MULT  */
    DIV = 295,                     /* DIV  */
    MOD = 296,                     /* MOD  */
    ASSIGN = 297,                  /* ASSIGN  */
    EQ = 298,                      /* EQ  */
    DIFF = 299,                    /* DIFF  */
    NOT = 300,                     /* NOT  */
    LT = 301,                      /* LT  */
    GT = 302,                      /* GT  */
    LEQ = 303,                     /* LEQ  */
    GEQ = 304,                     /* GEQ  */
    AND = 305,                     /* AND  */
    OR = 306,                      /* OR  */
    LPAREN = 307,                  /* LPAREN  */
    RPAREN = 308,                  /* RPAREN  */
    LBRACE = 309,                  /* LBRACE  */
    RBRACE = 310,                  /* RBRACE  */
    COL = 311                      /* COL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "compilersintactic.y"

    int intval;
    float floatval;
    char *strval;
    int boolval;

#line 127 "compilersintactic.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_COMPILERSINTACTIC_TAB_H_INCLUDED  */
