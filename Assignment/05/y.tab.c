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
#line 1 "05.y"

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;

#include "type.h"
#include "func.h"
#include <stdio.h>
#include <stdlib.h>

int yyerror(char*);
int yylex();

#line 84 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_AUTO_SYM = 5,                   /* AUTO_SYM  */
  YYSYMBOL_BREAK_SYM = 6,                  /* BREAK_SYM  */
  YYSYMBOL_CASE_SYM = 7,                   /* CASE_SYM  */
  YYSYMBOL_CONTINUE_SYM = 8,               /* CONTINUE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 9,                /* DEFAULT_SYM  */
  YYSYMBOL_DO_SYM = 10,                    /* DO_SYM  */
  YYSYMBOL_ELSE_SYM = 11,                  /* ELSE_SYM  */
  YYSYMBOL_ENUM_SYM = 12,                  /* ENUM_SYM  */
  YYSYMBOL_FOR_SYM = 13,                   /* FOR_SYM  */
  YYSYMBOL_IF_SYM = 14,                    /* IF_SYM  */
  YYSYMBOL_RETURN_SYM = 15,                /* RETURN_SYM  */
  YYSYMBOL_SIZEOF_SYM = 16,                /* SIZEOF_SYM  */
  YYSYMBOL_STATIC_SYM = 17,                /* STATIC_SYM  */
  YYSYMBOL_STRUCT_SYM = 18,                /* STRUCT_SYM  */
  YYSYMBOL_SWITCH_SYM = 19,                /* SWITCH_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 20,               /* TYPEDEF_SYM  */
  YYSYMBOL_UNION_SYM = 21,                 /* UNION_SYM  */
  YYSYMBOL_WHILE_SYM = 22,                 /* WHILE_SYM  */
  YYSYMBOL_GOTO_SYM = 23,                  /* GOTO_SYM  */
  YYSYMBOL_PLUSPLUS = 24,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 25,                /* MINUSMINUS  */
  YYSYMBOL_ARROW = 26,                     /* ARROW  */
  YYSYMBOL_LSS = 27,                       /* LSS  */
  YYSYMBOL_GTR = 28,                       /* GTR  */
  YYSYMBOL_LEQ = 29,                       /* LEQ  */
  YYSYMBOL_GEQ = 30,                       /* GEQ  */
  YYSYMBOL_EQL = 31,                       /* EQL  */
  YYSYMBOL_NEQ = 32,                       /* NEQ  */
  YYSYMBOL_AMPAMP = 33,                    /* AMPAMP  */
  YYSYMBOL_BARBAR = 34,                    /* BARBAR  */
  YYSYMBOL_LSH = 35,                       /* LSH  */
  YYSYMBOL_RSH = 36,                       /* RSH  */
  YYSYMBOL_DOTDOTDOT = 37,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 38,                        /* LP  */
  YYSYMBOL_RP = 39,                        /* RP  */
  YYSYMBOL_LB = 40,                        /* LB  */
  YYSYMBOL_RB = 41,                        /* RB  */
  YYSYMBOL_LR = 42,                        /* LR  */
  YYSYMBOL_RR = 43,                        /* RR  */
  YYSYMBOL_COLON = 44,                     /* COLON  */
  YYSYMBOL_PERIOD = 45,                    /* PERIOD  */
  YYSYMBOL_COMMA = 46,                     /* COMMA  */
  YYSYMBOL_EXCL = 47,                      /* EXCL  */
  YYSYMBOL_STAR = 48,                      /* STAR  */
  YYSYMBOL_SLASH = 49,                     /* SLASH  */
  YYSYMBOL_PERCENT = 50,                   /* PERCENT  */
  YYSYMBOL_AMP = 51,                       /* AMP  */
  YYSYMBOL_SEMICOLON = 52,                 /* SEMICOLON  */
  YYSYMBOL_PLUS = 53,                      /* PLUS  */
  YYSYMBOL_MINUS = 54,                     /* MINUS  */
  YYSYMBOL_ASSIGN = 55,                    /* ASSIGN  */
  YYSYMBOL_NOT = 56,                       /* NOT  */
  YYSYMBOL_XOR = 57,                       /* XOR  */
  YYSYMBOL_BAR = 58,                       /* BAR  */
  YYSYMBOL_QUESTION = 59,                  /* QUESTION  */
  YYSYMBOL_INTEGER_CONSTANT = 60,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 61,            /* FLOAT_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 62,            /* STRING_LITERAL  */
  YYSYMBOL_CHARACTER_CONSTANT = 63,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_CONST_SYM = 64,                 /* CONST_SYM  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_program = 66,                   /* program  */
  YYSYMBOL_translation_unit = 67,          /* translation_unit  */
  YYSYMBOL_external_declaration = 68,      /* external_declaration  */
  YYSYMBOL_function_definition = 69,       /* function_definition  */
  YYSYMBOL_70_1 = 70,                      /* @1  */
  YYSYMBOL_71_2 = 71,                      /* @2  */
  YYSYMBOL_declaration = 72,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 73,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 74,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list = 75,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 76,           /* init_declarator  */
  YYSYMBOL_type_specifier = 77,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 78,          /* struct_specifier  */
  YYSYMBOL_79_3 = 79,                      /* @3  */
  YYSYMBOL_80_4 = 80,                      /* @4  */
  YYSYMBOL_81_5 = 81,                      /* @5  */
  YYSYMBOL_82_6 = 82,                      /* @6  */
  YYSYMBOL_struct_or_union = 83,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 84,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 85,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 86,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 87,         /* struct_declarator  */
  YYSYMBOL_enum_specifier = 88,            /* enum_specifier  */
  YYSYMBOL_89_7 = 89,                      /* @7  */
  YYSYMBOL_90_8 = 90,                      /* @8  */
  YYSYMBOL_enumerator_list = 91,           /* enumerator_list  */
  YYSYMBOL_enumerator = 92,                /* enumerator  */
  YYSYMBOL_93_9 = 93,                      /* @9  */
  YYSYMBOL_declarator = 94,                /* declarator  */
  YYSYMBOL_constant_expression_opt = 95,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 96,   /* parameter_type_list_opt  */
  YYSYMBOL_pointer = 97,                   /* pointer  */
  YYSYMBOL_direct_declarator = 98,         /* direct_declarator  */
  YYSYMBOL_99_10 = 99,                     /* @10  */
  YYSYMBOL_parameter_type_list = 100,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 101,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 102,    /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 103,  /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 104,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 105, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 106,              /* initializer  */
  YYSYMBOL_initializer_list = 107,         /* initializer_list  */
  YYSYMBOL_statement = 108,                /* statement  */
  YYSYMBOL_labeled_statement = 109,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 110,       /* compound_statement  */
  YYSYMBOL_111_11 = 111,                   /* @11  */
  YYSYMBOL_declaration_list = 112,         /* declaration_list  */
  YYSYMBOL_statement_list = 113,           /* statement_list  */
  YYSYMBOL_expression_statement = 114,     /* expression_statement  */
  YYSYMBOL_selection_statement = 115,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 116,      /* iteration_statement  */
  YYSYMBOL_expression_opt = 117,           /* expression_opt  */
  YYSYMBOL_jump_statement = 118,           /* jump_statement  */
  YYSYMBOL_primary_expression = 119,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 120,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 121,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 122,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 123,         /* unary_expression  */
  YYSYMBOL_cast_expression = 124,          /* cast_expression  */
  YYSYMBOL_type_name = 125,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 126, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 127,      /* additive_expression  */
  YYSYMBOL_shift_expression = 128,         /* shift_expression  */
  YYSYMBOL_relational_expression = 129,    /* relational_expression  */
  YYSYMBOL_equality_expression = 130,      /* equality_expression  */
  YYSYMBOL_AND_expression = 131,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 132,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 133,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 134,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 135,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 136,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 137,    /* assignment_expression  */
  YYSYMBOL_comma_expression = 138,         /* comma_expression  */
  YYSYMBOL_expression = 139,               /* expression  */
  YYSYMBOL_constant_expression = 140       /* constant_expression  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   563

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    19,    19,    21,    22,    24,    25,    28,    28,    29,
      29,    31,    33,    34,    35,    36,    38,    38,    38,    40,
      41,    43,    44,    46,    47,    48,    51,    51,    51,    52,
      52,    52,    53,    55,    56,    58,    59,    61,    63,    64,
      66,    69,    69,    70,    70,    71,    73,    74,    76,    77,
      77,    80,    81,    84,    85,    87,    88,    91,    92,    95,
      96,    97,    98,    98,   101,   102,   104,   105,   107,   108,
     110,   111,   113,   114,   115,   117,   118,   119,   120,   121,
     123,   124,   125,   127,   128,   131,   132,   133,   134,   135,
     136,   138,   139,   142,   142,   144,   145,   147,   148,   151,
     152,   153,   154,   155,   157,   158,   159,   161,   162,   164,
     165,   166,   169,   170,   171,   172,   173,   174,   176,   177,
     178,   179,   180,   181,   182,   184,   185,   187,   188,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   202,
     203,   205,   208,   209,   210,   211,   213,   214,   215,   217,
     220,   221,   222,   223,   224,   226,   227,   228,   231,   233,
     235,   236,   238,   239,   241,   242,   244,   247,   248,   250,
     252,   254
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "AUTO_SYM", "BREAK_SYM", "CASE_SYM", "CONTINUE_SYM",
  "DEFAULT_SYM", "DO_SYM", "ELSE_SYM", "ENUM_SYM", "FOR_SYM", "IF_SYM",
  "RETURN_SYM", "SIZEOF_SYM", "STATIC_SYM", "STRUCT_SYM", "SWITCH_SYM",
  "TYPEDEF_SYM", "UNION_SYM", "WHILE_SYM", "GOTO_SYM", "PLUSPLUS",
  "MINUSMINUS", "ARROW", "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ",
  "AMPAMP", "BARBAR", "LSH", "RSH", "DOTDOTDOT", "LP", "RP", "LB", "RB",
  "LR", "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH",
  "PERCENT", "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN", "NOT", "XOR",
  "BAR", "QUESTION", "INTEGER_CONSTANT", "FLOAT_CONSTANT",
  "STRING_LITERAL", "CHARACTER_CONSTANT", "CONST_SYM", "$accept",
  "program", "translation_unit", "external_declaration",
  "function_definition", "@1", "@2", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier", "@7",
  "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "constant_expression_opt", "parameter_type_list_opt", "pointer",
  "direct_declarator", "@10", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "@11", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression_opt", "jump_statement", "primary_expression",
  "postfix_expression", "arg_expression_list_opt", "arg_expression_list",
  "unary_expression", "cast_expression", "type_name",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "comma_expression",
  "expression", "constant_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-193)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-50)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     161,  -193,  -193,  -193,    32,  -193,  -193,  -193,  -193,    40,
       2,    69,   161,  -193,  -193,  -193,    40,   229,   229,  -193,
      73,  -193,  -193,    35,   102,    53,    64,    75,  -193,  -193,
    -193,    51,  -193,   -24,  -193,  -193,    79,   104,   118,   102,
    -193,   411,   126,   140,  -193,    40,  -193,   392,   118,   130,
    -193,  -193,  -193,   229,  -193,   444,   463,   463,   326,   411,
     411,   411,   411,   411,  -193,  -193,  -193,  -193,   143,  -193,
     166,   147,  -193,   139,   -33,  -193,   215,   122,  -193,  -193,
     145,   172,   164,  -193,  -193,  -193,   140,   152,    44,  -193,
    -193,   155,   392,  -193,  -193,  -193,  -193,    89,  -193,    37,
     174,  -193,   171,  -193,   326,  -193,   411,  -193,  -193,    60,
     179,  -193,  -193,   185,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,   227,   411,   411,   228,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,    56,   181,  -193,   140,  -193,    77,    89,    40,
     101,  -193,   229,    24,   411,  -193,    23,  -193,  -193,   111,
    -193,   348,   200,   515,   123,  -193,   411,  -193,  -193,   201,
     202,  -193,   211,  -193,  -193,  -193,  -193,  -193,   139,   139,
    -193,  -193,  -193,  -193,   215,   215,  -193,   145,   172,  -193,
     411,  -193,  -193,   359,   165,    63,  -193,  -193,  -193,  -193,
    -193,    40,   213,   214,   218,   217,   111,   229,   411,  -193,
    -193,  -193,  -193,  -193,   411,  -193,  -193,  -193,  -193,  -193,
      40,  -193,   207,   411,   210,   219,   274,   216,   234,   411,
     240,   241,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,   233,  -193,  -193,  -193,   247,   250,  -193,  -193,  -193,
     248,  -193,   274,   272,   411,   411,   243,  -193,   411,   411,
    -193,  -193,  -193,   274,  -193,   259,   249,   261,  -193,   263,
     264,  -193,   411,   411,   274,   274,   274,   265,   253,   295,
    -193,  -193,   255,   411,   274,  -193,   269,  -193,   274,  -193
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    59,    25,    16,    43,    17,    33,    18,    34,     0,
      57,     0,     2,     3,     5,     6,     0,    13,    12,    23,
      29,    24,     9,     0,    52,    45,     0,     0,    58,     1,
       4,     0,    19,    21,    15,    14,    32,     0,     0,    51,
      62,    53,     0,     0,    60,     0,    11,     0,     0,     0,
      30,    93,    10,    55,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,   116,   115,     0,   118,
     129,   139,   142,   146,   149,   150,   155,   158,   159,   160,
     162,   164,   166,   167,   171,    54,     0,    48,     0,    46,
      20,    21,     0,    22,    80,     8,    27,     0,    95,    70,
       0,    56,    64,    66,     0,   137,     0,   130,   131,     0,
       0,   169,   170,     0,   139,   134,   133,   132,   136,   135,
      61,   123,   124,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,    83,     0,     0,     0,
       0,    35,    97,    55,    53,    68,    72,    69,    71,    73,
      63,     0,     0,    55,    72,   141,     0,   117,   122,     0,
     126,   127,     0,   121,   168,   143,   144,   145,   147,   148,
     151,   152,   153,   154,   156,   157,   161,   163,   165,    42,
       0,    47,    81,     0,     0,     0,    38,    40,    31,    36,
      96,     0,     0,     0,     0,     0,    74,    55,    53,    65,
      67,   138,   140,   120,     0,   119,    50,    82,    84,    28,
       0,    37,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,    94,    99,    98,    85,    86,    87,    88,    89,
      90,     0,    77,    75,    76,     0,     0,   128,    39,   111,
       0,   110,     0,     0,   107,     0,     0,   108,     0,     0,
     100,    79,    78,     0,    92,     0,     0,     0,   109,     0,
       0,    91,     0,   107,     0,     0,     0,     0,     0,   101,
     103,   104,     0,   107,     0,   105,     0,   102,     0,   106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,  -193,   297,  -193,  -193,  -193,   158,     7,  -193,
    -193,   266,   -82,  -193,  -193,  -193,  -193,  -193,  -193,   167,
    -120,  -193,    93,  -193,  -193,  -193,   231,   169,  -193,    -8,
    -138,   -51,    -5,   -17,  -193,  -193,  -193,   157,  -193,   -77,
    -117,   -75,  -193,  -192,  -193,   -15,  -193,  -193,  -193,  -193,
    -193,  -193,  -116,  -193,  -193,  -193,  -193,  -193,    -4,   -49,
     220,    43,  -193,   135,    57,  -193,  -193,   180,   183,   191,
    -193,  -193,   -38,  -193,   -58,   -43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    48,    38,    15,    99,    17,
      31,    32,    18,    19,    49,   148,    37,    97,    20,   150,
     151,   195,   196,    21,    42,    26,    88,    89,   143,    22,
      68,   203,    23,    24,    53,   101,   102,   103,   157,   204,
     159,    93,   147,   234,   235,   236,    98,   152,   202,   237,
     238,   239,   256,   240,    69,    70,   169,   170,    71,    72,
     110,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   111,   112,   241,    85
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     113,    27,   100,    84,    94,    28,    39,    16,    33,    84,
     115,   116,   117,   118,   119,   149,   205,   146,    -7,    16,
     131,   132,   158,    52,    34,    35,     1,     1,     2,     3,
     199,    47,   165,    95,   253,    25,     4,    91,     1,   206,
       1,     5,     6,     1,     7,     8,   113,   206,   113,    94,
      10,   105,   107,   108,    84,   114,   114,   114,   114,   114,
     264,   153,   153,   154,   154,   109,   149,   172,   149,    29,
     246,   271,    10,     9,   199,   153,    36,   154,     9,   175,
     176,   177,   279,   280,   281,    10,   171,   144,    10,   174,
     145,   155,   287,     2,   156,   -41,   289,    45,   163,   189,
     154,     4,   145,    46,   164,     2,    43,     6,    10,   220,
       8,   109,   149,     4,    44,   221,    84,   212,   218,     6,
     192,   -26,     8,   193,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   266,    39,
      40,   197,    41,    87,   198,    27,    50,   216,   156,   207,
      94,   208,    84,   137,   138,    84,   245,   278,   164,   201,
      51,   163,   114,   154,     1,     2,     3,   286,    86,     2,
      84,   257,    96,     4,   178,   179,   247,     4,     5,     6,
     250,     7,     8,     6,   120,    84,     8,   128,   129,   130,
     121,   122,   123,    91,   184,   185,   257,   267,   141,     9,
     269,   270,   127,   139,   124,   140,   125,   -49,   219,    10,
      47,   126,   197,   160,   277,   257,    54,   161,   166,   222,
     223,   224,   225,   226,   167,   257,   227,   228,   229,    55,
     168,   173,   230,     2,     3,   231,   190,    56,    57,   211,
     213,     4,   133,   134,   135,   136,     5,     6,   214,     7,
       8,    58,   215,   242,   254,    51,   232,   243,   244,   249,
      59,    60,   251,   252,    61,   233,    62,    63,   180,   181,
     182,   183,   255,    64,    65,    66,    67,    54,   258,   259,
     222,   223,   224,   225,   226,   260,   261,   227,   228,   229,
      55,   262,   263,   230,   265,   268,   231,   272,    56,    57,
     274,   273,   275,   276,   282,   283,   284,   285,   288,    30,
     200,    90,    58,   248,   191,   194,    51,   142,   210,   186,
       0,    59,    60,   187,   162,    61,   233,    62,    63,    54,
       2,     3,   188,     0,    64,    65,    66,    67,     4,     0,
       0,     0,    55,     5,     6,     0,     7,     8,     0,     0,
      56,    57,     2,     3,     0,     0,     0,     0,     0,     0,
       4,     0,    54,     0,    58,     5,     6,     0,     7,     8,
       0,     0,     0,    59,    60,    55,     0,    61,     0,    62,
      63,     0,     0,    56,    57,   209,    64,    65,    66,    67,
       0,     0,     0,     0,     0,    54,     0,    58,     0,     0,
       0,    92,   217,     0,     0,     0,    59,    60,    55,     0,
      61,     0,    62,    63,    54,     0,    56,    57,     0,    64,
      65,    66,    67,     0,     0,     0,     0,    55,     0,     0,
      58,     0,     0,     0,    92,    56,    57,     0,     0,    59,
      60,     0,     0,    61,     0,    62,    63,    54,     0,    58,
       0,     0,    64,    65,    66,    67,     0,     0,    59,    60,
      55,     0,    61,     0,    62,    63,    54,     0,    56,    57,
       0,    64,    65,    66,    67,     0,     0,     0,     0,    55,
       0,     0,   104,     0,     0,     0,     0,    56,    57,     0,
       0,    59,    60,     0,     0,    61,     0,    62,    63,     0,
       0,   106,     0,     0,    64,    65,    66,    67,     0,     0,
      59,    60,     0,     0,    61,     0,    62,    63,     0,     2,
       3,     0,     0,    64,    65,    66,    67,     4,     0,     0,
       0,     0,     5,     6,     0,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,     0,   154,     0,     0,     0,     0,
       0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      58,     9,    53,    41,    47,    10,    23,     0,    16,    47,
      59,    60,    61,    62,    63,    97,   154,    92,    42,    12,
      53,    54,    99,    38,    17,    18,     3,     3,     4,     5,
     150,    55,   109,    48,   226,     3,    12,    45,     3,   156,
       3,    17,    18,     3,    20,    21,   104,   164,   106,    92,
      48,    55,    56,    57,    92,    59,    60,    61,    62,    63,
     252,    38,    38,    40,    40,    58,   148,   125,   150,     0,
     208,   263,    48,    38,   194,    38,     3,    40,    38,   128,
     129,   130,   274,   275,   276,    48,   124,    43,    48,   127,
      46,    99,   284,     4,    99,    42,   288,    46,    38,    43,
      40,    12,    46,    52,   109,     4,    42,    18,    48,    46,
      21,   104,   194,    12,    39,    52,   154,   166,   193,    18,
      43,    42,    21,    46,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   254,   156,
      38,   149,    40,     3,    43,   153,    42,   190,   153,    38,
     193,    40,   190,    31,    32,   193,   207,   273,   163,   152,
      42,    38,   166,    40,     3,     4,     5,   283,    42,     4,
     208,   229,    42,    12,   131,   132,   214,    12,    17,    18,
     223,    20,    21,    18,    41,   223,    21,    48,    49,    50,
      24,    25,    26,   201,   137,   138,   254,   255,    34,    38,
     258,   259,    55,    58,    38,    33,    40,    55,    43,    48,
      55,    45,   220,    39,   272,   273,     3,    46,    39,     6,
       7,     8,     9,    10,    39,   283,    13,    14,    15,    16,
       3,     3,    19,     4,     5,    22,    55,    24,    25,    39,
      39,    12,    27,    28,    29,    30,    17,    18,    46,    20,
      21,    38,    41,    39,    38,    42,    43,    39,    41,    52,
      47,    48,    52,    44,    51,    52,    53,    54,   133,   134,
     135,   136,    38,    60,    61,    62,    63,     3,    38,    38,
       6,     7,     8,     9,    10,    52,    39,    13,    14,    15,
      16,    41,    44,    19,    22,    52,    22,    38,    24,    25,
      39,    52,    39,    39,    39,    52,    11,    52,    39,    12,
     152,    45,    38,   220,   145,   148,    42,    86,   161,   139,
      -1,    47,    48,   140,   104,    51,    52,    53,    54,     3,
       4,     5,   141,    -1,    60,    61,    62,    63,    12,    -1,
      -1,    -1,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,     3,    -1,    38,    17,    18,    -1,    20,    21,
      -1,    -1,    -1,    47,    48,    16,    -1,    51,    -1,    53,
      54,    -1,    -1,    24,    25,    37,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    38,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    47,    48,    16,    -1,
      51,    -1,    53,    54,     3,    -1,    24,    25,    -1,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      38,    -1,    -1,    -1,    42,    24,    25,    -1,    -1,    47,
      48,    -1,    -1,    51,    -1,    53,    54,     3,    -1,    38,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    47,    48,
      16,    -1,    51,    -1,    53,    54,     3,    -1,    24,    25,
      -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    47,    48,    -1,    -1,    51,    -1,    53,    54,    -1,
      -1,    38,    -1,    -1,    60,    61,    62,    63,    -1,    -1,
      47,    48,    -1,    -1,    51,    -1,    53,    54,    -1,     4,
       5,    -1,    -1,    60,    61,    62,    63,    12,    -1,    -1,
      -1,    -1,    17,    18,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    12,    17,    18,    20,    21,    38,
      48,    66,    67,    68,    69,    72,    73,    74,    77,    78,
      83,    88,    94,    97,    98,     3,    90,    94,    97,     0,
      68,    75,    76,    94,    73,    73,     3,    81,    71,    98,
      38,    40,    89,    42,    39,    46,    52,    55,    70,    79,
      42,    42,   110,    99,     3,    16,    24,    25,    38,    47,
      48,    51,    53,    54,    60,    61,    62,    63,    95,   119,
     120,   123,   124,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   140,    42,     3,    91,    92,
      76,    94,    42,   106,   140,   110,    42,    82,   111,    73,
      96,   100,   101,   102,    38,   123,    38,   123,   123,    73,
     125,   137,   138,   139,   123,   124,   124,   124,   124,   124,
      41,    24,    25,    26,    38,    40,    45,    55,    48,    49,
      50,    53,    54,    27,    28,    29,    30,    31,    32,    58,
      33,    34,    91,    93,    43,    46,   106,   107,    80,    77,
      84,    85,   112,    38,    40,    94,    97,   103,   104,   105,
      39,    46,   125,    38,    97,   104,    39,    39,     3,   121,
     122,   137,   139,     3,   137,   124,   124,   124,   126,   126,
     128,   128,   128,   128,   129,   129,   132,   133,   134,    43,
      55,    92,    43,    46,    84,    86,    87,    94,    43,    85,
      72,    73,   113,    96,   104,    95,   105,    38,    40,    37,
     102,    39,   124,    39,    46,    41,   140,    43,   106,    43,
      46,    52,     6,     7,     8,     9,    10,    13,    14,    15,
      19,    22,    43,    52,   108,   109,   110,   114,   115,   116,
     118,   139,    39,    39,    41,    96,    95,   137,    87,    52,
     140,    52,    44,   108,    38,    38,   117,   139,    38,    38,
      52,    39,    41,    44,   108,    22,   117,   139,    52,   139,
     139,   108,    38,    52,    39,    39,    39,   139,   117,   108,
     108,   108,    39,    52,    11,    52,   117,   108,    39,   108
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    70,    69,    71,
      69,    72,    73,    73,    73,    73,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    77,    79,    80,    78,    81,
      82,    78,    78,    83,    83,    84,    84,    85,    86,    86,
      87,    89,    88,    90,    88,    88,    91,    91,    92,    93,
      92,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    98,    99,    98,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   108,   108,   108,
     108,   109,   109,   111,   110,   112,   112,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   116,   117,   117,   118,
     118,   118,   119,   119,   119,   119,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   124,
     124,   125,   126,   126,   126,   126,   127,   127,   127,   128,
     129,   129,   129,   129,   129,   130,   130,   130,   131,   132,
     133,   133,   134,   134,   135,   135,   136,   137,   137,   138,
     139,   140
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     3,     1,     1,     2,     2,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     0,     1,     0,     1,     1,     2,     1,
       3,     4,     0,     5,     1,     3,     1,     3,     2,     2,
       0,     1,     1,     1,     2,     3,     3,     3,     4,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     3,     0,     5,     0,     2,     0,     2,     1,
       2,     5,     7,     5,     5,     7,     9,     0,     1,     3,
       2,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     0,     1,     1,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     1,
       4,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     1,
       1,     3,     1,     3,     1,     3,     1,     1,     3,     1,
       1,     1
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
  case 2: /* program: translation_unit  */
