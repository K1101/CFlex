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
#line 1 "./cppBison5.y"

    	#include <stdio.h>
    	#include <stdlib.h>
   	#include <string.h>
	#include "lex.yy.h"
	#line 42 "your_grammar.y"
    extern FILE *yyin;
    extern int yylex();

#line 81 "cppBison5.tab.c"

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

#include "cppbison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Key_return = 3,                 /* Key_return  */
  YYSYMBOL_Key_break = 4,                  /* Key_break  */
  YYSYMBOL_Key_continue = 5,               /* Key_continue  */
  YYSYMBOL_Key_else = 6,                   /* Key_else  */
  YYSYMBOL_Key_while = 7,                  /* Key_while  */
  YYSYMBOL_Key_if = 8,                     /* Key_if  */
  YYSYMBOL_Key_goto = 9,                   /* Key_goto  */
  YYSYMBOL_Key_dot = 10,                   /* Key_dot  */
  YYSYMBOL_Key_SEMICOL = 11,               /* Key_SEMICOL  */
  YYSYMBOL_Key_comma = 12,                 /* Key_comma  */
  YYSYMBOL_Key_colon = 13,                 /* Key_colon  */
  YYSYMBOL_Up_not = 14,                    /* Up_not  */
  YYSYMBOL_Up_LogicalNot = 15,             /* Up_LogicalNot  */
  YYSYMBOL_Up_and = 16,                    /* Up_and  */
  YYSYMBOL_Up_xor = 17,                    /* Up_xor  */
  YYSYMBOL_Up_or = 18,                     /* Up_or  */
  YYSYMBOL_Op_Assign = 19,                 /* Op_Assign  */
  YYSYMBOL_Op_Minus = 20,                  /* Op_Minus  */
  YYSYMBOL_Op_Mult = 21,                   /* Op_Mult  */
  YYSYMBOL_Op_Div = 22,                    /* Op_Div  */
  YYSYMBOL_Op_LessThenOrEqual = 23,        /* Op_LessThenOrEqual  */
  YYSYMBOL_Op_Equal = 24,                  /* Op_Equal  */
  YYSYMBOL_Op_NotEqual = 25,               /* Op_NotEqual  */
  YYSYMBOL_Op_GreaterThen = 26,            /* Op_GreaterThen  */
  YYSYMBOL_Op_LessThen = 27,               /* Op_LessThen  */
  YYSYMBOL_Op_GreaterThenOrEqual = 28,     /* Op_GreaterThenOrEqual  */
  YYSYMBOL_Op_Plus = 29,                   /* Op_Plus  */
  YYSYMBOL_Op_and = 30,                    /* Op_and  */
  YYSYMBOL_Op_Or = 31,                     /* Op_Or  */
  YYSYMBOL_Close_Br = 32,                  /* Close_Br  */
  YYSYMBOL_Close_sqBr = 33,                /* Close_sqBr  */
  YYSYMBOL_Open_sqBr = 34,                 /* Open_sqBr  */
  YYSYMBOL_Open_Br = 35,                   /* Open_Br  */
  YYSYMBOL_ClsP = 36,                      /* ClsP  */
  YYSYMBOL_OpnP = 37,                      /* OpnP  */
  YYSYMBOL_Key_string = 38,                /* Key_string  */
  YYSYMBOL_Key_const = 39,                 /* Key_const  */
  YYSYMBOL_Key_struct = 40,                /* Key_struct  */
  YYSYMBOL_Key_double = 41,                /* Key_double  */
  YYSYMBOL_Key_int = 42,                   /* Key_int  */
  YYSYMBOL_Key_char = 43,                  /* Key_char  */
  YYSYMBOL_Key_void = 44,                  /* Key_void  */
  YYSYMBOL_Key_typedef = 45,               /* Key_typedef  */
  YYSYMBOL_Key_static = 46,                /* Key_static  */
  YYSYMBOL_Key_union = 47,                 /* Key_union  */
  YYSYMBOL_Key_auto = 48,                  /* Key_auto  */
  YYSYMBOL_Key_register = 49,              /* Key_register  */
  YYSYMBOL_Key_extern = 50,                /* Key_extern  */
  YYSYMBOL_Key_volatile = 51,              /* Key_volatile  */
  YYSYMBOL_char_chr = 52,                  /* char_chr  */
  YYSYMBOL_double_num = 53,                /* double_num  */
  YYSYMBOL_integer_num = 54,               /* integer_num  */
  YYSYMBOL_identifier = 55,                /* identifier  */
  YYSYMBOL_string_str = 56,                /* string_str  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_commond = 59,                   /* commond  */
  YYSYMBOL_func = 60,                      /* func  */
  YYSYMBOL_declaration_specifier_crt = 61, /* declaration_specifier_crt  */
  YYSYMBOL_declaration_specifier_atlist = 62, /* declaration_specifier_atlist  */
  YYSYMBOL_declaration_specifier = 63,     /* declaration_specifier  */
  YYSYMBOL_storage_class_specifier = 64,   /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 65,            /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 66, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 67,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_atlist = 68, /* struct_declaration_atlist  */
  YYSYMBOL_struct_declaration = 69,        /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_atlist = 70, /* specifier_qualifier_atlist  */
  YYSYMBOL_specifier_qualifier_crt = 71,   /* specifier_qualifier_crt  */
  YYSYMBOL_specifier_qualifier = 72,       /* specifier_qualifier  */
  YYSYMBOL_struct_declarator_list = 73,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 74,         /* struct_declarator  */
  YYSYMBOL_type_qualifier = 75,            /* type_qualifier  */
  YYSYMBOL_direct_declarator = 76,         /* direct_declarator  */
  YYSYMBOL_constant_expression_optional = 77, /* constant_expression_optional  */
  YYSYMBOL_constant_expression = 78,       /* constant_expression  */
  YYSYMBOL_logical_or_expression = 79,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 80,    /* logical_and_expression  */
  YYSYMBOL_inclusive_or_expression = 81,   /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 82,   /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 83,            /* and_expression  */
  YYSYMBOL_equality_expression = 84,       /* equality_expression  */
  YYSYMBOL_relational_expression = 85,     /* relational_expression  */
  YYSYMBOL_additive_expression = 86,       /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 87, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 88,           /* cast_expression  */
  YYSYMBOL_unary_expression = 89,          /* unary_expression  */
  YYSYMBOL_postfix_expression = 90,        /* postfix_expression  */
  YYSYMBOL_primary_expression = 91,        /* primary_expression  */
  YYSYMBOL_constant = 92,                  /* constant  */
  YYSYMBOL_expression_optional = 93,       /* expression_optional  */
  YYSYMBOL_expression = 94,                /* expression  */
  YYSYMBOL_assignment_expression_crt = 95, /* assignment_expression_crt  */
  YYSYMBOL_assignment_expression = 96,     /* assignment_expression  */
  YYSYMBOL_unary_operator = 97,            /* unary_operator  */
  YYSYMBOL_type_name = 98,                 /* type_name  */
  YYSYMBOL_parameter_type_list_optional = 99, /* parameter_type_list_optional  */
  YYSYMBOL_parameter_type_list = 100,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 101,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 102,    /* parameter_declaration  */
  YYSYMBOL_direct_abstract_declarator_optional = 103, /* direct_abstract_declarator_optional  */
  YYSYMBOL_direct_abstract_declarator = 104, /* direct_abstract_declarator  */
  YYSYMBOL_declaration_crt = 105,          /* declaration_crt  */
  YYSYMBOL_declaration = 106,              /* declaration  */
  YYSYMBOL_init_declarator_crt = 107,      /* init_declarator_crt  */
  YYSYMBOL_init_declarator = 108,          /* init_declarator  */
  YYSYMBOL_initializer = 109,              /* initializer  */
  YYSYMBOL_initializer_list = 110,         /* initializer_list  */
  YYSYMBOL_compound_statement = 111,       /* compound_statement  */
  YYSYMBOL_statement_crt = 112,            /* statement_crt  */
  YYSYMBOL_statement = 113,                /* statement  */
  YYSYMBOL_expression_statement = 114,     /* expression_statement  */
  YYSYMBOL_if_statement = 115,             /* if_statement  */
  YYSYMBOL_while_statement = 116,          /* while_statement  */
  YYSYMBOL_jump_statement = 117,           /* jump_statement  */
  YYSYMBOL_identifier_crt = 118            /* identifier_crt  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   422

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

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
       0,    25,    25,    29,    32,    35,    38,    39,    42,    43,
      46,    47,    48,    51,    52,    53,    54,    55,    58,    59,
      60,    61,    62,    65,    67,    68,    71,    72,    76,    77,
      80,    82,    83,    86,    87,    90,    91,    95,    96,    99,
     100,   101,   105,   106,   109,   110,   111,   112,   113,   116,
     117,   120,   122,   123,   126,   127,   130,   131,   134,   135,
     138,   139,   142,   143,   144,   147,   148,   149,   150,   151,
     155,   156,   157,   160,   161,   162,   165,   166,   169,   170,
     173,   174,   175,   176,   178,   179,   180,   181,   184,   185,
     186,   189,   190,   193,   194,   197,   198,   201,   202,   205,
     206,   207,   208,   209,   210,   213,   215,   216,   219,   220,
     223,   224,   227,   228,   229,   232,   233,   236,   237,   238,
     242,   243,   247,   249,   250,   253,   254,   257,   258,   259,
     262,   263,   266,   268,   269,   272,   273,   274,   275,   276,
     279,   281,   282,   285,   287,   288,   289,   290,   293,   294
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
  "\"end of file\"", "error", "\"invalid token\"", "Key_return",
  "Key_break", "Key_continue", "Key_else", "Key_while", "Key_if",
  "Key_goto", "Key_dot", "Key_SEMICOL", "Key_comma", "Key_colon", "Up_not",
  "Up_LogicalNot", "Up_and", "Up_xor", "Up_or", "Op_Assign", "Op_Minus",
  "Op_Mult", "Op_Div", "Op_LessThenOrEqual", "Op_Equal", "Op_NotEqual",
  "Op_GreaterThen", "Op_LessThen", "Op_GreaterThenOrEqual", "Op_Plus",
  "Op_and", "Op_Or", "Close_Br", "Close_sqBr", "Open_sqBr", "Open_Br",
  "ClsP", "OpnP", "Key_string", "Key_const", "Key_struct", "Key_double",
  "Key_int", "Key_char", "Key_void", "Key_typedef", "Key_static",
  "Key_union", "Key_auto", "Key_register", "Key_extern", "Key_volatile",
  "char_chr", "double_num", "integer_num", "identifier", "string_str",
  "$accept", "program", "commond", "func", "declaration_specifier_crt",
  "declaration_specifier_atlist", "declaration_specifier",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_atlist", "struct_declaration",
  "specifier_qualifier_atlist", "specifier_qualifier_crt",
  "specifier_qualifier", "struct_declarator_list", "struct_declarator",
  "type_qualifier", "direct_declarator", "constant_expression_optional",
  "constant_expression", "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "postfix_expression", "primary_expression", "constant",
  "expression_optional", "expression", "assignment_expression_crt",
  "assignment_expression", "unary_operator", "type_name",
  "parameter_type_list_optional", "parameter_type_list", "parameter_list",
  "parameter_declaration", "direct_abstract_declarator_optional",
  "direct_abstract_declarator", "declaration_crt", "declaration",
  "init_declarator_crt", "init_declarator", "initializer",
  "initializer_list", "compound_statement", "statement_crt", "statement",
  "expression_statement", "if_statement", "while_statement",
  "jump_statement", "identifier_crt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-184)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-117)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -184,    22,  -184,  -184,  -184,   371,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,   -16,  -184,   327,  -184,     0,  -184,   371,
    -184,  -184,  -184,    43,  -184,   278,  -184,   371,  -184,   -19,
    -184,  -184,     9,   -19,  -184,  -184,  -184,    56,  -184,  -184,
      15,    62,   107,    66,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,   191,  -184,  -184,  -184,  -184,  -184,  -184,    74,    52,
      91,   102,    97,    49,   103,    50,    96,  -184,  -184,     6,
    -184,  -184,     9,   101,     4,     9,     9,   371,  -184,     9,
     114,   121,   119,   127,    78,  -184,    74,   139,   158,   161,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,   244,   358,  -184,
      20,   140,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     9,     9,     9,     9,     9,     9,   125,     9,  -184,
    -184,  -184,  -184,  -184,   148,  -184,   310,   343,   170,  -184,
      36,   174,  -184,  -184,     9,     9,   175,     9,  -184,     9,
     244,  -184,  -184,   150,  -184,    70,  -184,  -184,     9,    52,
      91,   102,    97,    49,   103,   103,    50,    50,    50,    50,
      96,    96,  -184,  -184,  -184,    14,   287,  -184,    46,   106,
      70,   120,  -184,   170,   371,  -184,  -184,  -184,    45,    54,
    -184,  -184,  -184,  -184,    57,   152,     9,   371,  -184,  -184,
    -184,  -184,  -184,   163,   163,   234,  -184,  -184,   156,   154,
     371,  -184,   185,  -184,  -184,  -184,  -184,   163,  -184
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     6,     1,     3,     4,   120,    42,    26,    21,    20,
      19,    18,    17,    15,    27,    13,    14,    16,    43,     7,
      10,    11,    22,     0,    12,     0,    33,    25,   120,   123,
       8,   121,     5,    33,    28,     0,    33,   133,     9,   122,
      24,    29,     0,     0,    44,    35,    34,    30,    37,    36,
      39,    33,    91,   125,   124,   104,   103,    99,   102,   100,
     101,     0,    90,    89,    88,    84,    86,    41,    51,    52,
      54,    56,    58,    60,    62,    65,    70,    73,    76,    78,
      80,    85,     0,     0,     0,     0,    49,   148,    23,    91,
       0,     0,     0,     0,     0,   132,    97,    76,     0,    92,
      93,   136,   134,   135,   137,   138,   139,     0,   115,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      79,    45,    38,    40,     0,    50,   114,     0,   108,   110,
       0,     0,   146,   145,     0,     0,     0,     0,   140,     0,
       0,   127,   126,   115,    32,   105,   116,    87,     0,    53,
      55,    57,    59,    61,    63,    64,    69,    66,    67,    68,
      72,    71,    74,    75,    83,     0,     0,    46,   115,   112,
       0,   113,    47,   109,     0,    48,   149,   147,     0,     0,
     144,    98,    94,   130,     0,   116,    49,   106,    77,    81,
      82,    96,   111,    91,    91,     0,   128,   117,     0,     0,
     107,   143,   141,   129,   131,   118,   119,    91,   142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,  -184,  -184,  -184,    71,    -2,  -184,   -30,  -184,
    -184,   157,    69,  -184,  -184,   -48,  -184,   110,   -28,   -37,
      -1,   -27,   -41,    84,    86,    83,    87,    85,    32,    26,
      51,   -72,   -52,  -184,  -184,  -184,   115,   -57,  -184,   -99,
    -184,  -184,  -184,    11,  -126,    19,   105,   -94,   181,  -184,
    -184,  -184,  -138,  -184,   189,  -184,  -183,  -184,  -184,  -184,
    -184,  -184
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     3,     4,     5,   136,    30,    20,    21,    22,
      23,    33,    34,   108,    35,    46,    47,    48,    24,    50,
     134,   135,    96,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    98,    99,   176,   100,
      82,   111,   209,   137,   138,   139,   180,   195,    25,    31,
      39,    54,   152,   194,   101,    52,   102,   103,   104,   105,
     106,   140
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,    68,    53,    19,   110,    45,    83,    49,   151,    97,
     130,   183,   193,   109,   156,    67,   127,    42,    43,    26,
     211,   212,     2,    55,    56,    57,   149,    38,    85,    58,
      59,    45,   149,    49,   218,    36,    44,    97,    60,    27,
     128,    43,   181,   129,    68,    68,    61,   199,   191,    86,
     192,   151,    87,   172,   173,    97,   157,   149,   133,    44,
     154,    62,    63,    64,    65,    66,   149,   214,    84,   205,
     123,   175,   185,   117,   118,    40,    97,   201,    45,   124,
      49,   203,   113,   178,   183,   107,   198,   188,   189,   206,
     204,   186,    97,    97,    88,    97,    29,    97,    97,   179,
      86,    44,    41,    87,   196,   112,   151,   197,    29,   114,
      89,    90,    91,   116,    92,    93,    94,   125,   126,   115,
      41,    55,    56,    57,    97,   142,   119,    58,    59,   120,
     121,   122,   143,   146,    38,    86,    60,   131,    87,    95,
      86,    83,    28,    87,    61,   166,   167,   168,   169,   164,
     165,    97,    97,    97,  -116,    68,   144,  -116,   147,    62,
      63,    64,    65,    66,   145,    97,    89,    90,    91,   148,
      92,    93,    94,   149,   170,   171,   158,    55,    56,    57,
     174,   177,   184,    58,    59,   187,   190,   153,   207,   215,
     216,   217,    60,    51,   132,   208,   159,   161,    28,   160,
      61,   163,   162,   202,   141,    55,    56,    57,   210,    37,
       0,    58,    59,   155,    32,    62,    63,    64,    65,    66,
      60,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       6,     7,     8,     9,    10,    11,     0,     0,    14,     0,
       0,     0,    18,    62,    63,    64,    65,    66,    55,    56,
      57,     0,     0,     0,    58,    59,     0,     0,    55,    56,
      57,     0,     0,    60,    58,    59,   213,     0,     0,   150,
       0,    61,     0,    60,     0,     0,     0,     0,     0,   150,
       0,    61,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    42,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    55,    56,    57,     0,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,    43,    60,     6,     7,     8,
       9,    10,    11,   200,    61,    14,     0,     0,     0,    18,
       0,     0,     0,    44,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,  -115,     0,     0,   178,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    28,     0,     0,    44,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   182,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   153,     0,     6,     7,     8,
       9,    10,    11,     0,     0,    14,     0,     0,     0,    18,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18
};

static const yytype_int16 yycheck[] =
{
      52,    42,    39,     5,    61,    35,    43,    35,   107,    61,
      82,   137,   150,    61,   108,    42,    10,    13,    37,    35,
     203,   204,     0,    14,    15,    16,    12,    29,    13,    20,
      21,    61,    12,    61,   217,    35,    55,    89,    29,    55,
      34,    37,   136,    37,    85,    86,    37,    33,   147,    34,
     149,   150,    37,   125,   126,   107,    36,    12,    85,    55,
     108,    52,    53,    54,    55,    56,    12,   205,    12,    12,
      20,   128,    36,    24,    25,    32,   128,   176,   108,    29,
     108,    36,    30,    37,   210,    19,   158,   144,   145,    32,
      36,    55,   144,   145,    32,   147,    25,   149,   150,   136,
      34,    55,    33,    37,    34,    31,   205,    37,    37,    18,
       3,     4,     5,    16,     7,     8,     9,    21,    22,    17,
      51,    14,    15,    16,   176,    11,    23,    20,    21,    26,
      27,    28,    11,    55,   136,    34,    29,    36,    37,    32,
      34,   178,    35,    37,    37,   119,   120,   121,   122,   117,
     118,   203,   204,   205,    34,   196,    37,    37,    19,    52,
      53,    54,    55,    56,    37,   217,     3,     4,     5,    11,
       7,     8,     9,    12,   123,   124,    36,    14,    15,    16,
      55,    33,    12,    20,    21,    11,    11,    37,    36,    33,
      36,     6,    29,    36,    84,   196,   112,   114,    35,   113,
      37,   116,   115,   184,    89,    14,    15,    16,   197,    28,
      -1,    20,    21,   108,    25,    52,    53,    54,    55,    56,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    -1,    -1,    14,    15,
      16,    -1,    -1,    29,    20,    21,    32,    -1,    -1,    35,
      -1,    37,    -1,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    37,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    13,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    14,    15,    16,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    29,    39,    40,    41,
      42,    43,    44,    36,    37,    47,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    35,    -1,    -1,    55,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    36,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    37,    -1,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    -1,    -1,    -1,    51,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    58,     0,    59,    60,    61,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    63,
      64,    65,    66,    67,    75,   105,    35,    55,    35,    62,
      63,   106,   111,    68,    69,    71,    35,   105,    63,   107,
      32,    69,    13,    37,    55,    65,    72,    73,    74,    75,
      76,    68,   112,    76,   108,    14,    15,    16,    20,    21,
      29,    37,    52,    53,    54,    55,    56,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    97,    76,    12,    13,    34,    37,    32,     3,
       4,     5,     7,     8,     9,    32,    79,    89,    93,    94,
      96,   111,   113,   114,   115,   116,   117,    19,    70,    72,
      94,    98,    31,    30,    18,    17,    16,    24,    25,    23,
      26,    27,    28,    20,    29,    21,    22,    10,    34,    37,
      88,    36,    74,    78,    77,    78,    62,   100,   101,   102,
     118,    93,    11,    11,    37,    37,    55,    19,    11,    12,
      35,    96,   109,    37,    72,   103,   104,    36,    36,    80,
      81,    82,    83,    84,    85,    85,    86,    86,    86,    86,
      87,    87,    88,    88,    55,    94,    95,    33,    37,    76,
     103,   104,    36,   101,    12,    36,    55,    11,    94,    94,
      11,    96,    96,   109,   110,   104,    34,    37,    88,    33,
      36,    96,   102,    36,    36,    12,    32,    36,    77,    99,
     100,   113,   113,    32,   109,    33,    36,     6,   113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    59,    60,    61,    61,    62,    62,
      63,    63,    63,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    66,    67,    67,    68,    68,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    75,    75,    76,    76,    76,    76,    76,    77,
      77,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    84,    84,    84,    85,    85,    85,    85,    85,
      86,    86,    86,    87,    87,    87,    88,    88,    89,    89,
      90,    90,    90,    90,    91,    91,    91,    91,    92,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   103,   103,   104,   104,   104,
     105,   105,   106,   107,   107,   108,   108,   109,   109,   109,
     110,   110,   111,   112,   112,   113,   113,   113,   113,   113,
     114,   115,   115,   116,   117,   117,   117,   117,   118,   118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     0,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     2,     1,     1,     1,     2,
       2,     1,     2,     0,     2,     1,     1,     1,     3,     1,
       3,     2,     1,     1,     1,     3,     4,     4,     4,     0,
       1,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     4,     1,     2,
       1,     4,     4,     3,     1,     1,     1,     3,     1,     1,
       1,     0,     1,     1,     3,     0,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     1,     2,
       1,     3,     2,     2,     1,     0,     1,     3,     4,     4,
       0,     2,     2,     0,     2,     1,     3,     1,     3,     4,
       1,     3,     4,     0,     2,     1,     1,     1,     1,     1,
       2,     5,     7,     5,     3,     2,     2,     3,     0,     2
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
  case 2: /* program: %empty  */
