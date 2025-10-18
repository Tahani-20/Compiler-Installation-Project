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

#define MAX_IDS 100
char* id_list[MAX_IDS];
int id_count = 0;

void print_production(const char *production_name) {
    printf("%s", production_name);
}

extern void insert_symbol(const char* lexeme, const char* type);
extern void print_symbol_table();

void yyerror(const char *s);
int yylex(void);

#line 91 "parser.tab.c"

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
  YYSYMBOL_LOWER_THAN_ELSE = 3,            /* LOWER_THAN_ELSE  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_PROGRAM = 7,                    /* PROGRAM  */
  YYSYMBOL_VAR = 8,                        /* VAR  */
  YYSYMBOL_BEGIN_KEYWORD = 9,              /* BEGIN_KEYWORD  */
  YYSYMBOL_END = 10,                       /* END  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_THEN = 12,                      /* THEN  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_TO = 17,                        /* TO  */
  YYSYMBOL_PROCEDURE = 18,                 /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 19,                  /* FUNCTION  */
  YYSYMBOL_FORWARD = 20,                   /* FORWARD  */
  YYSYMBOL_TYPE = 21,                      /* TYPE  */
  YYSYMBOL_ARRAY = 22,                     /* ARRAY  */
  YYSYMBOL_RECORD = 23,                    /* RECORD  */
  YYSYMBOL_OF = 24,                        /* OF  */
  YYSYMBOL_NOT = 25,                       /* NOT  */
  YYSYMBOL_DIV = 26,                       /* DIV  */
  YYSYMBOL_MOD = 27,                       /* MOD  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_MULT = 32,                      /* MULT  */
  YYSYMBOL_EQUAL = 33,                     /* EQUAL  */
  YYSYMBOL_LESS = 34,                      /* LESS  */
  YYSYMBOL_LESSEQUAL = 35,                 /* LESSEQUAL  */
  YYSYMBOL_GREATER = 36,                   /* GREATER  */
  YYSYMBOL_GREATEREQUAL = 37,              /* GREATEREQUAL  */
  YYSYMBOL_NOTEQUAL = 38,                  /* NOTEQUAL  */
  YYSYMBOL_DOT = 39,                       /* DOT  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_COLON = 41,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 42,                 /* SEMICOLON  */
  YYSYMBOL_DOTDOT = 43,                    /* DOTDOT  */
  YYSYMBOL_LPAREN = 44,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 45,                    /* RPAREN  */
  YYSYMBOL_LBRACKET = 46,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 47,                  /* RBRACKET  */
  YYSYMBOL_ASSIGN = 48,                    /* ASSIGN  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_Program = 50,                   /* Program  */
  YYSYMBOL_TypeDefinitions = 51,           /* TypeDefinitions  */
  YYSYMBOL_TypeDefinition = 52,            /* TypeDefinition  */
  YYSYMBOL_VariableDeclarations = 53,      /* VariableDeclarations  */
  YYSYMBOL_VariableDeclaration = 54,       /* VariableDeclaration  */
  YYSYMBOL_IdentifierList = 55,            /* IdentifierList  */
  YYSYMBOL_Type = 56,                      /* Type  */
  YYSYMBOL_FieldList = 57,                 /* FieldList  */
  YYSYMBOL_Constant = 58,                  /* Constant  */
  YYSYMBOL_SubprogramDeclarations = 59,    /* SubprogramDeclarations  */
  YYSYMBOL_SubprogramDeclaration = 60,     /* SubprogramDeclaration  */
  YYSYMBOL_ProcedureDeclaration = 61,      /* ProcedureDeclaration  */
  YYSYMBOL_ProcedureBody = 62,             /* ProcedureBody  */
  YYSYMBOL_FunctionDeclaration = 63,       /* FunctionDeclaration  */
  YYSYMBOL_FunctionBody = 64,              /* FunctionBody  */
  YYSYMBOL_ResultType = 65,                /* ResultType  */
  YYSYMBOL_FormalParameterList = 66,       /* FormalParameterList  */
  YYSYMBOL_Block = 67,                     /* Block  */
  YYSYMBOL_CompoundStatement = 68,         /* CompoundStatement  */
  YYSYMBOL_StatementSequence = 69,         /* StatementSequence  */
  YYSYMBOL_Statement = 70,                 /* Statement  */
  YYSYMBOL_SimpleStatement = 71,           /* SimpleStatement  */
  YYSYMBOL_AssignmentStatement = 72,       /* AssignmentStatement  */
  YYSYMBOL_ProcedureStatement = 73,        /* ProcedureStatement  */
  YYSYMBOL_StructuredStatement = 74,       /* StructuredStatement  */
  YYSYMBOL_IfStatement = 75,               /* IfStatement  */
  YYSYMBOL_WhileStatement = 76,            /* WhileStatement  */
  YYSYMBOL_ForStatement = 77,              /* ForStatement  */
  YYSYMBOL_Expression = 78,                /* Expression  */
  YYSYMBOL_RelationalOp = 79,              /* RelationalOp  */
  YYSYMBOL_SimpleExpression = 80,          /* SimpleExpression  */
  YYSYMBOL_AddOp = 81,                     /* AddOp  */
  YYSYMBOL_Term = 82,                      /* Term  */
  YYSYMBOL_MulOp = 83,                     /* MulOp  */
  YYSYMBOL_Factor = 84,                    /* Factor  */
  YYSYMBOL_FunctionReference = 85,         /* FunctionReference  */
  YYSYMBOL_Variable = 86,                  /* Variable  */
  YYSYMBOL_ComponentSelection = 87,        /* ComponentSelection  */
  YYSYMBOL_ActualParameterList = 88        /* ActualParameterList  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    53,    55,    57,    61,    65,    67,    69,
      73,    85,    90,    98,    99,   101,   105,   107,   108,   112,
     113,   116,   118,   119,   123,   124,   128,   136,   137,   141,
     149,   150,   154,   157,   159,   167,   178,   183,   188,   189,
     193,   194,   197,   199,   200,   204,   209,   214,   215,   216,
     217,   221,   222,   227,   232,   237,   238,   243,   244,   245,
     246,   247,   248,   252,   253,   258,   259,   260,   264,   265,
     270,   271,   272,   273,   277,   278,   279,   280,   281,   282,
     286,   291,   294,   296,   297,   300,   302,   303
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
  "\"end of file\"", "error", "\"invalid token\"", "LOWER_THAN_ELSE",
  "ID", "STRING", "INT", "PROGRAM", "VAR", "BEGIN_KEYWORD", "END", "IF",
  "THEN", "ELSE", "WHILE", "DO", "FOR", "TO", "PROCEDURE", "FUNCTION",
  "FORWARD", "TYPE", "ARRAY", "RECORD", "OF", "NOT", "DIV", "MOD", "AND",
  "OR", "PLUS", "MINUS", "MULT", "EQUAL", "LESS", "LESSEQUAL", "GREATER",
  "GREATEREQUAL", "NOTEQUAL", "DOT", "COMMA", "COLON", "SEMICOLON",
  "DOTDOT", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "ASSIGN",
  "$accept", "Program", "TypeDefinitions", "TypeDefinition",
  "VariableDeclarations", "VariableDeclaration", "IdentifierList", "Type",
  "FieldList", "Constant", "SubprogramDeclarations",
  "SubprogramDeclaration", "ProcedureDeclaration", "ProcedureBody",
  "FunctionDeclaration", "FunctionBody", "ResultType",
  "FormalParameterList", "Block", "CompoundStatement", "StatementSequence",
  "Statement", "SimpleStatement", "AssignmentStatement",
  "ProcedureStatement", "StructuredStatement", "IfStatement",
  "WhileStatement", "ForStatement", "Expression", "RelationalOp",
  "SimpleExpression", "AddOp", "Term", "MulOp", "Factor",
  "FunctionReference", "Variable", "ComponentSelection",
  "ActualParameterList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,    16,    43,     8,  -100,    39,    71,    62,    23,    37,
      73,    42,    10,    17,  -100,  -100,    60,    59,  -100,    77,
     103,    74,    35,    75,  -100,  -100,  -100,    21,    73,  -100,
    -100,   108,    17,    69,    76,  -100,    48,    80,    79,  -100,
       3,    63,     0,  -100,  -100,    73,    73,    19,     7,     7,
     111,  -100,     5,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,    78,  -100,  -100,  -100,   117,    81,    17,  -100,    73,
      65,   -15,    38,   121,     7,     7,  -100,    30,  -100,  -100,
       7,     7,   115,    57,   -10,  -100,  -100,  -100,   113,    83,
    -100,    48,     7,  -100,     3,  -100,    68,    17,    73,    90,
      93,  -100,    95,    91,    92,     7,  -100,    96,    48,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,     7,     7,
    -100,  -100,  -100,  -100,     7,    48,     7,  -100,  -100,    97,
      17,  -100,    70,    15,   133,     7,  -100,  -100,    98,  -100,
     125,    67,   -10,  -100,  -100,   123,   118,  -100,    17,  -100,
      52,  -100,  -100,  -100,   104,  -100,  -100,    48,     7,    17,
    -100,  -100,    25,  -100,   130,  -100,  -100,  -100,  -100,    48,
    -100
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,     7,     0,     0,
       0,     0,    21,     0,     4,    11,     0,     0,     5,     0,
       0,     0,     0,     0,    24,    25,    13,     0,    16,     6,
       8,     0,     0,     0,     0,     9,    42,     0,     0,    22,
       0,     0,     0,    12,    10,    33,    33,    82,     0,     0,
       0,    47,     0,    38,    40,    43,    44,    41,    48,    49,
      50,     0,    23,     2,    19,     0,     0,     0,    15,     0,
       0,     0,     0,     0,    85,     0,    81,    82,    75,    74,
       0,     0,     0,    55,    63,    68,    77,    76,     0,     0,
      37,    42,     0,    20,     0,    17,     0,     0,     0,     0,
       0,    83,    86,     0,     0,    85,    78,     0,    42,    67,
      65,    66,    62,    57,    58,    59,    60,    61,     0,     0,
      71,    72,    73,    70,     0,    42,     0,    39,    45,     0,
       0,    34,     0,     7,     0,    85,    46,    84,     0,    79,
      51,    56,    64,    69,    53,     0,     0,    18,     0,    28,
       0,    26,    27,    32,     0,    87,    80,    42,     0,     0,
      35,    36,     7,    52,     0,    14,    31,    29,    30,    42,
      54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,  -100,   140,   141,   139,   -20,   -29,  -100,    56,
    -100,   129,  -100,  -100,  -100,  -100,  -100,   106,    -9,   -21,
    -100,   -84,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -44,
    -100,    36,  -100,    40,  -100,   -78,  -100,   -36,  -100,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     7,     9,   150,    21,    17,    29,    42,    66,
      22,    23,    24,   151,    25,   167,   154,    71,   152,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   102,
     118,    83,   119,    84,   124,    85,    86,    87,    76,   103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    38,   106,    44,    82,    88,   138,   127,    41,    64,
      68,    77,    78,    79,    15,    90,   120,   121,   122,     1,
       3,    26,   123,    10,   140,    70,    70,    98,    19,    20,
      99,   104,    80,    10,    65,   149,   155,   107,    95,    27,
      28,   144,    69,     4,    36,   166,   143,    91,   128,    96,
       5,    81,    47,    19,    20,    61,    15,    36,    73,    48,
       6,    36,    49,    74,    50,    75,     8,    40,   131,    73,
      10,    13,    61,   163,   105,     8,    75,    15,   132,    14,
      98,    33,   145,   100,    18,   170,   109,   110,   111,    61,
     112,   113,   114,   115,   116,   117,   109,   110,   111,    31,
      32,   147,    30,    31,    67,    31,    97,    34,    31,   130,
      31,   148,    43,    45,   164,    89,    35,    39,    63,   160,
      46,    61,    62,    93,    94,   101,    92,   108,   125,   161,
     165,   126,   133,    61,   134,   135,   136,   153,   157,   137,
     158,   139,   159,   156,   146,   169,   162,    11,    12,    16,
     129,    37,    72,   168,   141,     0,     0,     0,     0,   142
};

static const yytype_int16 yycheck[] =
{
      36,    22,    80,    32,    48,    49,   105,    91,    28,     6,
      10,     4,     5,     6,     4,    10,    26,    27,    28,     7,
       4,     4,    32,     8,   108,    45,    46,    42,    18,    19,
      45,    75,    25,     8,    31,    20,   135,    81,    67,    22,
      23,   125,    42,     0,     9,    20,   124,    42,    92,    69,
      42,    44,     4,    18,    19,    91,     4,     9,    39,    11,
      21,     9,    14,    44,    16,    46,     4,    46,    97,    39,
       8,    48,   108,   157,    44,     4,    46,     4,    98,    42,
      42,     4,   126,    45,    42,   169,    29,    30,    31,   125,
      33,    34,    35,    36,    37,    38,    29,    30,    31,    40,
      41,   130,    42,    40,    41,    40,    41,     4,    40,    41,
      40,    41,     4,    44,   158,     4,    42,    42,    39,   148,
      44,   157,    42,     6,    43,     4,    48,    12,    15,   150,
     159,    48,    42,   169,    41,    40,    45,     4,    13,    47,
      17,    45,    24,    45,    47,    15,    42,     7,     7,    10,
      94,    22,    46,   162,   118,    -1,    -1,    -1,    -1,   119
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    50,     4,     0,    42,    21,    51,     4,    52,
       8,    52,    53,    48,    42,     4,    54,    55,    42,    18,
      19,    54,    59,    60,    61,    63,     4,    22,    23,    56,
      42,    40,    41,     4,     4,    42,     9,    60,    68,    42,
      46,    55,    57,     4,    56,    44,    44,     4,    11,    14,
      16,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    86,    42,    39,     6,    31,    58,    41,    10,    42,
      55,    66,    66,    39,    44,    46,    87,     4,     5,     6,
      25,    44,    78,    80,    82,    84,    85,    86,    78,     4,
      10,    42,    48,     6,    43,    56,    55,    41,    42,    45,
      45,     4,    78,    88,    78,    44,    84,    78,    12,    29,
      30,    31,    33,    34,    35,    36,    37,    38,    79,    81,
      26,    27,    28,    32,    83,    15,    48,    70,    78,    58,
      41,    56,    55,    42,    41,    40,    45,    47,    88,    45,
      70,    80,    82,    84,    70,    78,    47,    56,    41,    20,
      53,    62,    67,     4,    65,    88,    45,    13,    17,    24,
      56,    68,    42,    70,    78,    56,    20,    64,    67,    15,
      70
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    52,    53,    53,    53,
      54,    55,    55,    56,    56,    56,    57,    57,    57,    58,
      58,    59,    59,    59,    60,    60,    61,    62,    62,    63,
      64,    64,    65,    66,    66,    66,    67,    68,    69,    69,
      70,    70,    71,    71,    71,    72,    73,    74,    74,    74,
      74,    75,    75,    76,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    86,    87,    87,    87,    88,    88,    88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     8,     0,     3,     3,     3,     0,     3,     3,
       3,     1,     3,     1,     8,     3,     0,     3,     5,     1,
       2,     0,     2,     3,     1,     1,     7,     1,     1,     9,
       1,     1,     1,     0,     3,     5,     2,     3,     1,     3,
       1,     1,     0,     1,     1,     3,     4,     1,     1,     1,
       1,     4,     6,     4,     8,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       4,     2,     0,     2,     3,     0,     1,     3
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
  case 2: /* Program: PROGRAM ID SEMICOLON TypeDefinitions VariableDeclarations SubprogramDeclarations CompoundStatement DOT  */