#line 19 "05.y"
                           { root=makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference(); }
#line 1665 "y.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 21 "05.y"
                                        { yyval=yyvsp[0]; }
#line 1671 "y.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 22 "05.y"
                                                         { yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]); }
#line 1677 "y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 24 "05.y"
                                           { yyval=yyvsp[0]; }
#line 1683 "y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 25 "05.y"
                                   { yyval=yyvsp[0]; }
#line 1689 "y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 28 "05.y"
                                                        { yyval=setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]); }
#line 1695 "y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 28 "05.y"
                                                                                                                          { yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]); current_id=yyvsp[-2]; }
#line 1701 "y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 29 "05.y"
                                 { yyval=setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, 0)); }
#line 1707 "y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 29 "05.y"
                                                                                                                           { yyval=setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]); current_id=yyvsp[-2]; }
#line 1713 "y.tab.c"
    break;

  case 11: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 31 "05.y"
                                                                    { yyval=setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]); }
#line 1719 "y.tab.c"
    break;

  case 12: /* declaration_specifiers: type_specifier  */
#line 33 "05.y"
                                        { yyval=makeSpecifier(yyvsp[0], 0); }
#line 1725 "y.tab.c"
    break;

  case 13: /* declaration_specifiers: storage_class_specifier  */
