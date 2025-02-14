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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "node.h"

Node *root;

int yylex();
void yyerror(const char *s);

#line 84 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_RELATIONAL_OP = 5,              /* RELATIONAL_OP  */
  YYSYMBOL_TYPE = 6,                       /* TYPE  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_LOGICAL_OP = 8,                 /* LOGICAL_OP  */
  YYSYMBOL_BITWISE_OP = 9,                 /* BITWISE_OP  */
  YYSYMBOL_ASSIGN_OP = 10,                 /* ASSIGN_OP  */
  YYSYMBOL_INC_DEC_OP = 11,                /* INC_DEC_OP  */
  YYSYMBOL_PREPROCESSOR_OP = 12,           /* PREPROCESSOR_OP  */
  YYSYMBOL_UNARY_OP = 13,                  /* UNARY_OP  */
  YYSYMBOL_TERNARY_OP = 14,                /* TERNARY_OP  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_DO_LOOP = 18,                   /* DO_LOOP  */
  YYSYMBOL_WHILE_LOOP = 19,                /* WHILE_LOOP  */
  YYSYMBOL_FOR_LOOP = 20,                  /* FOR_LOOP  */
  YYSYMBOL_21_ = 21,                       /* '+'  */
  YYSYMBOL_22_ = 22,                       /* '-'  */
  YYSYMBOL_23_ = 23,                       /* '*'  */
  YYSYMBOL_24_ = 24,                       /* '/'  */
  YYSYMBOL_25_ = 25,                       /* '='  */
  YYSYMBOL_26_ = 26,                       /* ':'  */
  YYSYMBOL_27_ = 27,                       /* ';'  */
  YYSYMBOL_28_ = 28,                       /* ','  */
  YYSYMBOL_29_ = 29,                       /* '['  */
  YYSYMBOL_30_ = 30,                       /* ']'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_statement_list = 37,            /* statement_list  */
  YYSYMBOL_statement = 38,                 /* statement  */
  YYSYMBOL_declaration = 39,               /* declaration  */
  YYSYMBOL_type = 40,                      /* type  */
  YYSYMBOL_id_list = 41,                   /* id_list  */
  YYSYMBOL_identifier = 42,                /* identifier  */
  YYSYMBOL_function = 43,                  /* function  */
  YYSYMBOL_parameter_list_opt = 44,        /* parameter_list_opt  */
  YYSYMBOL_parameter_list = 45,            /* parameter_list  */
  YYSYMBOL_parameter = 46,                 /* parameter  */
  YYSYMBOL_attribution = 47,               /* attribution  */
  YYSYMBOL_if_statement = 48,              /* if_statement  */
  YYSYMBOL_else_if_opt = 49,               /* else_if_opt  */
  YYSYMBOL_condition = 50,                 /* condition  */
  YYSYMBOL_loop_statement = 51,            /* loop_statement  */
  YYSYMBOL_for_loop_initialization = 52,   /* for_loop_initialization  */
  YYSYMBOL_return_statement = 53,          /* return_statement  */
  YYSYMBOL_expression = 54,                /* expression  */
  YYSYMBOL_expression_list = 55            /* expression_list  */
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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   314

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


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
      31,    32,    23,    21,    28,    22,     2,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,    27,
       2,    25,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    29,     2,    30,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    61,    62,    66,    67,    68,    69,    70,
      71,    72,    76,    77,    78,    82,    86,    87,    91,    92,
      96,    97,   101,   102,   106,   107,   111,   112,   116,   117,
     118,   122,   126,   127,   128,   132,   133,   134,   135,   139,
     140,   141,   145,   146,   149,   150,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   172,   173
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUM",
  "RELATIONAL_OP", "TYPE", "STRING_LITERAL", "LOGICAL_OP", "BITWISE_OP",
  "ASSIGN_OP", "INC_DEC_OP", "PREPROCESSOR_OP", "UNARY_OP", "TERNARY_OP",
  "IF", "ELSE", "RETURN", "DO_LOOP", "WHILE_LOOP", "FOR_LOOP", "'+'",
  "'-'", "'*'", "'/'", "'='", "':'", "';'", "','", "'['", "']'", "'('",
  "')'", "'{'", "'}'", "$accept", "program", "statement_list", "statement",
  "declaration", "type", "id_list", "identifier", "function",
  "parameter_list_opt", "parameter_list", "parameter", "attribution",
  "if_statement", "else_if_opt", "condition", "loop_statement",
  "for_loop_initialization", "return_statement", "expression",
  "expression_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-33)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     278,    78,   -33,   -13,   225,   -11,    12,    24,    73,   278,
     -33,     3,    77,    60,   -33,    59,   -33,   -33,   -33,    94,
     236,   247,   -33,   -33,   247,   247,   -33,   247,   247,   101,
     -33,   252,   278,   247,     2,   -33,   -33,   -33,    67,    60,
     -33,   -33,   247,   -33,   247,   -33,    86,   114,    90,    91,
     -33,   290,     9,    21,    -1,   152,   109,   109,    40,   290,
     -18,   -33,   247,   247,   247,   247,   247,   247,   -33,     8,
       5,    97,   -33,   -33,   100,   -33,   130,   290,   290,   -33,
     -33,    19,   236,   247,   103,   247,   -33,   247,   -33,    79,
     268,    36,    36,    87,    87,   115,   104,   247,   -33,   -33,
     278,   -33,   133,   278,   290,   290,   247,   111,   278,    30,
      72,   164,   109,   247,   182,     2,   -33,   128,     7,   -33,
     118,    25,   -33,   126,   123,   278,   -33,   -33,   278,   200,
     207,   -33,   -33
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    18,    15,     0,     0,     0,     0,     0,     0,     2,
       3,     5,     0,     0,    11,     0,     8,     9,    10,     0,
      23,     0,    46,    47,     0,     0,    45,     0,     0,    48,
      60,     0,     0,     0,     0,     1,     4,     6,     0,    16,
      13,    14,     0,    30,     0,     7,     0,     0,     0,    22,
      24,    27,    48,    60,     0,     0,    55,    56,     0,    61,
       0,    54,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    18,    42,    43,     0,    12,     0,    29,    28,    19,
      26,     0,     0,     0,     0,     0,    58,     0,    59,    53,
       0,    49,    50,    51,    52,     0,     0,     0,    17,    21,
       0,    25,    36,     0,    35,    62,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,    20,    34,     0,    39,
       0,     0,    31,     0,     0,     0,    33,    40,     0,     0,
       0,    32,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -33,   -33,   -26,    10,   -31,   -16,   -33,     0,    35,   -33,
     -33,    76,   -10,    38,   -33,   -32,   -33,    47,   -33,   127,
     -33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    38,    29,    30,    48,
      49,    50,    15,    16,   122,    54,    17,    74,    18,    55,
      60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    70,    41,    72,    47,    71,    69,    83,     2,    13,
      87,     1,    39,    83,     2,    83,    88,   -37,    21,    36,
      61,    52,    32,     3,    73,     4,     5,     6,     7,   -38,
      37,    84,    13,    52,    13,    14,   -37,    96,    83,   123,
       3,   -37,    95,    33,    14,    62,    99,    40,   -38,    62,
      63,   102,   100,   -38,    63,    34,    53,   115,   125,    66,
      67,    64,    65,    66,    67,   109,    47,    14,    53,    13,
      42,    43,    86,    35,   110,     1,    98,   111,     2,    36,
       1,   118,   114,    52,    72,    44,    45,     3,   -39,     4,
       5,     6,     7,    63,    75,    76,    62,    52,    46,   129,
      13,    63,   130,    13,    14,    73,   116,    19,    13,    20,
      13,    13,    61,    52,    13,    13,    79,    80,    53,    82,
      36,    36,    81,    63,    36,    13,    19,    97,    13,    13,
      13,    31,    53,    71,   107,    14,   103,   108,    14,    36,
      36,   -39,   113,    14,   121,    14,    14,    51,    53,    14,
     124,    56,    57,   127,    58,    59,   128,    85,   101,   126,
      14,    62,   120,    14,    14,    14,    63,     1,     0,    77,
       2,    78,     0,    64,    65,    66,    67,     0,     0,     3,
       0,     4,     5,     6,     7,     1,     0,     0,     2,    89,
      90,    91,    92,    93,    94,     0,     0,     3,   117,     4,
       5,     6,     7,     1,     0,     0,     2,     0,     0,    51,
       1,     0,   104,     2,   105,     3,   119,     4,     5,     6,
       7,     0,     3,     0,     4,     5,     6,     7,     1,    22,
       0,     0,    23,   112,   131,     0,     0,    24,    25,     1,
      22,   132,     2,    23,     0,     0,     0,     0,    24,    25,
       1,    22,    26,     0,    23,     0,    27,     0,    28,    24,
      25,    62,     0,     0,     0,     0,    63,    27,     0,    28,
       0,     0,     0,    64,    65,    66,    67,    62,    27,    68,
      28,     1,    63,     0,     2,     0,     0,     0,     0,    64,
      65,    66,    67,     3,   106,     4,     5,     6,     7,    62,
       0,     0,     0,     0,    63,     0,     0,     0,     0,     0,
       0,    64,    65,    66,    67
};