#line 47 "parser.y"
    { 
        insert_symbol((yyvsp[-6].sval), "program");
        print_production("Program\n"); 
    }
#line 1288 "parser.tab.c"
    break;

  case 4: /* TypeDefinitions: TYPE TypeDefinition SEMICOLON  */
#line 56 "parser.y"
    { print_production("Type Definitions\n"); }
#line 1294 "parser.tab.c"
    break;

  case 6: /* TypeDefinition: ID ASSIGN Type  */
#line 62 "parser.y"
    { insert_symbol((yyvsp[-2].sval), "type"); print_production("Type definition\n"); }
#line 1300 "parser.tab.c"
    break;

  case 8: /* VariableDeclarations: VAR VariableDeclaration SEMICOLON  */
#line 68 "parser.y"
    { print_production("Variable Declarations\n"); }
#line 1306 "parser.tab.c"
    break;

  case 10: /* VariableDeclaration: IdentifierList COLON Type  */
#line 74 "parser.y"
    { 
        for (int i = 0; i < id_count; i++) {
            insert_symbol(id_list[i], "variable");
            free(id_list[i]);
        }
        id_count = 0;
        print_production("Variable Declaration\n"); 
    }
#line 1319 "parser.tab.c"
    break;

  case 11: /* IdentifierList: ID  */
