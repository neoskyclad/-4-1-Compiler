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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    AUTO_SYM = 259,                /* AUTO_SYM  */
    BREAK_SYM = 260,               /* BREAK_SYM  */
    CASE_SYM = 261,                /* CASE_SYM  */
    CONTINUE_SYM = 262,            /* CONTINUE_SYM  */
    DEFAULT_SYM = 263,             /* DEFAULT_SYM  */
    DO_SYM = 264,                  /* DO_SYM  */
    ELSE_SYM = 265,                /* ELSE_SYM  */
    ENUM_SYM = 266,                /* ENUM_SYM  */
    FOR_SYM = 267,                 /* FOR_SYM  */
    IF_SYM = 268,                  /* IF_SYM  */
    RETURN_SYM = 269,              /* RETURN_SYM  */
    SIZEOF_SYM = 270,              /* SIZEOF_SYM  */
    STATIC_SYM = 271,              /* STATIC_SYM  */
    STRUCT_SYM = 272,              /* STRUCT_SYM  */
    SWITCH_SYM = 273,              /* SWITCH_SYM  */
    TYPEDEF_SYM = 274,             /* TYPEDEF_SYM  */
    UNION_SYM = 275,               /* UNION_SYM  */
    WHILE_SYM = 276,               /* WHILE_SYM  */
    GOTO_SYM = 277,                /* GOTO_SYM  */
    PLUSPLUS = 278,                /* PLUSPLUS  */
    MINUSMINUS = 279,              /* MINUSMINUS  */
    ARROW = 280,                   /* ARROW  */
    LSS = 281,                     /* LSS  */
    GTR = 282,                     /* GTR  */
    LEQ = 283,                     /* LEQ  */
    GEQ = 284,                     /* GEQ  */
    EQL = 285,                     /* EQL  */
    NEQ = 286,                     /* NEQ  */
    AMPAMP = 287,                  /* AMPAMP  */
    BARBAR = 288,                  /* BARBAR  */
    LSH = 289,                     /* LSH  */
    RSH = 290,                     /* RSH  */
    DOTDOTDOT = 291,               /* DOTDOTDOT  */
    LP = 292,                      /* LP  */
    RP = 293,                      /* RP  */
    LB = 294,                      /* LB  */
    RB = 295,                      /* RB  */
    LR = 296,                      /* LR  */
    RR = 297,                      /* RR  */
    COLON = 298,                   /* COLON  */
    PERIOD = 299,                  /* PERIOD  */
    COMMA = 300,                   /* COMMA  */
    EXCL = 301,                    /* EXCL  */
    STAR = 302,                    /* STAR  */
    SLASH = 303,                   /* SLASH  */
    PERCENT = 304,                 /* PERCENT  */
    AMP = 305,                     /* AMP  */
    SEMICOLON = 306,               /* SEMICOLON  */
    PLUS = 307,                    /* PLUS  */
    MINUS = 308,                   /* MINUS  */
    ASSIGN = 309,                  /* ASSIGN  */
    NOT = 310,                     /* NOT  */
    XOR = 311,                     /* XOR  */
    BAR = 312,                     /* BAR  */
    QUESTION = 313,                /* QUESTION  */
    INTEGER_CONSTANT = 314,        /* INTEGER_CONSTANT  */
    FLOAT_CONSTANT = 315,          /* FLOAT_CONSTANT  */
    STRING_LITERAL = 316,          /* STRING_LITERAL  */
    CHARACTER_CONSTANT = 317,      /* CHARACTER_CONSTANT  */
    CONST_SYM = 318,               /* CONST_SYM  */
    INTEGER_SYM = 319,             /* INTEGER_SYM  */
    FLOAT_SYM = 320,               /* FLOAT_SYM  */
    VOID_SYM = 321,                /* VOID_SYM  */
    CHARACTER_SYM = 322            /* CHARACTER_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define AUTO_SYM 259
#define BREAK_SYM 260
#define CASE_SYM 261
#define CONTINUE_SYM 262
#define DEFAULT_SYM 263
#define DO_SYM 264
#define ELSE_SYM 265
#define ENUM_SYM 266
#define FOR_SYM 267
#define IF_SYM 268
#define RETURN_SYM 269
#define SIZEOF_SYM 270
#define STATIC_SYM 271
#define STRUCT_SYM 272
#define SWITCH_SYM 273
#define TYPEDEF_SYM 274
#define UNION_SYM 275
#define WHILE_SYM 276
#define GOTO_SYM 277
#define PLUSPLUS 278
#define MINUSMINUS 279
#define ARROW 280
#define LSS 281
#define GTR 282
#define LEQ 283
#define GEQ 284
#define EQL 285
#define NEQ 286
#define AMPAMP 287
#define BARBAR 288
#define LSH 289
#define RSH 290
#define DOTDOTDOT 291
#define LP 292
#define RP 293
#define LB 294
#define RB 295
#define LR 296
#define RR 297
#define COLON 298
#define PERIOD 299
#define COMMA 300
#define EXCL 301
#define STAR 302
#define SLASH 303
#define PERCENT 304
#define AMP 305
#define SEMICOLON 306
#define PLUS 307
#define MINUS 308
#define ASSIGN 309
#define NOT 310
#define XOR 311
#define BAR 312
#define QUESTION 313
#define INTEGER_CONSTANT 314
#define FLOAT_CONSTANT 315
#define STRING_LITERAL 316
#define CHARACTER_CONSTANT 317
#define CONST_SYM 318
#define INTEGER_SYM 319
#define FLOAT_SYM 320
#define VOID_SYM 321
#define CHARACTER_SYM 322

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