static const yytype_int16 yycheck[] =
{
       0,    33,    12,    34,    20,     3,    32,     8,     6,     9,
      28,     3,    12,     8,     6,     8,    34,     8,    31,     9,
      11,    21,    33,    15,    34,    17,    18,    19,    20,     8,
      27,    32,    32,    33,    34,     0,    27,    32,     8,    32,
      15,    32,    34,    31,     9,     9,    27,    12,    27,     9,
      14,    83,    33,    32,    14,    31,    21,    27,    33,    23,
      24,    21,    22,    23,    24,    97,    82,    32,    33,    69,
      10,    11,    32,     0,   100,     3,    76,   103,     6,    69,
       3,   113,   108,    83,   115,    25,    27,    15,     9,    17,
      18,    19,    20,    14,    27,    28,     9,    97,     4,   125,
     100,    14,   128,   103,    69,   115,    34,    29,   108,    31,
     110,   111,    11,   113,   114,   115,    30,     3,    83,    28,
     110,   111,    32,    14,   114,   125,    29,    27,   128,   129,
     130,     4,    97,     3,    19,   100,    33,    33,   103,   129,
     130,     8,    31,   108,    16,   110,   111,    20,   113,   114,
      32,    24,    25,    27,    27,    28,    33,     5,    82,   121,
     125,     9,   115,   128,   129,   130,    14,     3,    -1,    42,
       6,    44,    -1,    21,    22,    23,    24,    -1,    -1,    15,
      -1,    17,    18,    19,    20,     3,    -1,    -1,     6,    62,
      63,    64,    65,    66,    67,    -1,    -1,    15,    34,    17,
      18,    19,    20,     3,    -1,    -1,     6,    -1,    -1,    82,
       3,    -1,    85,     6,    87,    15,    34,    17,    18,    19,
      20,    -1,    15,    -1,    17,    18,    19,    20,     3,     4,
      -1,    -1,     7,   106,    34,    -1,    -1,    12,    13,     3,
       4,    34,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
       3,     4,    27,    -1,     7,    -1,    31,    -1,    33,    12,
      13,     9,    -1,    -1,    -1,    -1,    14,    31,    -1,    33,
      -1,    -1,    -1,    21,    22,    23,    24,     9,    31,    27,
      33,     3,    14,    -1,     6,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    15,    26,    17,    18,    19,    20,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,    15,    17,    18,    19,    20,    36,    37,
      38,    39,    40,    42,    43,    47,    48,    51,    53,    29,
      31,    31,     4,     7,    12,    13,    27,    31,    33,    42,
      43,    54,    33,    31,    31,     0,    38,    27,    41,    42,
      43,    47,    10,    11,    25,    27,     4,    40,    44,    45,
      46,    54,    42,    43,    50,    54,    54,    54,    54,    54,
      55,    11,     9,    14,    21,    22,    23,    24,    27,    37,
      50,     3,    39,    47,    52,    27,    28,    54,    54,    30,
       3,    32,    28,     8,    32,     5,    32,    28,    34,    54,
      54,    54,    54,    54,    54,    34,    32,    27,    42,    27,
      33,    46,    50,    33,    54,    54,    26,    19,    33,    50,
      37,    37,    54,    31,    37,    27,    34,    34,    50,    34,
      52,    16,    49,    32,    32,    33,    48,    27,    33,    37,
      37,    34,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    38,
      38,    38,    39,    39,    39,    40,    41,    41,    42,    42,
      43,    43,    44,    44,    45,    45,    46,    46,    47,    47,
      47,    48,    49,    49,    49,    50,    50,    50,    50,    51,
      51,    51,    52,    52,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     1,     1,
       1,     1,     3,     2,     2,     1,     1,     3,     1,     4,
       7,     5,     1,     0,     1,     3,     2,     1,     3,     3,
       2,     8,     4,     2,     0,     3,     3,     1,     1,     7,
       9,    11,     1,     1,     3,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     2,     2,     2,     5,     3,     3,
       1,     1,     3
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
  case 2: /* program: statement_list  */
#line 57 "parser.y"
                   { root = create_node("program", 1, (yyvsp[0].node)); }
#line 1246 "parser.tab.c"
    break;

  case 3: /* statement_list: statement  */
#line 61 "parser.y"
              { (yyval.node) = create_node("statement_list", 1, (yyvsp[0].node)); }
#line 1252 "parser.tab.c"
    break;

  case 4: /* statement_list: statement_list statement  */
#line 62 "parser.y"
                               { (yyval.node) = create_node("statement_list", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1258 "parser.tab.c"
    break;

  case 5: /* statement: declaration  */
#line 66 "parser.y"
                { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1264 "parser.tab.c"
    break;

  case 6: /* statement: declaration ';'  */
#line 67 "parser.y"
                      { (yyval.node) = create_node("statement", 1, (yyvsp[-1].node)); }
#line 1270 "parser.tab.c"
    break;

  case 7: /* statement: attribution ';'  */
#line 68 "parser.y"
                      { (yyval.node) = create_node("statement", 1, (yyvsp[-1].node)); }
#line 1276 "parser.tab.c"
    break;

  case 8: /* statement: if_statement  */
#line 69 "parser.y"
                   { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1282 "parser.tab.c"
    break;

  case 9: /* statement: loop_statement  */
#line 70 "parser.y"
                     { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1288 "parser.tab.c"
    break;

  case 10: /* statement: return_statement  */
#line 71 "parser.y"
                       { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1294 "parser.tab.c"
    break;

  case 11: /* statement: function  */
#line 72 "parser.y"
               { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1300 "parser.tab.c"
    break;

  case 12: /* declaration: type id_list ';'  */
#line 76 "parser.y"
                     { (yyval.node) = create_node("declaration", 2, (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1306 "parser.tab.c"
    break;

  case 13: /* declaration: type function  */
#line 77 "parser.y"
                    { (yyval.node) = create_node("declaration", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1312 "parser.tab.c"
    break;

  case 14: /* declaration: type attribution  */
#line 78 "parser.y"
                       { (yyval.node) = create_node("declaration", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1318 "parser.tab.c"
    break;

  case 15: /* type: TYPE  */
#line 82 "parser.y"
         { (yyval.node) = create_node("type_specifier", 1, create_node((yyvsp[0].str), 0)); }
#line 1324 "parser.tab.c"
    break;

  case 16: /* id_list: identifier  */
#line 86 "parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1330 "parser.tab.c"
    break;

  case 17: /* id_list: id_list ',' identifier  */
#line 87 "parser.y"
                             { (yyval.node) = create_node("id_list", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1336 "parser.tab.c"
    break;

  case 18: /* identifier: ID  */
#line 91 "parser.y"
       { (yyval.node) = create_node("identifier", 1, create_node((yyvsp[0].str), 0)); }
#line 1342 "parser.tab.c"
    break;

  case 19: /* identifier: ID '[' NUM ']'  */
#line 92 "parser.y"
                     { (yyval.node) = create_node("array", 2, create_node("identifier", 1, create_node((yyvsp[-3].str), 0)), create_node("array_index", 1, create_node((yyvsp[-1].str), 0))); }
#line 1348 "parser.tab.c"
    break;

  case 20: /* function: ID '(' parameter_list_opt ')' '{' statement_list '}'  */
#line 96 "parser.y"
                                                         { (yyval.node) = create_node("function_definition", 3, create_node("function_name", 1, create_node((yyvsp[-6].str), 0)), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1354 "parser.tab.c"
    break;

  case 21: /* function: ID '(' parameter_list_opt ')' ';'  */
#line 97 "parser.y"
                                        { (yyval.node) = create_node("function_declaration", 2, create_node("function_name", 1, create_node((yyvsp[-4].str), 0)), (yyvsp[-2].node)); }
#line 1360 "parser.tab.c"
    break;

  case 22: /* parameter_list_opt: parameter_list  */
#line 101 "parser.y"
                   { (yyval.node) = (yyvsp[0].node); }
#line 1366 "parser.tab.c"
    break;

  case 23: /* parameter_list_opt: %empty  */
#line 102 "parser.y"
      { (yyval.node) = create_node("parameter_list", 0); }
#line 1372 "parser.tab.c"
    break;

  case 24: /* parameter_list: parameter  */
#line 106 "parser.y"
              { (yyval.node) = create_node("parameter_list", 1, (yyvsp[0].node)); }
#line 1378 "parser.tab.c"
    break;

  case 25: /* parameter_list: parameter_list ',' parameter  */
#line 107 "parser.y"
                                   { (yyval.node) = create_node("parameter_list", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1384 "parser.tab.c"
    break;

  case 26: /* parameter: type ID  */
#line 111 "parser.y"
            { (yyval.node) = create_node("parameter", 1, create_node("declaration", 2, (yyvsp[-1].node), create_node("identifier", 1, create_node((yyvsp[0].str), 0)))); }
#line 1390 "parser.tab.c"
    break;

  case 27: /* parameter: expression  */
#line 112 "parser.y"
                 { (yyval.node) = create_node("parameter", 1, (yyvsp[0].node)); }
#line 1396 "parser.tab.c"
    break;

  case 28: /* attribution: identifier '=' expression  */
#line 116 "parser.y"
                              { (yyval.node) = create_node("attribution", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1402 "parser.tab.c"
    break;

  case 29: /* attribution: identifier ASSIGN_OP expression  */
#line 117 "parser.y"
                                      { (yyval.node) = create_node("assign_op", 3, (yyvsp[-2].node), create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1408 "parser.tab.c"
    break;

  case 30: /* attribution: identifier INC_DEC_OP  */
#line 118 "parser.y"
                            { (yyval.node) = create_node("inc_dec_op", 2, (yyvsp[-1].node), create_node((yyvsp[0].str), 0)); }
#line 1414 "parser.tab.c"
    break;

  case 31: /* if_statement: IF '(' condition ')' '{' statement_list '}' else_if_opt  */
#line 122 "parser.y"
                                                            { (yyval.node) = create_node("if_statement", 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1420 "parser.tab.c"
    break;

  case 32: /* else_if_opt: ELSE '{' statement_list '}'  */
#line 126 "parser.y"
                                { (yyval.node) = create_node("else_statement", 1, (yyvsp[-1].node)); }
#line 1426 "parser.tab.c"
    break;

  case 33: /* else_if_opt: ELSE if_statement  */
#line 127 "parser.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 1432 "parser.tab.c"
    break;

  case 34: /* else_if_opt: %empty  */
#line 128 "parser.y"
      { (yyval.node) = NULL; }
#line 1438 "parser.tab.c"
    break;

  case 35: /* condition: expression RELATIONAL_OP expression  */
#line 132 "parser.y"
                                        { (yyval.node) = create_node("relacional_op", 3, (yyvsp[-2].node), create_node((yyvsp[-1].str),0),(yyvsp[0].node)); }
#line 1444 "parser.tab.c"
    break;

  case 36: /* condition: condition LOGICAL_OP condition  */
#line 133 "parser.y"
                                     { (yyval.node) = create_node("logical_op", 3, (yyvsp[-2].node), create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1450 "parser.tab.c"
    break;

  case 37: /* condition: identifier  */
#line 134 "parser.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 1456 "parser.tab.c"
    break;

  case 38: /* condition: function  */
#line 135 "parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1462 "parser.tab.c"
    break;

  case 39: /* loop_statement: WHILE_LOOP '(' condition ')' '{' statement_list '}'  */
#line 139 "parser.y"
                                                        { (yyval.node) = create_node("loop_statement", 2, (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1468 "parser.tab.c"
    break;

  case 40: /* loop_statement: DO_LOOP '{' statement_list '}' WHILE_LOOP '(' condition ')' ';'  */
#line 140 "parser.y"
                                                                      { (yyval.node) = create_node("loop_statement", 2, (yyvsp[-6].node), (yyvsp[-2].node)); }
#line 1474 "parser.tab.c"
    break;

  case 41: /* loop_statement: FOR_LOOP '(' for_loop_initialization ';' condition ';' for_loop_initialization ')' '{' statement_list '}'  */
#line 141 "parser.y"
                                                                                                                { (yyval.node) = create_node("loop_statement", 4, (yyvsp[-8].node), (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1480 "parser.tab.c"
    break;

  case 42: /* for_loop_initialization: declaration  */
#line 145 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1486 "parser.tab.c"
    break;

  case 43: /* for_loop_initialization: attribution  */
#line 146 "parser.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1492 "parser.tab.c"
    break;

  case 44: /* return_statement: RETURN expression ';'  */
#line 149 "parser.y"
                          { (yyval.node) = create_node("return_statement", 1, (yyvsp[-1].node)); }
#line 1498 "parser.tab.c"
    break;

  case 45: /* return_statement: RETURN ';'  */
#line 150 "parser.y"
                 { (yyval.node) = create_node("return_statement", 0); }
#line 1504 "parser.tab.c"
    break;

  case 46: /* expression: NUM  */
#line 154 "parser.y"
        { (yyval.node) = create_node("literal_value", 1, create_node((yyvsp[0].str), 0)); }
#line 1510 "parser.tab.c"
    break;

  case 47: /* expression: STRING_LITERAL  */
#line 155 "parser.y"
                     { (yyval.node) = create_node("string_literal", 1, create_node((yyvsp[0].str), 0)); }
#line 1516 "parser.tab.c"
    break;

  case 48: /* expression: identifier  */
#line 156 "parser.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 1522 "parser.tab.c"
    break;

  case 49: /* expression: expression '+' expression  */
#line 157 "parser.y"
                                { (yyval.node) = create_node("add", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1528 "parser.tab.c"
    break;

  case 50: /* expression: expression '-' expression  */
#line 158 "parser.y"
                                { (yyval.node) = create_node("subtract", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1534 "parser.tab.c"
    break;

  case 51: /* expression: expression '*' expression  */
#line 159 "parser.y"
                                { (yyval.node) = create_node("multiply", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1540 "parser.tab.c"
    break;

  case 52: /* expression: expression '/' expression  */
#line 160 "parser.y"
                                { (yyval.node) = create_node("divide", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1546 "parser.tab.c"
    break;

  case 53: /* expression: expression BITWISE_OP expression  */
#line 161 "parser.y"
                                       { (yyval.node) = create_node("bitwise_op", 3, (yyvsp[-2].node), create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1552 "parser.tab.c"
    break;

  case 54: /* expression: identifier INC_DEC_OP  */
#line 162 "parser.y"
                            { (yyval.node) = create_node("inc_dec_op", 2, (yyvsp[-1].node), create_node((yyvsp[0].str), 0)); }
#line 1558 "parser.tab.c"
    break;

  case 55: /* expression: PREPROCESSOR_OP expression  */
#line 163 "parser.y"
                                 { (yyval.node) = create_node("preprocessor_op", 2, create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1564 "parser.tab.c"
    break;

  case 56: /* expression: UNARY_OP expression  */
#line 164 "parser.y"
                          { (yyval.node) = create_node("unary_op", 2, create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1570 "parser.tab.c"
    break;

  case 57: /* expression: expression TERNARY_OP expression ':' expression  */
#line 165 "parser.y"
                                                      { (yyval.node) = create_node("ternary_op", 4, (yyvsp[-4].node), create_node((yyvsp[-3].str), 0), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1576 "parser.tab.c"
    break;

  case 58: /* expression: '(' expression ')'  */
#line 166 "parser.y"
                         { (yyval.node) = (yyvsp[-1].node); }
#line 1582 "parser.tab.c"
    break;

  case 59: /* expression: '{' expression_list '}'  */
#line 167 "parser.y"
                              { (yyval.node) = create_node("expression_list", 1, (yyvsp[-1].node)); }
#line 1588 "parser.tab.c"
    break;

  case 60: /* expression: function  */
#line 168 "parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1594 "parser.tab.c"
    break;

  case 61: /* expression_list: expression  */
#line 172 "parser.y"
               { (yyval.node) = create_node("expression_list", 1, (yyvsp[0].node)); }
#line 1600 "parser.tab.c"
    break;

  case 62: /* expression_list: expression_list ',' expression  */
#line 173 "parser.y"
                                     { (yyval.node) = create_node("expression_list", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1606 "parser.tab.c"
    break;


#line 1610 "parser.tab.c"

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

#line 175 "parser.y"


Node *create_node(char *label, int child_count, ...) {
    Node *node = malloc(sizeof(Node));
    node->label = strdup(label);
    node->child_count = child_count;
    node->children = malloc(child_count * sizeof(Node *));

    va_list args;
    va_start(args, child_count);
    for (int i = 0; i < child_count; i++) {
        node->children[i] = va_arg(args, Node *);
    }
    va_end(args);

    return node;
}

void print_tree(Node *node, int depth) {
    if (!node) return;

    for (int i = 0; i < depth; i++) {
        printf("\t");
    }
    printf("%s\n", node->label);
    
    for (int i = 0; i < node->child_count; i++) {
        print_tree(node->children[i], depth + 1);
    }
}

void yyerror(const char *s) {
    fprintf(stderr, "Erro de sintaxe: %s\n", s);
}

int main() {
    if (yyparse() == 0) {
        print_tree(root, 0);
    }
    return 0;
}
