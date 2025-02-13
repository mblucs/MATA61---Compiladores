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
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_LOGICAL_OP = 12,                /* LOGICAL_OP  */
  YYSYMBOL_BITWISE_OP = 13,                /* BITWISE_OP  */
  YYSYMBOL_ASSIGN_OP = 14,                 /* ASSIGN_OP  */
  YYSYMBOL_INC_DEC_OP = 15,                /* INC_DEC_OP  */
  YYSYMBOL_PREPROCESSOR_OP = 16,           /* PREPROCESSOR_OP  */
  YYSYMBOL_UNARY_OP = 17,                  /* UNARY_OP  */
  YYSYMBOL_TERNARY_OP = 18,                /* TERNARY_OP  */
  YYSYMBOL_19_ = 19,                       /* '+'  */
  YYSYMBOL_20_ = 20,                       /* '-'  */
  YYSYMBOL_21_ = 21,                       /* '*'  */
  YYSYMBOL_22_ = 22,                       /* '/'  */
  YYSYMBOL_23_ = 23,                       /* '='  */
  YYSYMBOL_24_ = 24,                       /* ':'  */
  YYSYMBOL_25_ = 25,                       /* ';'  */
  YYSYMBOL_26_ = 26,                       /* ','  */
  YYSYMBOL_27_ = 27,                       /* '['  */
  YYSYMBOL_28_ = 28,                       /* ']'  */
  YYSYMBOL_29_ = 29,                       /* '('  */
  YYSYMBOL_30_ = 30,                       /* ')'  */
  YYSYMBOL_31_ = 31,                       /* '{'  */
  YYSYMBOL_32_ = 32,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_statement_list = 35,            /* statement_list  */
  YYSYMBOL_statement = 36,                 /* statement  */
  YYSYMBOL_declaration = 37,               /* declaration  */
  YYSYMBOL_type = 38,                      /* type  */
  YYSYMBOL_id_list = 39,                   /* id_list  */
  YYSYMBOL_identifier = 40,                /* identifier  */
  YYSYMBOL_function = 41,                  /* function  */
  YYSYMBOL_parameter_list_opt = 42,        /* parameter_list_opt  */
  YYSYMBOL_parameter_list = 43,            /* parameter_list  */
  YYSYMBOL_parameter = 44,                 /* parameter  */
  YYSYMBOL_attribution = 45,               /* attribution  */
  YYSYMBOL_if_statement = 46,              /* if_statement  */
  YYSYMBOL_comparison = 47,                /* comparison  */
  YYSYMBOL_loop_statement = 48,            /* loop_statement  */
  YYSYMBOL_return_statement = 49,          /* return_statement  */
  YYSYMBOL_expression = 50,                /* expression  */
  YYSYMBOL_expression_list = 51            /* expression_list  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   239

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  109

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   273


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
      29,    30,    21,    19,    26,    20,     2,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    24,    25,
       2,    23,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    27,     2,    28,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      15,    16,    17,    18
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    58,    59,    63,    64,    65,    66,    67,
      68,    72,    73,    74,    78,    82,    83,    87,    88,    92,
      93,    97,    98,   102,   103,   107,   108,   112,   113,   114,
     118,   119,   120,   124,   125,   126,   127,   130,   134,   135,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   157,   158
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
  "RELATIONAL_OP", "TYPE", "STRING_LITERAL", "IF", "ELSE", "WHILE",
  "RETURN", "LOGICAL_OP", "BITWISE_OP", "ASSIGN_OP", "INC_DEC_OP",
  "PREPROCESSOR_OP", "UNARY_OP", "TERNARY_OP", "'+'", "'-'", "'*'", "'/'",
  "'='", "':'", "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'",
  "$accept", "program", "statement_list", "statement", "declaration",
  "type", "id_list", "identifier", "function", "parameter_list_opt",
  "parameter_list", "parameter", "attribution", "if_statement",
  "comparison", "loop_statement", "return_statement", "expression",
  "expression_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-28)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     228,   -24,   -28,   -27,     3,    59,    45,   228,   -28,   -28,
      71,    68,   -28,   -28,   -28,   -28,   -28,    73,   129,    64,
      64,   -28,   -28,    64,    64,   -28,    64,    64,    63,   -28,
     177,   -28,   -28,    35,    68,   -28,   -28,    64,   -28,    64,
      57,    84,    70,    76,   -28,   208,    -3,     6,    27,   134,
      39,    86,    86,   164,   208,    21,   -28,    64,    64,    64,
      64,    64,    64,   -28,   -28,   107,   208,   188,   -28,   -28,
      48,   129,    64,    87,    64,    89,   -28,    64,   -28,     4,
     198,    37,    37,    83,    83,    96,   -28,   -28,   -28,   228,
     -28,   102,   228,   208,   228,   208,    64,     5,    20,    32,
      86,   -28,   115,   -28,    -2,   228,   -28,    38,   -28
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    17,    14,     0,     0,     0,     0,     2,     3,     5,
       0,     0,    10,     6,     7,     8,     9,     0,    22,     0,
       0,    40,    41,     0,     0,    39,     0,     0,    42,    54,
       0,     1,     4,     0,    15,    12,    13,     0,    29,     0,
       0,     0,     0,    21,    23,    26,    42,    54,     0,     0,
       0,    49,    50,     0,    55,     0,    48,     0,     0,     0,
       0,     0,     0,    38,    11,     0,    28,     0,    18,    25,
       0,     0,     0,     0,     0,     0,    52,     0,    53,    47,
       0,    43,    44,    45,    46,    17,    16,    27,    20,     0,
      24,    34,     0,    33,     0,    56,     0,     0,     0,     0,
      51,    19,    30,    37,     0,     0,    32,     0,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,    82,    18,   -28,   -17,   -28,     0,    14,   -28,
     -28,    55,   119,    30,   -16,   -28,   -28,   104,   -28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,     9,    10,    33,    28,    29,    42,
      43,    44,    13,    14,    48,    15,    16,    49,    55
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      11,    41,    19,    17,    50,    18,     3,    11,     1,   -35,
      34,     2,    56,     3,    12,     4,     5,   -37,   -36,    46,
      46,    12,    58,     1,    35,    32,     2,   -35,     3,   105,
       4,     5,    20,    47,    47,     1,   -36,   101,     2,    72,
       3,     1,     4,     5,     2,    31,     3,    77,     4,     5,
      57,    72,   102,    78,    41,    58,    91,    73,    61,    62,
      64,    65,     1,    21,   103,    86,    22,     1,    21,    75,
     108,    22,    46,    88,     1,    23,    24,    40,    56,    89,
      23,    24,    37,    38,    25,    68,    47,    69,    26,    11,
      27,    39,    11,    26,    11,    27,    57,    11,    11,    11,
      70,    58,    71,    12,    58,    11,    12,    11,    12,    30,
      85,    12,    12,    12,   -37,    32,    32,    32,    92,    12,
      94,    12,    45,    17,   104,    32,    90,    51,    52,    36,
      53,    54,     1,    21,   106,     2,    22,     0,     0,    74,
       0,    66,     0,    67,     0,    23,    24,    57,     0,     0,
       0,     0,    58,    59,    60,    61,    62,     0,    26,     0,
      27,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,    97,     0,     0,    98,    45,    99,    57,    93,     0,
       0,    95,    58,    59,    60,    61,    62,   107,     0,     0,
      57,     0,     0,     0,    76,    58,    59,    60,    61,    62,
     100,    57,    63,     0,     0,     0,    58,    59,    60,    61,
      62,    57,     0,    87,     0,     0,    58,    59,    60,    61,
      62,    57,    96,     0,     0,     0,    58,    59,    60,    61,
      62,     1,     0,     0,     2,     0,     3,     0,     4,     5
};

static const yytype_int8 yycheck[] =
{
       0,    18,    29,    27,    20,    29,     8,     7,     3,    12,
      10,     6,    15,     8,     0,    10,    11,    13,    12,    19,
      20,     7,    18,     3,    10,     7,     6,    30,     8,    31,
      10,    11,    29,    19,    20,     3,    30,    32,     6,    12,
       8,     3,    10,    11,     6,     0,     8,    26,    10,    11,
      13,    12,    32,    32,    71,    18,    72,    30,    21,    22,
      25,    26,     3,     4,    32,    65,     7,     3,     4,    30,
      32,     7,    72,    25,     3,    16,    17,     4,    15,    31,
      16,    17,    14,    15,    25,    28,    72,     3,    29,    89,
      31,    23,    92,    29,    94,    31,    13,    97,    98,    99,
      30,    18,    26,    89,    18,   105,    92,   107,    94,     5,
       3,    97,    98,    99,    12,    97,    98,    99,    31,   105,
      31,   107,    18,    27,     9,   107,    71,    23,    24,    10,
      26,    27,     3,     4,   104,     6,     7,    -1,    -1,     5,
      -1,    37,    -1,    39,    -1,    16,    17,    13,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    -1,    29,    -1,
      31,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    92,    71,    94,    13,    74,    -1,
      -1,    77,    18,    19,    20,    21,    22,   105,    -1,    -1,
      13,    -1,    -1,    -1,    30,    18,    19,    20,    21,    22,
      96,    13,    25,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    13,    -1,    25,    -1,    -1,    18,    19,    20,    21,
      22,    13,    24,    -1,    -1,    -1,    18,    19,    20,    21,
      22,     3,    -1,    -1,     6,    -1,     8,    -1,    10,    11
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     8,    10,    11,    34,    35,    36,    37,
      38,    40,    41,    45,    46,    48,    49,    27,    29,    29,
      29,     4,     7,    16,    17,    25,    29,    31,    40,    41,
      50,     0,    36,    39,    40,    41,    45,    14,    15,    23,
       4,    38,    42,    43,    44,    50,    40,    41,    47,    50,
      47,    50,    50,    50,    50,    51,    15,    13,    18,    19,
      20,    21,    22,    25,    25,    26,    50,    50,    28,     3,
      30,    26,    12,    30,     5,    30,    30,    26,    32,    50,
      50,    50,    50,    50,    50,     3,    40,    25,    25,    31,
      44,    47,    31,    50,    31,    50,    24,    35,    35,    35,
      50,    32,    32,    32,     9,    31,    46,    35,    32
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    36,    36,    36,
      36,    37,    37,    37,    38,    39,    39,    40,    40,    41,
      41,    42,    42,    43,    43,    44,    44,    45,    45,    45,
      46,    46,    46,    47,    47,    47,    47,    48,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    51,    51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     1,     1,     3,     1,     4,     7,
       5,     1,     0,     1,     3,     2,     1,     4,     3,     2,
       7,    11,     9,     3,     3,     1,     1,     7,     3,     2,
       1,     1,     1,     3,     3,     3,     3,     3,     2,     2,
       2,     5,     3,     3,     1,     1,     3
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
#line 54 "parser.y"
                   { root = create_node("program", 1, (yyvsp[0].node)); }
#line 1211 "parser.tab.c"
    break;

  case 3: /* statement_list: statement  */
