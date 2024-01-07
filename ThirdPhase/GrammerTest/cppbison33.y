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

#ifndef YY_YY_CPPBISON33_Y_INCLUDED
# define YY_YY_CPPBISON33_Y_INCLUDED
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
    Key_return = 258,              /* Key_return  */
    Key_break = 259,               /* Key_break  */
    Key_continue = 260,            /* Key_continue  */
    Key_else = 261,                /* Key_else  */
    Key_while = 262,               /* Key_while  */
    Key_if = 263,                  /* Key_if  */
    Key_goto = 264,                /* Key_goto  */
    Key_dot = 265,                 /* Key_dot  */
    Key_SEMICOL = 266,             /* Key_SEMICOL  */
    Key_comma = 267,               /* Key_comma  */
    Key_colon = 268,               /* Key_colon  */
    Up_not = 269,                  /* Up_not  */
    Up_LogicalNot = 270,           /* Up_LogicalNot  */
    Up_and = 271,                  /* Up_and  */
    Up_xor = 272,                  /* Up_xor  */
    Up_or = 273,                   /* Up_or  */
    Op_Assign = 274,               /* Op_Assign  */
    Op_Minus = 275,                /* Op_Minus  */
    Op_Mult = 276,                 /* Op_Mult  */
    Op_Div = 277,                  /* Op_Div  */
    Op_LessThenOrEqual = 278,      /* Op_LessThenOrEqual  */
    Op_Equal = 279,                /* Op_Equal  */
    Op_NotEqual = 280,             /* Op_NotEqual  */
    Op_GreaterThen = 281,          /* Op_GreaterThen  */
    Op_LessThen = 282,             /* Op_LessThen  */
    Op_GreaterThenOrEqual = 283,   /* Op_GreaterThenOrEqual  */
    Op_Plus = 284,                 /* Op_Plus  */
    Op_and = 285,                  /* Op_and  */
    Op_Or = 286,                   /* Op_Or  */
    Close_Br = 287,                /* Close_Br  */
    Close_sqBr = 288,              /* Close_sqBr  */
    Open_sqBr = 289,               /* Open_sqBr  */
    Open_Br = 290,                 /* Open_Br  */
    ClsP = 291,                    /* ClsP  */
    OpnP = 292,                    /* OpnP  */
    Key_string = 293,              /* Key_string  */
    Key_const = 294,               /* Key_const  */
    Key_struct = 295,              /* Key_struct  */
    Key_double = 296,              /* Key_double  */
    Key_int = 297,                 /* Key_int  */
    Key_char = 298,                /* Key_char  */
    Key_void = 299,                /* Key_void  */
    Key_typedef = 300,             /* Key_typedef  */
    Key_static = 301,              /* Key_static  */
    Key_union = 302,               /* Key_union  */
    Key_auto = 303,                /* Key_auto  */
    Key_register = 304,            /* Key_register  */
    Key_extern = 305,              /* Key_extern  */
    Key_volatile = 306,            /* Key_volatile  */
    char_chr = 307,                /* char_chr  */
    double_num = 308,              /* double_num  */
    integer_num = 309,             /* integer_num  */
    identifier = 310,              /* identifier  */
    string_str = 311               /* string_str  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CPPBISON33_Y_INCLUDED  */