#line 86 "parser.y"
    {
        if (id_count < MAX_IDS)
            id_list[id_count++] = strdup((yyvsp[0].sval));
    }
#line 1328 "parser.tab.c"
    break;

  case 12: /* IdentifierList: IdentifierList COMMA ID  */
#line 91 "parser.y"
    {
        if (id_count < MAX_IDS)
            id_list[id_count++] = strdup((yyvsp[0].sval));
    }
#line 1337 "parser.tab.c"
    break;

  case 14: /* Type: ARRAY LBRACKET Constant DOTDOT Constant RBRACKET OF Type  */
#line 100 "parser.y"
    { print_production("Array type\n"); }
#line 1343 "parser.tab.c"
    break;

  case 15: /* Type: RECORD FieldList END  */
#line 102 "parser.y"
    { print_production("Record type\n"); }
#line 1349 "parser.tab.c"
    break;

  case 26: /* ProcedureDeclaration: PROCEDURE ID LPAREN FormalParameterList RPAREN SEMICOLON ProcedureBody  */
#line 129 "parser.y"
    { 
        insert_symbol((yyvsp[-5].sval), "procedure");
        print_production("Procedure declaration\n"); 
    }
#line 1358 "parser.tab.c"
    break;

  case 29: /* FunctionDeclaration: FUNCTION ID LPAREN FormalParameterList RPAREN COLON ResultType SEMICOLON FunctionBody  */