#line 58 "parser.y"
              { (yyval.node) = create_node("statement_list", 1, (yyvsp[0].node)); }
#line 1217 "parser.tab.c"
    break;

  case 4: /* statement_list: statement_list statement  */
#line 59 "parser.y"
                               { (yyval.node) = create_node("statement_list", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1223 "parser.tab.c"
    break;

  case 5: /* statement: declaration  */
#line 63 "parser.y"
                { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1229 "parser.tab.c"
    break;

  case 6: /* statement: attribution  */
#line 64 "parser.y"
                  { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1235 "parser.tab.c"
    break;

  case 7: /* statement: if_statement  */
#line 65 "parser.y"
                   { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1241 "parser.tab.c"
    break;

  case 8: /* statement: loop_statement  */
#line 66 "parser.y"
                     { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1247 "parser.tab.c"
    break;

  case 9: /* statement: return_statement  */
#line 67 "parser.y"
                       { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1253 "parser.tab.c"
    break;

  case 10: /* statement: function  */
#line 68 "parser.y"
               { (yyval.node) = create_node("statement", 1, (yyvsp[0].node)); }
#line 1259 "parser.tab.c"
    break;

  case 11: /* declaration: type id_list ';'  */
#line 72 "parser.y"
                     { (yyval.node) = create_node("declaration", 2, (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1265 "parser.tab.c"
    break;

  case 12: /* declaration: type function  */
#line 73 "parser.y"
                    { (yyval.node) = create_node("declaration", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1271 "parser.tab.c"
    break;

  case 13: /* declaration: type attribution  */
#line 74 "parser.y"
                       { (yyval.node) = create_node("declaration", 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1277 "parser.tab.c"
    break;

  case 14: /* type: TYPE  */
#line 78 "parser.y"
         { (yyval.node) = create_node("type_specifier", 1, create_node((yyvsp[0].str), 0)); }
#line 1283 "parser.tab.c"
    break;

  case 15: /* id_list: identifier  */
#line 82 "parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1289 "parser.tab.c"
    break;

  case 16: /* id_list: id_list ',' identifier  */
#line 83 "parser.y"
                             { (yyval.node) = create_node("id_list", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1295 "parser.tab.c"
    break;

  case 17: /* identifier: ID  */
#line 87 "parser.y"
       { (yyval.node) = create_node("identifier", 1, create_node((yyvsp[0].str), 0)); }
#line 1301 "parser.tab.c"
    break;

  case 18: /* identifier: ID '[' NUM ']'  */
#line 88 "parser.y"
                     { (yyval.node) = create_node("array", 2, create_node("identifier", 1, create_node((yyvsp[-3].str), 0)), create_node("array_index", 1, create_node((yyvsp[-1].str), 0))); }
#line 1307 "parser.tab.c"
    break;

  case 19: /* function: ID '(' parameter_list_opt ')' '{' statement_list '}'  */
#line 92 "parser.y"
                                                         { (yyval.node) = create_node("function_definition", 3, create_node("function_name", 1, create_node((yyvsp[-6].str), 0)), (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1313 "parser.tab.c"
    break;

  case 20: /* function: ID '(' parameter_list_opt ')' ';'  */
#line 93 "parser.y"
                                        { (yyval.node) = create_node("function_declaration", 2, create_node("function_name", 1, create_node((yyvsp[-4].str), 0)), (yyvsp[-2].node)); }
#line 1319 "parser.tab.c"
    break;

  case 21: /* parameter_list_opt: parameter_list  */
#line 97 "parser.y"
                   { (yyval.node) = (yyvsp[0].node); }
#line 1325 "parser.tab.c"
    break;

  case 22: /* parameter_list_opt: %empty  */
#line 98 "parser.y"
      { (yyval.node) = create_node("parameter_list", 0); }
#line 1331 "parser.tab.c"
    break;

  case 23: /* parameter_list: parameter  */
#line 102 "parser.y"
              { (yyval.node) = create_node("parameter_list", 1, (yyvsp[0].node)); }
#line 1337 "parser.tab.c"
    break;

  case 24: /* parameter_list: parameter_list ',' parameter  */
#line 103 "parser.y"
                                   { (yyval.node) = create_node("parameter_list", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1343 "parser.tab.c"
    break;

  case 25: /* parameter: type ID  */
#line 107 "parser.y"
            { (yyval.node) = create_node("parameter", 1, create_node("declaration", 2, (yyvsp[-1].node), create_node("identifier", 1, create_node((yyvsp[0].str), 0)))); }
#line 1349 "parser.tab.c"
    break;

  case 26: /* parameter: expression  */
#line 108 "parser.y"
                 { (yyval.node) = create_node("parameter", 1, (yyvsp[0].node)); }
#line 1355 "parser.tab.c"
    break;

  case 27: /* attribution: identifier '=' expression ';'  */
#line 112 "parser.y"
                                  { (yyval.node) = create_node("attribution", 2, (yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1361 "parser.tab.c"
    break;

  case 28: /* attribution: identifier ASSIGN_OP expression  */
#line 113 "parser.y"
                                      { (yyval.node) = create_node("assign_op", 3, (yyvsp[-2].node), create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1367 "parser.tab.c"
    break;

  case 29: /* attribution: identifier INC_DEC_OP  */
#line 114 "parser.y"
                            { (yyval.node) = create_node("inc_dec_op", 2, (yyvsp[-1].node), create_node((yyvsp[0].str), 0)); }
#line 1373 "parser.tab.c"
    break;

  case 30: /* if_statement: IF '(' comparison ')' '{' statement_list '}'  */
#line 118 "parser.y"
                                                 { (yyval.node) = create_node("if_statement", 2, (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1379 "parser.tab.c"
    break;

  case 31: /* if_statement: IF '(' comparison ')' '{' statement_list '}' ELSE '{' statement_list '}'  */
#line 119 "parser.y"
                                                                               { (yyval.node) = create_node("if_statement", 3, (yyvsp[-8].node), (yyvsp[-5].node), (yyvsp[-1].node)); }
#line 1385 "parser.tab.c"
    break;

  case 32: /* if_statement: IF '(' comparison ')' '{' statement_list '}' ELSE if_statement  */
#line 120 "parser.y"
                                                                     { (yyval.node) = create_node("if_statement", 3, (yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[0].node)); }
#line 1391 "parser.tab.c"
    break;

  case 33: /* comparison: expression RELATIONAL_OP expression  */
#line 124 "parser.y"
                                        { (yyval.node) = create_node("relacional_op", 3, (yyvsp[-2].node), create_node((yyvsp[-1].str),0),(yyvsp[0].node)); }
#line 1397 "parser.tab.c"
    break;

  case 34: /* comparison: comparison LOGICAL_OP comparison  */
#line 125 "parser.y"
                                       { (yyval.node) = create_node("logical_op", 3, (yyvsp[-2].node), create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1403 "parser.tab.c"
    break;

  case 35: /* comparison: identifier  */
#line 126 "parser.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 1409 "parser.tab.c"
    break;

  case 36: /* comparison: function  */
#line 127 "parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1415 "parser.tab.c"
    break;

  case 37: /* loop_statement: WHILE '(' comparison ')' '{' statement_list '}'  */
#line 130 "parser.y"
                                                    { (yyval.node) = create_node("loop_statement", 2, (yyvsp[-4].node), (yyvsp[-1].node)); }
#line 1421 "parser.tab.c"
    break;

  case 38: /* return_statement: RETURN expression ';'  */
#line 134 "parser.y"
                          { (yyval.node) = create_node("return_statement", 1, (yyvsp[-1].node)); }
#line 1427 "parser.tab.c"
    break;

  case 39: /* return_statement: RETURN ';'  */
#line 135 "parser.y"
                 { (yyval.node) = create_node("return_statement", 0); }
#line 1433 "parser.tab.c"
    break;

  case 40: /* expression: NUM  */
#line 139 "parser.y"
        { (yyval.node) = create_node("literal_value", 1, create_node((yyvsp[0].str), 0)); }
#line 1439 "parser.tab.c"
    break;

  case 41: /* expression: STRING_LITERAL  */
#line 140 "parser.y"
                     { (yyval.node) = create_node("string_literal", 1, create_node((yyvsp[0].str), 0)); }
#line 1445 "parser.tab.c"
    break;

  case 42: /* expression: identifier  */
#line 141 "parser.y"
                 { (yyval.node) = (yyvsp[0].node); }
#line 1451 "parser.tab.c"
    break;

  case 43: /* expression: expression '+' expression  */
#line 142 "parser.y"
                                { (yyval.node) = create_node("add", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1457 "parser.tab.c"
    break;

  case 44: /* expression: expression '-' expression  */
#line 143 "parser.y"
                                { (yyval.node) = create_node("subtract", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1463 "parser.tab.c"
    break;

  case 45: /* expression: expression '*' expression  */
#line 144 "parser.y"
                                { (yyval.node) = create_node("multiply", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1469 "parser.tab.c"
    break;

  case 46: /* expression: expression '/' expression  */
#line 145 "parser.y"
                                { (yyval.node) = create_node("divide", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1475 "parser.tab.c"
    break;

  case 47: /* expression: expression BITWISE_OP expression  */
#line 146 "parser.y"
                                       { (yyval.node) = create_node("bitwise_op", 3, (yyvsp[-2].node), create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1481 "parser.tab.c"
    break;

  case 48: /* expression: identifier INC_DEC_OP  */
#line 147 "parser.y"
                            { (yyval.node) = create_node("inc_dec_op", 2, (yyvsp[-1].node), create_node((yyvsp[0].str), 0)); }
#line 1487 "parser.tab.c"
    break;

  case 49: /* expression: PREPROCESSOR_OP expression  */
#line 148 "parser.y"
                                 { (yyval.node) = create_node("preprocessor_op", 2, create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1493 "parser.tab.c"
    break;

  case 50: /* expression: UNARY_OP expression  */
#line 149 "parser.y"
                          { (yyval.node) = create_node("unary_op", 2, create_node((yyvsp[-1].str), 0), (yyvsp[0].node)); }
#line 1499 "parser.tab.c"
    break;

  case 51: /* expression: expression TERNARY_OP expression ':' expression  */
#line 150 "parser.y"
                                                      { (yyval.node) = create_node("ternary_op", 4, (yyvsp[-4].node), create_node((yyvsp[-3].str), 0), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1505 "parser.tab.c"
    break;

  case 52: /* expression: '(' expression ')'  */
#line 151 "parser.y"
                         { (yyval.node) = (yyvsp[-1].node); }
#line 1511 "parser.tab.c"
    break;

  case 53: /* expression: '{' expression_list '}'  */
#line 152 "parser.y"
                              { (yyval.node) = create_node("expression_list", 1, (yyvsp[-1].node)); }
#line 1517 "parser.tab.c"
    break;

  case 54: /* expression: function  */
#line 153 "parser.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1523 "parser.tab.c"
    break;

  case 55: /* expression_list: expression  */
#line 157 "parser.y"
               { (yyval.node) = create_node("expression_list", 1, (yyvsp[0].node)); }
#line 1529 "parser.tab.c"
    break;

  case 56: /* expression_list: expression_list ',' expression  */
#line 158 "parser.y"
                                     { (yyval.node) = create_node("expression_list", 2, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1535 "parser.tab.c"
    break;


#line 1539 "parser.tab.c"

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

#line 160 "parser.y"


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
