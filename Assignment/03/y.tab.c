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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_AUTO_SYM = 4,                   /* AUTO_SYM  */
  YYSYMBOL_BREAK_SYM = 5,                  /* BREAK_SYM  */
  YYSYMBOL_CASE_SYM = 6,                   /* CASE_SYM  */
  YYSYMBOL_CONTINUE_SYM = 7,               /* CONTINUE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 8,                /* DEFAULT_SYM  */
  YYSYMBOL_DO_SYM = 9,                     /* DO_SYM  */
  YYSYMBOL_ELSE_SYM = 10,                  /* ELSE_SYM  */
  YYSYMBOL_ENUM_SYM = 11,                  /* ENUM_SYM  */
  YYSYMBOL_FOR_SYM = 12,                   /* FOR_SYM  */
  YYSYMBOL_IF_SYM = 13,                    /* IF_SYM  */
  YYSYMBOL_RETURN_SYM = 14,                /* RETURN_SYM  */
  YYSYMBOL_SIZEOF_SYM = 15,                /* SIZEOF_SYM  */
  YYSYMBOL_STATIC_SYM = 16,                /* STATIC_SYM  */
  YYSYMBOL_STRUCT_SYM = 17,                /* STRUCT_SYM  */
  YYSYMBOL_SWITCH_SYM = 18,                /* SWITCH_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 19,               /* TYPEDEF_SYM  */
  YYSYMBOL_UNION_SYM = 20,                 /* UNION_SYM  */
  YYSYMBOL_WHILE_SYM = 21,                 /* WHILE_SYM  */
  YYSYMBOL_GOTO_SYM = 22,                  /* GOTO_SYM  */
  YYSYMBOL_PLUSPLUS = 23,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 24,                /* MINUSMINUS  */
  YYSYMBOL_ARROW = 25,                     /* ARROW  */
  YYSYMBOL_LSS = 26,                       /* LSS  */
  YYSYMBOL_GTR = 27,                       /* GTR  */
  YYSYMBOL_LEQ = 28,                       /* LEQ  */
  YYSYMBOL_GEQ = 29,                       /* GEQ  */
  YYSYMBOL_EQL = 30,                       /* EQL  */
  YYSYMBOL_NEQ = 31,                       /* NEQ  */
  YYSYMBOL_AMPAMP = 32,                    /* AMPAMP  */
  YYSYMBOL_BARBAR = 33,                    /* BARBAR  */
  YYSYMBOL_LSH = 34,                       /* LSH  */
  YYSYMBOL_RSH = 35,                       /* RSH  */
  YYSYMBOL_DOTDOTDOT = 36,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 37,                        /* LP  */
  YYSYMBOL_RP = 38,                        /* RP  */
  YYSYMBOL_LB = 39,                        /* LB  */
  YYSYMBOL_RB = 40,                        /* RB  */
  YYSYMBOL_LR = 41,                        /* LR  */
  YYSYMBOL_RR = 42,                        /* RR  */
  YYSYMBOL_COLON = 43,                     /* COLON  */
  YYSYMBOL_PERIOD = 44,                    /* PERIOD  */
  YYSYMBOL_COMMA = 45,                     /* COMMA  */
  YYSYMBOL_EXCL = 46,                      /* EXCL  */
  YYSYMBOL_STAR = 47,                      /* STAR  */
  YYSYMBOL_SLASH = 48,                     /* SLASH  */
  YYSYMBOL_PERCENT = 49,                   /* PERCENT  */
  YYSYMBOL_AMP = 50,                       /* AMP  */
  YYSYMBOL_SEMICOLON = 51,                 /* SEMICOLON  */
  YYSYMBOL_PLUS = 52,                      /* PLUS  */
  YYSYMBOL_MINUS = 53,                     /* MINUS  */
  YYSYMBOL_ASSIGN = 54,                    /* ASSIGN  */
  YYSYMBOL_NOT = 55,                       /* NOT  */
  YYSYMBOL_XOR = 56,                       /* XOR  */
  YYSYMBOL_BAR = 57,                       /* BAR  */
  YYSYMBOL_QUESTION = 58,                  /* QUESTION  */
  YYSYMBOL_INTEGER_CONSTANT = 59,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOAT_CONSTANT = 60,            /* FLOAT_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 61,            /* STRING_LITERAL  */
  YYSYMBOL_CHARACTER_CONSTANT = 62,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_CONST_SYM = 63,                 /* CONST_SYM  */
  YYSYMBOL_INTEGER_SYM = 64,               /* INTEGER_SYM  */
  YYSYMBOL_FLOAT_SYM = 65,                 /* FLOAT_SYM  */
  YYSYMBOL_VOID_SYM = 66,                  /* VOID_SYM  */
  YYSYMBOL_CHARACTER_SYM = 67,             /* CHARACTER_SYM  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_program = 69,                   /* program  */
  YYSYMBOL_translation_unit = 70,          /* translation_unit  */
  YYSYMBOL_external_declaration = 71,      /* external_declaration  */
  YYSYMBOL_function_definition = 72,       /* function_definition  */
  YYSYMBOL_declaration = 73,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 74,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 75,   /* storage_class_specifier  */
  YYSYMBOL_type_qualifier = 76,            /* type_qualifier  */
  YYSYMBOL_init_declarator_list = 77,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 78,           /* init_declarator  */
  YYSYMBOL_type_specifier = 79,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 80,          /* struct_specifier  */
  YYSYMBOL_struct_or_union = 81,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 82,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 83,        /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 84,  /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 85,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 86,         /* struct_declarator  */
  YYSYMBOL_declarator = 87,                /* declarator  */
  YYSYMBOL_enum_specifier = 88,            /* enum_specifier  */
  YYSYMBOL_enumerator_list = 89,           /* enumerator_list  */
  YYSYMBOL_enumerator = 90,                /* enumerator  */
  YYSYMBOL_type_identifier = 91,           /* type_identifier  */
  YYSYMBOL_pointer = 92,                   /* pointer  */
  YYSYMBOL_direct_declarator = 93,         /* direct_declarator  */
  YYSYMBOL_constant_expression_opt = 94,   /* constant_expression_opt  */
  YYSYMBOL_parameter_type_list_opt = 95,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 96,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 97,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 98,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 99,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 100,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 101, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 102,              /* initializer  */
  YYSYMBOL_initializer_list = 103,         /* initializer_list  */
  YYSYMBOL_statement = 104,                /* statement  */
  YYSYMBOL_labeled_statement = 105,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 106,       /* compound_statement  */
  YYSYMBOL_declaration_list = 107,         /* declaration_list  */
  YYSYMBOL_statement_list = 108,           /* statement_list  */
  YYSYMBOL_expression_statement = 109,     /* expression_statement  */
  YYSYMBOL_selection_statement = 110,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 111,      /* iteration_statement  */
  YYSYMBOL_expression_opt = 112,           /* expression_opt  */
  YYSYMBOL_jump_statement = 113,           /* jump_statement  */
  YYSYMBOL_primary_expression = 114,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 115,       /* postfix_expression  */
  YYSYMBOL_arg_expression_list_opt = 116,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 117,      /* arg_expression_list  */
  YYSYMBOL_unary_expression = 118,         /* unary_expression  */
  YYSYMBOL_cast_expression = 119,          /* cast_expression  */
  YYSYMBOL_type_name = 120,                /* type_name  */
  YYSYMBOL_multiplicative_expression = 121, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 122,      /* additive_expression  */
  YYSYMBOL_shift_expression = 123,         /* shift_expression  */
  YYSYMBOL_relational_expression = 124,    /* relational_expression  */
  YYSYMBOL_equality_expression = 125,      /* equality_expression  */
  YYSYMBOL_AND_expression = 126,           /* AND_expression  */
  YYSYMBOL_exclusive_OR_expression = 127,  /* exclusive_OR_expression  */
  YYSYMBOL_inclusive_OR_expression = 128,  /* inclusive_OR_expression  */
  YYSYMBOL_logical_AND_expression = 129,   /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 130,    /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 131,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 132,    /* assignment_expression  */
  YYSYMBOL_comma_expression = 133,         /* comma_expression  */
  YYSYMBOL_expression = 134,               /* expression  */
  YYSYMBOL_constant_expression = 135       /* constant_expression  */
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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   898

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  322

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   322


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,     7,     7,     9,    10,    12,    13,    16,    17,    19,
      21,    22,    23,    24,    25,    26,    28,    28,    28,    30,
      32,    33,    35,    36,    38,    39,    40,    43,    44,    45,
      47,    48,    50,    51,    53,    55,    56,    57,    58,    60,
      61,    63,    64,    65,    65,    68,    69,    70,    72,    73,
      75,    76,    78,    78,    78,    78,    81,    82,    84,    85,
      88,    89,    90,    91,    93,    94,    96,    97,   100,   101,
     103,   104,   106,   107,   109,   110,   112,   113,   114,   116,
     117,   118,   119,   120,   122,   123,   124,   126,   127,   130,
     131,   132,   133,   134,   135,   137,   138,   139,   142,   144,
     145,   147,   148,   151,   152,   153,   154,   155,   157,   158,
     159,   161,   162,   164,   165,   166,   167,   170,   171,   172,
     173,   174,   175,   177,   178,   179,   180,   181,   182,   183,
     185,   186,   188,   189,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   204,   205,   207,   208,   211,
     212,   213,   214,   216,   217,   218,   220,   221,   222,   225,
     226,   227,   228,   229,   231,   232,   233,   236,   237,   239,
     240,   242,   243,   245,   246,   248,   249,   251,   252,   255,
     256,   258,   259,   261,   263
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
  "AUTO_SYM", "BREAK_SYM", "CASE_SYM", "CONTINUE_SYM", "DEFAULT_SYM",
  "DO_SYM", "ELSE_SYM", "ENUM_SYM", "FOR_SYM", "IF_SYM", "RETURN_SYM",
  "SIZEOF_SYM", "STATIC_SYM", "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM",
  "UNION_SYM", "WHILE_SYM", "GOTO_SYM", "PLUSPLUS", "MINUSMINUS", "ARROW",
  "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "AMPAMP", "BARBAR", "LSH",
  "RSH", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR", "COLON",
  "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT", "AMP",
  "SEMICOLON", "PLUS", "MINUS", "ASSIGN", "NOT", "XOR", "BAR", "QUESTION",
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL",
  "CHARACTER_CONSTANT", "CONST_SYM", "INTEGER_SYM", "FLOAT_SYM",
  "VOID_SYM", "CHARACTER_SYM", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "declaration",
  "declaration_specifiers", "storage_class_specifier", "type_qualifier",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "declarator",
  "enum_specifier", "enumerator_list", "enumerator", "type_identifier",
  "pointer", "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
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