#line 34 "05.y"
                                                 { yyval=makeSpecifier(0, yyvsp[0]); }
#line 1731 "y.tab.c"
    break;

  case 14: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 35 "05.y"
                                        { yyval=updateSpecifier(yyvsp[0], yyvsp[-1], 0); }
#line 1737 "y.tab.c"
    break;

  case 15: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 36 "05.y"
                                                 {yyval=updateSpecifier(yyvsp[0], 0, yyvsp[-1]); }
#line 1743 "y.tab.c"
    break;

  case 16: /* storage_class_specifier: AUTO_SYM  */
#line 38 "05.y"
                                   { yyval=S_AUTO; }
#line 1749 "y.tab.c"
    break;

  case 17: /* storage_class_specifier: STATIC_SYM  */
#line 38 "05.y"
                                                               { yyval=S_STATIC; }
#line 1755 "y.tab.c"
    break;

  case 18: /* storage_class_specifier: TYPEDEF_SYM  */
#line 38 "05.y"
                                                                                              {yyval=S_TYPEDEF; }
#line 1761 "y.tab.c"
    break;

  case 19: /* init_declarator_list: init_declarator  */
#line 40 "05.y"
                                       { yyval=yyvsp[0]; }
#line 1767 "y.tab.c"
    break;

  case 20: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 41 "05.y"
                                                                  { yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]); }