#line 142 "parser.y"
    { 
        insert_symbol((yyvsp[-7].sval), "function");
        print_production("Function declaration\n"); 
    }
#line 1367 "parser.tab.c"
    break;

  case 34: /* FormalParameterList: IdentifierList COLON Type  */
#line 160 "parser.y"
    { 
        for (int i = 0; i < id_count; i++) {
            insert_symbol(id_list[i], "parameter");
            free(id_list[i]);
          }
        id_count = 0;
    }
#line 1379 "parser.tab.c"
    break;

  case 35: /* FormalParameterList: FormalParameterList SEMICOLON IdentifierList COLON Type  */
#line 168 "parser.y"
    { 
        for (int i = 0; i < id_count; i++) {
            insert_symbol(id_list[i], "parameter");
            free(id_list[i]);
        }
        id_count = 0;
    }
#line 1391 "parser.tab.c"
    break;

  case 36: /* Block: VariableDeclarations CompoundStatement  */
#line 179 "parser.y"
    { print_production("Block\n"); }
#line 1397 "parser.tab.c"
    break;

  case 37: /* CompoundStatement: BEGIN_KEYWORD StatementSequence END  */
#line 184 "parser.y"
    { print_production("Compound statement\n"); }
#line 1403 "parser.tab.c"
    break;

  case 45: /* AssignmentStatement: Variable ASSIGN Expression  */
