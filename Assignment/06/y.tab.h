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
    TYPE_IDENTIFIER = 259,         /* TYPE_IDENTIFIER  */
    AUTO_SYM = 260,                /* AUTO_SYM  */
    BREAK_SYM = 261,               /* BREAK_SYM  */
    CASE_SYM = 262,                /* CASE_SYM  */
    CONTINUE_SYM = 263,            /* CONTINUE_SYM  */
    DEFAULT_SYM = 264,             /* DEFAULT_SYM  */
    DO_SYM = 265,                  /* DO_SYM  */
    ELSE_SYM = 266,                /* ELSE_SYM  */
    ENUM_SYM = 267,                /* ENUM_SYM  */
    FOR_SYM = 268,                 /* FOR_SYM  */
    IF_SYM = 269,                  /* IF_SYM  */
    RETURN_SYM = 270,              /* RETURN_SYM  */
    SIZEOF_SYM = 271,              /* SIZEOF_SYM  */
    STATIC_SYM = 272,              /* STATIC_SYM  */
    STRUCT_SYM = 273,              /* STRUCT_SYM  */
    SWITCH_SYM = 274,              /* SWITCH_SYM  */
    TYPEDEF_SYM = 275,             /* TYPEDEF_SYM  */
    UNION_SYM = 276,               /* UNION_SYM  */
    WHILE_SYM = 277,               /* WHILE_SYM  */
    GOTO_SYM = 278,                /* GOTO_SYM  */
    PLUSPLUS = 279,                /* PLUSPLUS  */
    MINUSMINUS = 280,              /* MINUSMINUS  */
    ARROW = 281,                   /* ARROW  */
    LSS = 282,                     /* LSS  */
    GTR = 283,                     /* GTR  */
    LEQ = 284,                     /* LEQ  */
    GEQ = 285,                     /* GEQ  */
    EQL = 286,                     /* EQL  */
    NEQ = 287,                     /* NEQ  */
    AMPAMP = 288,                  /* AMPAMP  */
    BARBAR = 289,                  /* BARBAR  */
    LSH = 290,                     /* LSH  */
    RSH = 291,                     /* RSH  */
    DOTDOTDOT = 292,               /* DOTDOTDOT  */
    LP = 293,                      /* LP  */
    RP = 294,                      /* RP  */
    LB = 295,                      /* LB  */
    RB = 296,                      /* RB  */
    LR = 297,                      /* LR  */
    RR = 298,                      /* RR  */
    COLON = 299,                   /* COLON  */
    PERIOD = 300,                  /* PERIOD  */
    COMMA = 301,                   /* COMMA  */
    EXCL = 302,                    /* EXCL  */
    STAR = 303,                    /* STAR  */
    SLASH = 304,                   /* SLASH  */
    PERCENT = 305,                 /* PERCENT  */
    AMP = 306,                     /* AMP  */
    SEMICOLON = 307,               /* SEMICOLON  */
    PLUS = 308,                    /* PLUS  */
    MINUS = 309,                   /* MINUS  */
    ASSIGN = 310,                  /* ASSIGN  */
    NOT = 311,                     /* NOT  */
    XOR = 312,                     /* XOR  */
    BAR = 313,                     /* BAR  */
    QUESTION = 314,                /* QUESTION  */
    INTEGER_CONSTANT = 315,        /* INTEGER_CONSTANT  */
    FLOAT_CONSTANT = 316,          /* FLOAT_CONSTANT  */
    STRING_LITERAL = 317,          /* STRING_LITERAL  */
    CHARACTER_CONSTANT = 318,      /* CHARACTER_CONSTANT  */
    CONST_SYM = 319                /* CONST_SYM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define AUTO_SYM 260
#define BREAK_SYM 261
#define CASE_SYM 262
#define CONTINUE_SYM 263
#define DEFAULT_SYM 264
#define DO_SYM 265
#define ELSE_SYM 266
#define ENUM_SYM 267
#define FOR_SYM 268
#define IF_SYM 269
#define RETURN_SYM 270
#define SIZEOF_SYM 271
#define STATIC_SYM 272
#define STRUCT_SYM 273
#define SWITCH_SYM 274
#define TYPEDEF_SYM 275
#define UNION_SYM 276
#define WHILE_SYM 277
#define GOTO_SYM 278
#define PLUSPLUS 279
#define MINUSMINUS 280
#define ARROW 281
#define LSS 282
#define GTR 283
#define LEQ 284
#define GEQ 285
#define EQL 286
#define NEQ 287
#define AMPAMP 288
#define BARBAR 289
#define LSH 290
#define RSH 291
#define DOTDOTDOT 292
#define LP 293
#define RP 294
#define LB 295
#define RB 296
#define LR 297
#define RR 298
#define COLON 299
#define PERIOD 300
#define COMMA 301
#define EXCL 302
#define STAR 303
#define SLASH 304
#define PERCENT 305
#define AMP 306
#define SEMICOLON 307
#define PLUS 308
#define MINUS 309
#define ASSIGN 310
#define NOT 311
#define XOR 312
#define BAR 313
#define QUESTION 314
#define INTEGER_CONSTANT 315
#define FLOAT_CONSTANT 316
#define STRING_LITERAL 317
#define CHARACTER_CONSTANT 318
#define CONST_SYM 319

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