#line 1773 "y.tab.c"
    break;

  case 21: /* init_declarator: declarator  */
#line 43 "05.y"
                             {yyval=yyvsp[0];}
#line 1779 "y.tab.c"
    break;

  case 22: /* init_declarator: declarator ASSIGN initializer  */
#line 44 "05.y"
                                                {yyval=setDeclaratorInit((A_ID*)yyvsp[-2], (A_NODE*)yyvsp[0]); }
#line 1785 "y.tab.c"
    break;

  case 23: /* type_specifier: struct_specifier  */
#line 46 "05.y"
                                  {yyval=yyvsp[0];}
#line 1791 "y.tab.c"
    break;

  case 24: /* type_specifier: enum_specifier  */
#line 47 "05.y"
                                {yyval=yyvsp[0];}
#line 1797 "y.tab.c"
    break;

  case 25: /* type_specifier: TYPE_IDENTIFIER  */
#line 48 "05.y"
                  {yyval=yyvsp[0];}
#line 1803 "y.tab.c"
    break;

  case 26: /* @3: %empty  */
#line 51 "05.y"
                                              {yyval=setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT); }
#line 1809 "y.tab.c"
    break;

  case 27: /* @4: %empty  */
#line 51 "05.y"
                                                                                                         { yyval=current_id; current_level++; }