#line 25 "./cppBison5.y"
                    {
			printf("*** RUN ***\n");
			printf("Terminate parser with Ctrl_D\n");
		}
#line 1412 "cppBison5.tab.c"
    break;

  case 8: /* declaration_specifier_atlist: declaration_specifier  */
#line 42 "./cppBison5.y"
                                                     {printf(" ----- in stage 1 ----");}
#line 1418 "cppBison5.tab.c"
    break;

  case 44: /* direct_declarator: identifier  */
#line 109 "./cppBison5.y"
                               {printf (" ----- in stage 2 ----- ");}
#line 1424 "cppBison5.tab.c"
    break;

  case 137: /* statement: if_statement  */
#line 274 "./cppBison5.y"
                       {printf("ooh my good lord i found if token to redoct !");}
#line 1430 "cppBison5.tab.c"
    break;

  case 141: /* if_statement: Key_if OpnP expression ClsP statement  */
#line 281 "./cppBison5.y"
                                                     {printf("inter in if without else statement !!");}
#line 1436 "cppBison5.tab.c"
    break;


#line 1440 "cppBison5.tab.c"

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

#line 296 "./cppBison5.y"

#include "lex.yy.h"
/*
int main (int argc, char *argv[]){

    // parsing
    int flag;
    yyin = fopen(argv[1], "r");
    flag = yyparse();
    fclose(yyin);

    return flag;
}
*/