#line 205 "parser.y"
    { print_production("Assignment statement\n"); }
#line 1409 "parser.tab.c"
    break;

  case 46: /* ProcedureStatement: ID LPAREN ActualParameterList RPAREN  */
#line 210 "parser.y"
    { print_production("Procedure call\n"); }
#line 1415 "parser.tab.c"
    break;

  case 52: /* IfStatement: IF Expression THEN Statement ELSE Statement  */
#line 223 "parser.y"
    { print_production("If statement\n"); }
#line 1421 "parser.tab.c"
    break;

  case 53: /* WhileStatement: WHILE Expression DO Statement  */
#line 228 "parser.y"
    { print_production("While statement\n"); }
#line 1427 "parser.tab.c"
    break;

  case 54: /* ForStatement: FOR ID ASSIGN Expression TO Expression DO Statement  */
#line 233 "parser.y"
    { print_production("For statement\n"); }
#line 1433 "parser.tab.c"
    break;

  case 56: /* Expression: SimpleExpression RelationalOp SimpleExpression  */
#line 239 "parser.y"
    { print_production("Expression with relation\n"); }
#line 1439 "parser.tab.c"
    break;

  case 64: /* SimpleExpression: SimpleExpression AddOp Term  */
#line 254 "parser.y"
    { print_production("Simple expression\n"); }
#line 1445 "parser.tab.c"
    break;

  case 69: /* Term: Term MulOp Factor  */
#line 266 "parser.y"
    { print_production("Term with operation \n"); }
#line 1451 "parser.tab.c"
    break;

  case 80: /* FunctionReference: ID LPAREN ActualParameterList RPAREN  */
#line 287 "parser.y"
    { print_production("Function reference \n"); }
#line 1457 "parser.tab.c"
    break;


#line 1461 "parser.tab.c"

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

#line 306 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    printf("Starting YACC Parser...\n");
    yyparse();
    print_symbol_table();
    return 0;
}  