#line 1815 "y.tab.c"
    break;

  case 28: /* struct_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 51 "05.y"
                                                                                                                                                                        {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2]; }
#line 1821 "y.tab.c"
    break;

  case 29: /* @5: %empty  */
#line 52 "05.y"
                                   {yyval=makeType(yyvsp[0]); }
#line 1827 "y.tab.c"
    break;

  case 30: /* @6: %empty  */
#line 52 "05.y"
                                                          {yyval=current_id; current_level++; }
#line 1833 "y.tab.c"
    break;

  case 31: /* struct_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 52 "05.y"
                                                                                                                        {checkForwardReference(); yyval=setTypeField(yyvsp[-4], yyvsp[-1]); current_level--; current_id=yyvsp[-2]; }
#line 1839 "y.tab.c"
    break;

  case 32: /* struct_specifier: struct_or_union IDENTIFIER  */
#line 53 "05.y"
                             {yyval=getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT); }
#line 1845 "y.tab.c"
    break;

  case 33: /* struct_or_union: STRUCT_SYM  */
#line 55 "05.y"
                             {yyval=T_STRUCT; }
#line 1851 "y.tab.c"
    break;

  case 34: /* struct_or_union: UNION_SYM  */
#line 56 "05.y"
                            {yyval=T_UNION; }
#line 1857 "y.tab.c"
    break;

  case 35: /* struct_declaration_list: struct_declaration  */
#line 58 "05.y"
                                             {yyval=yyvsp[0];}
#line 1863 "y.tab.c"
    break;

  case 36: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 59 "05.y"
                                                                     {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]); }
#line 1869 "y.tab.c"
    break;

  case 37: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 61 "05.y"
                                                                     {yyval=setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]); }
#line 1875 "y.tab.c"
    break;

  case 38: /* struct_declarator_list: struct_declarator  */
#line 63 "05.y"
                                           {yyval=yyvsp[0];}
#line 1881 "y.tab.c"
    break;

  case 39: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 64 "05.y"
                                                                        {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1887 "y.tab.c"
    break;

  case 40: /* struct_declarator: declarator  */
#line 66 "05.y"
                               {yyval=yyvsp[0];}
#line 1893 "y.tab.c"
    break;

  case 41: /* @7: %empty  */
#line 69 "05.y"
                                     {yyval=setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM); }
#line 1899 "y.tab.c"
    break;

  case 42: /* enum_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 69 "05.y"
                                                                                                                     {yyval=setTypeField(yyvsp[-3], yyvsp[-1]); }
#line 1905 "y.tab.c"
    break;

  case 43: /* @8: %empty  */
#line 70 "05.y"
                          {yyval=makeType(T_ENUM);}
#line 1911 "y.tab.c"
    break;

  case 44: /* enum_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 70 "05.y"
                                                                       {yyval=setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1917 "y.tab.c"
    break;

  case 45: /* enum_specifier: ENUM_SYM IDENTIFIER  */
#line 71 "05.y"
                      {yyval=getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM); }
#line 1923 "y.tab.c"
    break;

  case 46: /* enumerator_list: enumerator  */
#line 73 "05.y"
                             {yyval=yyvsp[0];}