#define YYPACT_NINF (-205)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     351,   348,  -205,    29,   737,  -205,  -205,  -205,  -205,   770,
     770,   351,   803,   470,   803,   803,   803,   803,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,    27,   351,  -205,
    -205,  -205,   836,   480,   480,   480,  -205,    33,    12,  -205,
    -205,    25,    30,  -205,   137,    17,  -205,    65,    -6,   101,
     142,   110,    26,    46,    81,   131,   -14,  -205,  -205,  -205,
     134,   139,  -205,   416,   803,  -205,   803,  -205,  -205,    52,
     140,   149,  -205,   127,   161,   416,  -205,  -205,   155,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,    -3,  -205,    -4,  -205,
    -205,  -205,   169,   475,  -205,  -205,  -205,   836,    30,   480,
     803,  -205,  -205,   208,   803,   803,   209,   803,   803,   803,
     803,   803,   803,   803,   803,   803,   803,   803,   803,   803,
     803,   803,   803,   803,   803,   803,   803,   139,   160,     9,
    -205,   177,  -205,   216,   803,   153,    58,  -205,    67,  -205,
     803,   803,  -205,  -205,   836,  -205,   671,  -205,   475,   475,
     475,   253,  -205,   836,   480,   704,   186,  -205,   180,  -205,
     188,  -205,  -205,   191,   181,  -205,   194,  -205,  -205,  -205,
    -205,  -205,    65,    65,    -6,    -6,   101,   101,   101,   101,
     142,   142,   110,    26,    46,    81,   131,   195,    43,   803,
    -205,   139,  -205,   193,   201,   202,    67,   480,   803,  -205,
    -205,  -205,   187,   671,  -205,  -205,   317,  -205,  -205,  -205,
    -205,    -2,  -205,  -205,  -205,  -205,   836,   545,   286,  -205,
      38,  -205,  -205,  -205,   438,  -205,  -205,   803,  -205,   803,
    -205,  -205,  -205,  -205,  -205,  -205,   207,   206,  -205,    51,
    -205,   836,  -205,   204,   198,   803,   199,   211,   605,   214,
     215,   803,   219,   220,   255,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,   210,   704,   286,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,   638,  -205,   605,  -205,   217,  -205,
     605,   238,   803,   803,   223,  -205,   803,   803,   227,  -205,
    -205,  -205,  -205,  -205,   605,  -205,   225,   233,   228,  -205,
     247,   248,  -205,  -205,   803,   803,   605,   605,   605,   249,
     237,   281,  -205,  -205,   241,   803,   605,  -205,   258,  -205,
     605,  -205
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   117,    16,     0,     0,    17,    30,    18,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     121,   120,    19,    52,    53,    54,    55,     0,     2,     3,
       5,     6,     0,    11,    12,    10,    24,     0,     0,    25,
      26,     0,    57,   123,   134,   145,   149,   153,   156,   159,
     164,   167,   169,   171,   173,   175,   177,   179,   184,    44,
      47,     0,   117,     0,     0,   143,     0,   135,   136,   147,
       0,     0,   181,   183,     0,     0,   145,   139,    58,   138,
     137,   142,   140,   141,     1,     4,     0,    20,    22,    14,
      15,    13,    29,     0,    99,     8,    60,     0,    56,    66,
      64,   128,   129,     0,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      48,     0,   181,    66,    64,     0,    76,   148,    77,    61,
       0,     0,   122,    59,     0,     9,     0,     7,     0,    36,
      35,     0,    32,    43,   101,    74,     0,    67,    68,    70,
       0,    65,   127,     0,   131,   132,     0,   126,   180,   150,
     151,   152,   154,   155,   157,   158,   160,   161,   162,   163,
     165,   166,   168,   170,   172,   174,   176,     0,     0,     0,
      46,     0,   144,     0,     0,     0,    78,    66,    64,   146,
     182,    21,    22,     0,    23,    84,     0,    38,    37,    28,
      33,     0,    39,    41,    42,   100,     0,     0,    66,    72,
      76,    73,    75,    63,     0,    62,   125,     0,   124,     0,
      45,    51,    49,    81,    79,    80,     0,     0,    87,     0,
      27,    43,    34,   117,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,     0,    98,   103,   102,    89,    90,
      91,    92,    93,    94,     0,    74,    66,    69,    71,   133,
     178,    83,    82,    85,     0,    40,     0,   115,     0,   114,
       0,     0,   111,     0,     0,   112,     0,     0,     0,   104,
      75,    86,    88,    97,     0,    96,     0,     0,     0,   113,
       0,     0,   116,    95,     0,   111,     0,     0,     0,     0,
       0,   105,   107,   108,     0,   111,     0,   109,     0,   106,
       0,   110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,  -205,   270,  -205,   111,     5,  -205,    16,  -205,
     156,   -67,  -205,  -205,   151,  -140,    39,  -205,    66,     2,
    -205,   184,   117,  -205,   -68,   -35,  -125,   -92,  -205,  -205,
      88,  -205,   -65,  -128,  -188,  -205,  -103,  -205,   -25,  -205,
    -205,  -205,  -205,  -205,  -204,  -205,  -205,  -205,  -205,  -205,
       8,    44,   250,    68,    69,    78,    89,   200,   192,   203,
     205,   190,  -205,    93,     3,  -205,   -11,   -55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    27,    28,    29,    30,    31,   155,    33,    34,    86,
      87,    35,    36,    37,   151,   152,   153,   211,   212,    70,
      39,   129,   130,    40,    41,    42,   160,   193,   157,   158,
     159,   221,   194,   138,   204,   239,   257,   258,   259,   154,
     217,   260,   261,   262,   284,   263,    43,    44,   163,   164,
      45,    46,    71,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   132,    73,   264,    59
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,   136,    38,    58,   137,    32,    98,   156,   196,   195,
     143,   210,    65,    95,    72,   238,    69,    67,    68,   125,
      76,    76,    76,    76,    76,    76,   150,    84,    96,    78,
      38,    58,    60,    32,    88,    58,    92,    94,    89,    90,
      91,    96,   144,   241,   126,   161,   111,   112,   145,   242,
     146,   190,    74,    94,   191,    74,    77,    79,    80,    81,
      82,    83,    97,   147,    74,   136,   210,    99,    69,   100,
      61,   107,    76,   237,    93,   266,   121,   134,   297,   161,
      69,   150,   150,   150,   150,   230,   292,   220,   191,   133,
     222,   134,   196,   273,   166,   133,   274,   134,   214,   135,
      58,   310,   122,    58,   197,   236,   198,   165,    79,   149,
     168,   318,   108,   109,   110,   187,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,   231,   113,   114,    58,   123,   150,
     119,   120,   128,   161,   200,   281,   202,    58,    76,   205,
     220,    78,   169,   170,   171,   213,    58,   219,    58,   216,
     101,   102,   103,   124,   149,   149,   149,   149,   115,   116,
     117,   118,   141,   293,   104,   127,   105,   295,   139,   172,
     173,   106,   174,   175,   199,    98,   214,   140,   207,   208,
     278,   303,    58,   176,   177,   178,   179,   220,   220,   142,
     290,    58,   135,   311,   312,   313,   205,    74,   180,   181,
     148,   162,   167,   319,   189,   192,    22,   321,   202,    58,
       2,    72,   149,   265,   223,   224,   227,     3,   225,   226,
     269,   233,     5,     6,   228,     7,     8,    76,   229,   234,
     285,   146,   235,   213,    58,   271,   272,   276,    58,   277,
     279,   282,   283,   133,   280,   134,   286,   287,   288,   296,
     294,   289,   304,   135,     3,   215,   306,   219,    58,    58,
       6,   285,   298,     8,   299,   300,   301,   205,   302,    22,
      23,    24,    25,    26,   305,   307,   308,   314,   315,     1,
       2,   316,   317,   309,   285,   209,   320,     3,    85,   206,
     201,     4,     5,     6,   285,     7,     8,   275,   232,     9,
      10,   188,   268,   131,   183,   186,    22,    23,    24,    25,
      26,   182,   270,   218,     0,   134,   184,     0,     3,   185,
       0,     0,    12,    13,     6,     0,    14,     8,    15,    16,
       0,    17,     0,     0,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     1,     2,     0,     0,     0,   240,
       0,     0,     3,     0,     0,     0,     4,     5,     6,     0,
       7,     8,     0,     0,     9,    10,     0,     0,     0,     0,
      22,    23,    24,    25,    26,   -60,   -60,   -60,    11,   -60,
       0,     0,     0,   -60,     0,     0,     0,    12,    13,   -60,
       0,    14,   -60,    15,    16,     0,    17,     0,     0,     0,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    62,
       2,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     4,     5,     6,     0,     7,     8,     0,     0,     9,
      10,     0,     2,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,    75,     5,     6,     0,     7,     8,     0,
       0,     0,    12,    64,     0,     0,    14,     0,    15,    16,
       0,    17,     0,    62,   267,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     2,     4,     3,     0,     0,     0,
       0,     3,     6,     9,    10,     8,     5,     6,     0,     7,
       8,    22,    23,    24,    25,    26,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    64,     0,     0,
      14,     0,    15,    16,     0,    17,     0,     0,     0,    18,
      19,    20,    21,    22,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    22,    23,    24,    25,    26,   243,     0,
     244,   245,   246,   247,   248,     0,     0,   249,   250,   251,
       4,     0,     0,   252,     0,     0,   253,   254,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,     0,    94,   255,     0,     0,
       0,    12,    64,     0,     0,    14,   256,    15,    16,     0,
      17,     0,     0,     0,    18,    19,    20,    21,   243,     0,
     244,   245,   246,   247,   248,     0,     0,   249,   250,   251,
       4,     0,     0,   252,     0,     0,   253,   254,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    75,     0,     0,     0,    94,     0,     0,     0,
       0,    12,    64,     4,     0,    14,   256,    15,    16,     0,
      17,     9,    10,     0,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,    62,    75,     0,     0,     0,   203,
     291,     0,     0,     0,    12,    64,     4,     0,    14,     0,
      15,    16,     0,    17,     9,    10,     0,    18,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     1,    75,     0,
       0,     0,   203,     0,     0,     0,     0,    12,    64,     4,
       0,    14,     0,    15,    16,     0,    17,     9,    10,     0,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
      62,   218,     0,   134,     0,     0,     0,     0,     0,     0,
      12,    13,     4,     0,    14,     0,    15,    16,     0,    17,
       9,    10,     0,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    64,     4,     0,    14,     0,    15,
      16,     0,    17,     9,    10,     0,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,    62,    66,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    64,     4,     0,
      14,     0,    15,    16,     0,    17,     9,    10,     0,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     1,
      75,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      64,     4,     0,    14,     0,    15,    16,     0,    17,     9,
      10,     0,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,    14,     0,    15,    16,
       0,    17,     0,     0,     0,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
      11,    69,     0,     0,    69,     0,    41,    99,   136,   134,
      78,   151,     4,    38,    11,   203,    11,     9,    10,    33,
      12,    13,    14,    15,    16,    17,    93,     0,     3,    13,
      28,    28,     3,    28,    32,    32,     3,    41,    33,    34,
      35,     3,    45,    45,    58,   100,    52,    53,    51,    51,
      54,    42,    63,    41,    45,    66,    12,    13,    14,    15,
      16,    17,    37,    88,    75,   133,   206,    37,    63,    39,
      41,    54,    64,   198,    41,    37,    50,    39,   282,   134,
      75,   148,   149,   150,   151,    42,   274,   155,    45,    37,
     155,    39,   220,    42,   105,    37,    45,    39,   153,    47,
      97,   305,    56,   100,    37,   197,    39,   104,    64,    93,
     107,   315,    47,    48,    49,   126,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   189,    34,    35,   134,    57,   206,
      30,    31,     3,   198,   141,   248,   144,   144,   140,   146,
     218,   135,   108,   109,   110,   153,   153,   155,   155,   154,
      23,    24,    25,    32,   148,   149,   150,   151,    26,    27,
      28,    29,    45,   276,    37,    41,    39,   280,    38,   111,
     112,    44,   113,   114,   140,   220,   241,    38,   149,   150,
     245,   294,   189,   115,   116,   117,   118,   265,   266,    38,
     265,   198,    47,   306,   307,   308,   203,   218,   119,   120,
      41,     3,     3,   316,    54,    38,    63,   320,   216,   216,
       4,   218,   206,   218,    38,    45,    45,    11,    40,    38,
     227,    38,    16,    17,    40,    19,    20,   229,    43,    38,
     251,    54,    40,   241,   241,    38,    40,    43,   245,    51,
      51,    37,    37,    37,    43,    39,    37,    37,     3,    21,
      43,    51,    37,    47,    11,   154,    38,   265,   265,   266,
      17,   282,   283,    20,    51,   286,   287,   274,    51,    63,
      64,    65,    66,    67,    51,    38,    38,    38,    51,     3,
       4,    10,    51,   304,   305,    42,    38,    11,    28,   148,
     144,    15,    16,    17,   315,    19,    20,   241,   191,    23,
      24,   127,   224,    63,   122,   125,    63,    64,    65,    66,
      67,   121,   229,    37,    -1,    39,   123,    -1,    11,   124,
      -1,    -1,    46,    47,    17,    -1,    50,    20,    52,    53,
      -1,    55,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     3,     4,    -1,    -1,    -1,    42,
      -1,    -1,    11,    -1,    -1,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    37,    38,    39,    37,    41,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    46,    47,    51,
      -1,    50,    54,    52,    53,    -1,    55,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    23,
      24,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    37,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    46,    47,    -1,    -1,    50,    -1,    52,    53,
      -1,    55,    -1,     3,    36,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     4,    15,    11,    -1,    -1,    -1,
      -1,    11,    17,    23,    24,    20,    16,    17,    -1,    19,
      20,    63,    64,    65,    66,    67,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      50,    -1,    52,    53,    -1,    55,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    63,    64,    65,    66,    67,     3,    -1,
       5,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    47,    -1,    -1,    50,    51,    52,    53,    -1,
      55,    -1,    -1,    -1,    59,    60,    61,    62,     3,    -1,
       5,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    -1,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    46,    47,    15,    -1,    50,    51,    52,    53,    -1,
      55,    23,    24,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    37,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    46,    47,    15,    -1,    50,    -1,
      52,    53,    -1,    55,    23,    24,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,     3,    37,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,    15,
      -1,    50,    -1,    52,    53,    -1,    55,    23,    24,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    15,    -1,    50,    -1,    52,    53,    -1,    55,
      23,    24,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    15,    -1,    50,    -1,    52,
      53,    -1,    55,    23,    24,    -1,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    15,    -1,
      50,    -1,    52,    53,    -1,    55,    23,    24,    -1,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    15,    -1,    50,    -1,    52,    53,    -1,    55,    23,
      24,    -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    50,    -1,    52,    53,
      -1,    55,    -1,    -1,    -1,    59,    60,    61,    62
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    11,    15,    16,    17,    19,    20,    23,
      24,    37,    46,    47,    50,    52,    53,    55,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    69,    70,    71,
      72,    73,    74,    75,    76,    79,    80,    81,    87,    88,
      91,    92,    93,   114,   115,   118,   119,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   135,
       3,    41,     3,    37,    47,   118,    37,   118,   118,    74,
      87,   120,   132,   133,   134,    37,   118,   119,    76,   119,
     119,   119,   119,   119,     0,    71,    77,    78,    87,    74,
      74,    74,     3,    41,    41,   106,     3,    37,    93,    37,
      39,    23,    24,    25,    37,    39,    44,    54,    47,    48,
      49,    52,    53,    34,    35,    26,    27,    28,    29,    30,
      31,    50,    56,    57,    32,    33,    58,    41,     3,    89,
      90,   120,   132,    37,    39,    47,    92,   100,   101,    38,
      38,    45,    38,    92,    45,    51,    54,   106,    41,    76,
      79,    82,    83,    84,   107,    74,    95,    96,    97,    98,
      94,   135,     3,   116,   117,   132,   134,     3,   132,   119,
     119,   119,   121,   121,   122,   122,   123,   123,   123,   123,
     124,   124,   125,   126,   127,   128,   129,   134,    89,    54,
      42,    45,    38,    95,   100,    94,   101,    37,    39,   119,
     132,    78,    87,    41,   102,   132,    82,    84,    84,    42,
      83,    85,    86,    87,   135,    73,    74,   108,    37,    87,
      92,    99,   100,    38,    45,    40,    38,    45,    40,    43,
      42,   135,    90,    38,    38,    40,    95,    94,   102,   103,
      42,    45,    51,     3,     5,     6,     7,     8,     9,    12,
      13,    14,    18,    21,    22,    42,    51,   104,   105,   106,
     109,   110,   111,   113,   134,    74,    37,    36,    98,   132,
     131,    38,    40,    42,    45,    86,    43,    51,   135,    51,
      43,   104,    37,    37,   112,   134,    37,    37,     3,    51,
     100,    42,   102,   104,    43,   104,    21,   112,   134,    51,
     134,   134,    51,   104,    37,    51,    38,    38,    38,   134,
     112,   104,   104,   104,    38,    51,    10,    51,   112,   104,
      38,   104
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    70,    71,    71,    72,    72,    73,
      74,    74,    74,    74,    74,    74,    75,    75,    75,    76,
      77,    77,    78,    78,    79,    79,    79,    80,    80,    80,
      81,    81,    82,    82,    83,    84,    84,    84,    84,    85,
      85,    86,    86,    86,    87,    88,    88,    88,    89,    89,
      90,    90,    91,    91,    91,    91,    87,    87,    92,    92,
      93,    93,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   100,   101,
     101,   101,   101,   101,   102,   102,   102,   103,   103,   104,
     104,   104,   104,   104,   104,   105,   105,   105,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   110,   111,   111,
     111,   112,   112,   113,   113,   113,   113,   114,   114,   114,
     114,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   121,   122,   122,   122,   123,   123,   123,   124,
     124,   124,   124,   124,   125,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   135
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     3,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     1,     1,     2,     2,     1,
       3,     1,     1,     0,     1,     5,     4,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     2,     3,
       1,     3,     4,     4,     0,     1,     0,     1,     1,     3,
       1,     3,     2,     2,     0,     1,     1,     1,     2,     3,
       3,     3,     4,     4,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     4,     3,     3,     4,     0,
       2,     0,     2,     1,     2,     5,     7,     5,     5,     7,
       9,     0,     1,     3,     2,     2,     3,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     3,     3,     2,     2,
       0,     1,     1,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     1,     4,     1,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     3,     1,     1
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

#line 1729 "y.tab.c"

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

#line 265 "03.y"

#include <stdio.h>
#include <stdlib.h>

void main() { yyparse(); printf("success\n"); }
extern char *yytext;
int yyerror(char *s) { printf("%s near %s\n", s, yytext); exit(1); }
int yywrap() { return (1); }