#line 1929 "y.tab.c"
    break;

  case 47: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 74 "05.y"
                                                   {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1935 "y.tab.c"
    break;

  case 48: /* enumerator: IDENTIFIER  */
#line 76 "05.y"
                        {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1941 "y.tab.c"
    break;

  case 49: /* @9: %empty  */
#line 77 "05.y"
                        {yyval=setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1947 "y.tab.c"
    break;

  case 50: /* enumerator: IDENTIFIER @9 ASSIGN constant_expression  */
#line 77 "05.y"
                                                                                                                {yyval=setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1953 "y.tab.c"
    break;

  case 51: /* declarator: pointer direct_declarator  */
#line 80 "05.y"
                                       {yyval=setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1959 "y.tab.c"
    break;

  case 52: /* declarator: direct_declarator  */
#line 81 "05.y"
                               {yyval=yyvsp[0];}
#line 1965 "y.tab.c"
    break;

  case 53: /* constant_expression_opt: %empty  */
#line 84 "05.y"
                                      {yyval=NIL;}
#line 1971 "y.tab.c"
    break;

  case 54: /* constant_expression_opt: constant_expression  */
#line 85 "05.y"
                                              {yyval=yyvsp[0];}
#line 1977 "y.tab.c"
    break;

  case 55: /* parameter_type_list_opt: %empty  */
#line 87 "05.y"
                                      {yyval=NIL;}
#line 1983 "y.tab.c"
    break;

  case 56: /* parameter_type_list_opt: parameter_type_list  */
#line 88 "05.y"
                                              {yyval=yyvsp[0];}
#line 1989 "y.tab.c"
    break;

  case 57: /* pointer: STAR  */
#line 91 "05.y"
               {yyval=makeType(T_POINTER);}
#line 1995 "y.tab.c"
    break;

  case 58: /* pointer: STAR pointer  */
#line 92 "05.y"
                       {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2001 "y.tab.c"
    break;

  case 59: /* direct_declarator: IDENTIFIER  */
#line 95 "05.y"
                               {yyval=makeIdentifier(yyvsp[0]);}
#line 2007 "y.tab.c"
    break;

  case 60: /* direct_declarator: LP declarator RP  */
#line 96 "05.y"
                                     {yyval=yyvsp[-1];}
#line 2013 "y.tab.c"
    break;

  case 61: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 97 "05.y"
                                                  {yyval=setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2019 "y.tab.c"
    break;

  case 62: /* @10: %empty  */
#line 98 "05.y"
                       {yyval=current_id; current_level++;}
#line 2025 "y.tab.c"
    break;

  case 63: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 98 "05.y"
                                                                                    {checkForwardReference(); current_id=yyvsp[-2]; current_level--; yyval=setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 2031 "y.tab.c"
    break;

  case 64: /* parameter_type_list: parameter_list  */
#line 101 "05.y"
                                     {yyval=yyvsp[0];}
#line 2037 "y.tab.c"
    break;

  case 65: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 102 "05.y"
                                                     {yyval=linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 2043 "y.tab.c"
    break;

  case 66: /* parameter_list: parameter_declaration  */
#line 104 "05.y"
                                       {yyval=yyvsp[0];}
#line 2049 "y.tab.c"
    break;

  case 67: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 105 "05.y"
                                                            {yyval=linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 2055 "y.tab.c"
    break;

  case 68: /* parameter_declaration: declaration_specifiers declarator  */
#line 107 "05.y"
                                                          {yyval=setParameterDeclaratorSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2061 "y.tab.c"
    break;

  case 69: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 108 "05.y"
                                                                       {yyval=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 2067 "y.tab.c"
    break;

  case 70: /* abstract_declarator_opt: %empty  */
#line 110 "05.y"
                                      {yyval=NIL;}
#line 2073 "y.tab.c"
    break;

  case 71: /* abstract_declarator_opt: abstract_declarator  */
#line 111 "05.y"
                                              {yyval=yyvsp[0];}
#line 2079 "y.tab.c"
    break;

  case 72: /* abstract_declarator: pointer  */
#line 113 "05.y"
                              {yyval=makeType(T_POINTER);}
#line 2085 "y.tab.c"
    break;

  case 73: /* abstract_declarator: direct_abstract_declarator  */
#line 114 "05.y"
                                                 {yyval=yyvsp[0];}
#line 2091 "y.tab.c"
    break;

  case 74: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 115 "05.y"
                                     {yyval=setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 2097 "y.tab.c"
    break;

  case 75: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 117 "05.y"
                                                       {yyval=yyvsp[-1];}
#line 2103 "y.tab.c"
    break;

  case 76: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 118 "05.y"
                                                           {yyval=setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 2109 "y.tab.c"
    break;

  case 77: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 119 "05.y"
                                {yyval=setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 2115 "y.tab.c"
    break;

  case 78: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 120 "05.y"
                                                           {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 2121 "y.tab.c"
    break;

  case 79: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 121 "05.y"
                                                           {yyval=setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC),yyvsp[-1]));}
#line 2127 "y.tab.c"
    break;

  case 80: /* initializer: constant_expression  */
#line 123 "05.y"
                                  {yyval=(A_NODE*)makeNode(N_INIT_LIST_ONE, NIL, yyvsp[0], NIL);}
#line 2133 "y.tab.c"
    break;

  case 81: /* initializer: LR initializer_list RR  */
#line 124 "05.y"
                                     {yyval=yyvsp[-1];}
#line 2139 "y.tab.c"
    break;

  case 82: /* initializer: LR initializer_list COMMA RR  */
#line 125 "05.y"
                               {yyval=yyvsp[-2];}
#line 2145 "y.tab.c"
    break;

  case 83: /* initializer_list: initializer  */
#line 127 "05.y"
                               {yyval=makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 2151 "y.tab.c"
    break;

  case 84: /* initializer_list: initializer_list COMMA initializer  */
#line 128 "05.y"
                                                      {yyval=makeNodeList(N_INIT_LIST,yyvsp[-2],yyvsp[0]);}
#line 2157 "y.tab.c"
    break;

  case 85: /* statement: labeled_statement  */
#line 131 "05.y"
                              {yyval=yyvsp[0];}
#line 2163 "y.tab.c"
    break;

  case 86: /* statement: compound_statement  */
#line 132 "05.y"
                               {yyval=yyvsp[0];}
#line 2169 "y.tab.c"
    break;

  case 87: /* statement: expression_statement  */
#line 133 "05.y"
                       {yyval=yyvsp[0];}
#line 2175 "y.tab.c"
    break;

  case 88: /* statement: selection_statement  */
#line 134 "05.y"
                      {yyval=yyvsp[0];}
#line 2181 "y.tab.c"
    break;

  case 89: /* statement: iteration_statement  */
#line 135 "05.y"
                      {yyval=yyvsp[0];}
#line 2187 "y.tab.c"
    break;

  case 90: /* statement: jump_statement  */
#line 136 "05.y"
                 {yyval=yyvsp[0];}
#line 2193 "y.tab.c"
    break;

  case 91: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 138 "05.y"
                                                                 {yyval=makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2199 "y.tab.c"
    break;

  case 92: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 139 "05.y"
                                                {yyval=makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2205 "y.tab.c"
    break;

  case 93: /* @11: %empty  */
#line 142 "05.y"
                        {yyval=current_id; current_level++; }
#line 2211 "y.tab.c"
    break;

  case 94: /* compound_statement: LR @11 declaration_list statement_list RR  */
#line 142 "05.y"
                                                                                              {checkForwardReference(); yyval=makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); current_id=yyvsp[-3]; current_level--;}
#line 2217 "y.tab.c"
    break;

  case 95: /* declaration_list: %empty  */
#line 144 "05.y"
                               {yyval=NIL;}
#line 2223 "y.tab.c"
    break;

  case 96: /* declaration_list: declaration_list declaration  */
#line 145 "05.y"
                                                {yyval=linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 2229 "y.tab.c"
    break;

  case 97: /* statement_list: %empty  */
#line 147 "05.y"
                             {yyval=NIL;}
#line 2235 "y.tab.c"
    break;

  case 98: /* statement_list: statement_list statement  */
#line 148 "05.y"
                                          {yyval=makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2241 "y.tab.c"
    break;

  case 99: /* expression_statement: SEMICOLON  */
#line 151 "05.y"
                                 {yyval=makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2247 "y.tab.c"
    break;

  case 100: /* expression_statement: expression SEMICOLON  */
#line 152 "05.y"
                                            {yyval=makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2253 "y.tab.c"
    break;

  case 101: /* selection_statement: IF_SYM LP expression RP statement  */
#line 153 "05.y"
                                                        {yyval=makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2259 "y.tab.c"
    break;

  case 102: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 154 "05.y"
                                                                           {yyval=makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2265 "y.tab.c"
    break;

  case 103: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 155 "05.y"
                                        {yyval=makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2271 "y.tab.c"
    break;

  case 104: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 157 "05.y"
                                                           {yyval=makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2277 "y.tab.c"
    break;

  case 105: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 158 "05.y"
                                                                            {yyval=makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2283 "y.tab.c"
    break;

  case 106: /* iteration_statement: FOR_SYM LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement  */
#line 159 "05.y"
                                                                                           {yyval=makeNode(N_STMT_FOR, yyvsp[-6], NIL, yyvsp[-4]);}
#line 2289 "y.tab.c"
    break;

  case 107: /* expression_opt: %empty  */
#line 161 "05.y"
                             {yyval=NIL;}
#line 2295 "y.tab.c"
    break;

  case 108: /* expression_opt: expression  */
#line 162 "05.y"
                            {yyval=yyvsp[0];}
#line 2301 "y.tab.c"
    break;

  case 109: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 164 "05.y"
                                                     {yyval=makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2307 "y.tab.c"
    break;

  case 110: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 165 "05.y"
                                        {yyval=makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2313 "y.tab.c"
    break;

  case 111: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 166 "05.y"
                      {yyval=makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2319 "y.tab.c"
    break;

  case 112: /* primary_expression: IDENTIFIER  */
#line 169 "05.y"
                                {yyval=makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2325 "y.tab.c"
    break;

  case 113: /* primary_expression: INTEGER_CONSTANT  */
#line 170 "05.y"
                                      {yyval=makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2331 "y.tab.c"
    break;

  case 114: /* primary_expression: FLOAT_CONSTANT  */
#line 171 "05.y"
                 {yyval=makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2337 "y.tab.c"
    break;

  case 115: /* primary_expression: CHARACTER_CONSTANT  */
#line 172 "05.y"
                     {yyval=makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2343 "y.tab.c"
    break;

  case 116: /* primary_expression: STRING_LITERAL  */
#line 173 "05.y"
                 {yyval=makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2349 "y.tab.c"
    break;

  case 117: /* primary_expression: LP expression RP  */
#line 174 "05.y"
                   {yyval=yyvsp[-1];}
#line 2355 "y.tab.c"
    break;

  case 118: /* postfix_expression: primary_expression  */
#line 176 "05.y"
                                        {yyval=yyvsp[0];}
#line 2361 "y.tab.c"
    break;

  case 119: /* postfix_expression: postfix_expression LB expression RB  */
#line 177 "05.y"
                                                         {yyval=makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2367 "y.tab.c"
    break;

  case 120: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 178 "05.y"
                                                   {yyval=makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2373 "y.tab.c"
    break;

  case 121: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 179 "05.y"
                                       {yyval=makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2379 "y.tab.c"
    break;

  case 122: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 180 "05.y"
                                      {yyval=makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2385 "y.tab.c"
    break;

  case 123: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 181 "05.y"
                              {yyval=makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2391 "y.tab.c"
    break;

  case 124: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 182 "05.y"
                                {yyval=makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2397 "y.tab.c"
    break;

  case 125: /* arg_expression_list_opt: %empty  */
#line 184 "05.y"
                                      {yyval=makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2403 "y.tab.c"
    break;

  case 126: /* arg_expression_list_opt: arg_expression_list  */
#line 185 "05.y"
                                              {yyval=yyvsp[0];}
#line 2409 "y.tab.c"
    break;

  case 127: /* arg_expression_list: assignment_expression  */
#line 187 "05.y"
                                            {yyval=makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2415 "y.tab.c"
    break;

  case 128: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 188 "05.y"
                                                                      {yyval=makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2421 "y.tab.c"
    break;

  case 129: /* unary_expression: postfix_expression  */
#line 191 "05.y"
                                      {yyval=yyvsp[0];}
#line 2427 "y.tab.c"
    break;

  case 130: /* unary_expression: PLUSPLUS unary_expression  */
#line 192 "05.y"
                                             {yyval=makeNode(N_EXP_PRE_INC,NIL,yyvsp[0],NIL);}
#line 2433 "y.tab.c"
    break;

  case 131: /* unary_expression: MINUSMINUS unary_expression  */
#line 193 "05.y"
                              {yyval=makeNode(N_EXP_PRE_DEC,NIL,yyvsp[0],NIL);}
#line 2439 "y.tab.c"
    break;

  case 132: /* unary_expression: AMP cast_expression  */
#line 194 "05.y"
                      {yyval=makeNode(N_EXP_AMP,NIL,yyvsp[0],NIL);}
#line 2445 "y.tab.c"
    break;

  case 133: /* unary_expression: STAR cast_expression  */
#line 195 "05.y"
                       {yyval=makeNode(N_EXP_STAR,NIL,yyvsp[0],NIL);}
#line 2451 "y.tab.c"
    break;

  case 134: /* unary_expression: EXCL cast_expression  */
#line 196 "05.y"
                       {yyval=makeNode(N_EXP_NOT,NIL,yyvsp[0],NIL);}
#line 2457 "y.tab.c"
    break;

  case 135: /* unary_expression: MINUS cast_expression  */
#line 197 "05.y"
                        {yyval=makeNode(N_EXP_MINUS,NIL,yyvsp[0],NIL);}
#line 2463 "y.tab.c"
    break;

  case 136: /* unary_expression: PLUS cast_expression  */
#line 198 "05.y"
                       {yyval=makeNode(N_EXP_PLUS,NIL,yyvsp[0],NIL);}
#line 2469 "y.tab.c"
    break;

  case 137: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 199 "05.y"
                              {yyval=makeNode(N_EXP_SIZE_EXP,NIL,yyvsp[0],NIL);}
#line 2475 "y.tab.c"
    break;

  case 138: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 200 "05.y"
                             {yyval=makeNode(N_EXP_SIZE_TYPE,NIL,yyvsp[-1],NIL);}
#line 2481 "y.tab.c"
    break;

  case 139: /* cast_expression: unary_expression  */
#line 202 "05.y"
                                   {yyval=yyvsp[0];}
#line 2487 "y.tab.c"
    break;

  case 140: /* cast_expression: LP type_name RP cast_expression  */
#line 203 "05.y"
                                                  {yyval=makeNode(N_EXP_CAST,yyvsp[-2],NIL, yyvsp[0]);}
#line 2493 "y.tab.c"
    break;

  case 141: /* type_name: declaration_specifiers abstract_declarator  */
#line 205 "05.y"
                                                       {yyval=setTypeNameSpecifier(yyvsp[0],yyvsp[-1]);}
#line 2499 "y.tab.c"
    break;

  case 142: /* multiplicative_expression: cast_expression  */
#line 208 "05.y"
                                            {yyval=yyvsp[0];}
#line 2505 "y.tab.c"
    break;

  case 143: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 209 "05.y"
                                                                           {yyval=makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2511 "y.tab.c"
    break;

  case 144: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 210 "05.y"
                                                  {yyval=makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2517 "y.tab.c"
    break;

  case 145: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 211 "05.y"
                                                    {yyval=makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2523 "y.tab.c"
    break;

  case 146: /* additive_expression: multiplicative_expression  */
#line 213 "05.y"
                                                {yyval=yyvsp[0];}
#line 2529 "y.tab.c"
    break;

  case 147: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 214 "05.y"
                                                                         {yyval=makeNode(N_EXP_ADD,yyvsp[-2],NIL,yyvsp[0]);}
#line 2535 "y.tab.c"
    break;

  case 148: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 215 "05.y"
                                                      {yyval=makeNode(N_EXP_SUB,yyvsp[-2],NIL,yyvsp[0]);}
#line 2541 "y.tab.c"
    break;

  case 149: /* shift_expression: additive_expression  */
#line 217 "05.y"
                                       {yyval=yyvsp[0];}
#line 2547 "y.tab.c"
    break;

  case 150: /* relational_expression: shift_expression  */
#line 220 "05.y"
                                         {yyval=yyvsp[0];}
#line 2553 "y.tab.c"
    break;

  case 151: /* relational_expression: relational_expression LSS shift_expression  */
#line 221 "05.y"
                                                                   {yyval=makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2559 "y.tab.c"
    break;

  case 152: /* relational_expression: relational_expression GTR shift_expression  */
#line 222 "05.y"
                                             {yyval=makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2565 "y.tab.c"
    break;

  case 153: /* relational_expression: relational_expression LEQ shift_expression  */
#line 223 "05.y"
                                             {yyval=makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2571 "y.tab.c"
    break;

  case 154: /* relational_expression: relational_expression GEQ shift_expression  */
#line 224 "05.y"
                                             {yyval=makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2577 "y.tab.c"
    break;

  case 155: /* equality_expression: relational_expression  */
#line 226 "05.y"
                                            {yyval=yyvsp[0];}
#line 2583 "y.tab.c"
    break;

  case 156: /* equality_expression: equality_expression EQL relational_expression  */
#line 227 "05.y"
                                                                    {yyval=makeNode(N_EXP_EQL,yyvsp[-2],NIL,yyvsp[0]);}
#line 2589 "y.tab.c"
    break;

  case 157: /* equality_expression: equality_expression NEQ relational_expression  */
#line 228 "05.y"
                                                {yyval=makeNode(N_EXP_NEQ,yyvsp[-2],NIL,yyvsp[0]);}
#line 2595 "y.tab.c"
    break;

  case 158: /* AND_expression: equality_expression  */
#line 231 "05.y"
                                     {yyval=yyvsp[0];}
#line 2601 "y.tab.c"
    break;

  case 159: /* exclusive_OR_expression: AND_expression  */
#line 233 "05.y"
                                         {yyval=yyvsp[0];}
#line 2607 "y.tab.c"
    break;

  case 160: /* inclusive_OR_expression: exclusive_OR_expression  */
#line 235 "05.y"
                                                  {yyval=yyvsp[0];}
#line 2613 "y.tab.c"
    break;

  case 161: /* inclusive_OR_expression: inclusive_OR_expression BAR exclusive_OR_expression  */
#line 236 "05.y"
                                                                              {yyval=makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2619 "y.tab.c"
    break;

  case 162: /* logical_AND_expression: inclusive_OR_expression  */
#line 238 "05.y"
                                                 {yyval=yyvsp[0];}
#line 2625 "y.tab.c"
    break;

  case 163: /* logical_AND_expression: logical_AND_expression AMPAMP inclusive_OR_expression  */
#line 239 "05.y"
                                                                               {yyval=makeNode(N_EXP_AND,yyvsp[-2],NIL, yyvsp[0]);}
#line 2631 "y.tab.c"
    break;

  case 164: /* logical_OR_expression: logical_AND_expression  */
#line 241 "05.y"
                                               {yyval=yyvsp[0];}
#line 2637 "y.tab.c"
    break;

  case 165: /* logical_OR_expression: logical_OR_expression BARBAR logical_AND_expression  */
#line 242 "05.y"
                                                                            {yyval=makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2643 "y.tab.c"
    break;

  case 166: /* conditional_expression: logical_OR_expression  */
#line 244 "05.y"
                                               {yyval=yyvsp[0];}
#line 2649 "y.tab.c"
    break;

  case 167: /* assignment_expression: conditional_expression  */
#line 247 "05.y"
                                               {yyval=yyvsp[0];}
#line 2655 "y.tab.c"
    break;

  case 168: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 248 "05.y"
                                                                      {yyval=makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2661 "y.tab.c"
    break;

  case 169: /* comma_expression: assignment_expression  */
#line 250 "05.y"
                                         {yyval=yyvsp[0];}
#line 2667 "y.tab.c"
    break;

  case 170: /* expression: comma_expression  */
#line 252 "05.y"
                              {yyval=yyvsp[0];}
#line 2673 "y.tab.c"
    break;

  case 171: /* constant_expression: assignment_expression  */
#line 254 "05.y"
                                            {yyval=yyvsp[0];}
#line 2679 "y.tab.c"
    break;


#line 2683 "y.tab.c"

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

#line 256 "05.y"

extern int syntax_err;
extern A_NODE *root;

void main() { 
	initialize();
	//yyparse();
	if (syntax_err) exit(1);
	print_ast(root);
	printf("success!\n");
	exit(0);
}
extern char *yytext;
int yyerror(char *s) { printf("%s near %s\n", s, yytext); exit(1); }
int yywrap() { return (1); }
