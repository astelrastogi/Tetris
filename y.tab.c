/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLUS = 258,
     MINUS = 259,
     MUL = 260,
     DIV = 261,
     EQ = 262,
     NOTEQUAL = 263,
     GE = 264,
     GT = 265,
     LE = 266,
     LT = 267,
     AND = 268,
     OR = 269,
     NOT = 270,
     INIT = 271,
     ASSIGN = 272,
     IF = 273,
     THEN = 274,
     ELSE = 275,
     ENDIF = 276,
     DO = 277,
     WHILE = 278,
     ENDWHILE = 279,
     TICK = 280,
     ENDTICK = 281,
     EOP = 282,
     GRID = 283,
     START = 284,
     CONF = 285,
     SCORE = 286,
     LINE1 = 287,
     LINE2 = 288,
     LINE3 = 289,
     LINE4 = 290,
     DELETE = 291,
     PAUSE = 292,
     CLOCKWISE = 293,
     ANTICLOCKWISE = 294,
     UP = 295,
     RIGHT = 296,
     DOWN = 297,
     LEFT = 298,
     TRUE = 299,
     FALSE = 300,
     ID = 301,
     NUM = 302,
     KEY = 303,
     SHAPE = 304,
     PAUSE_BOOL = 305,
     LOST = 306,
     WIN = 307,
     TIME = 308
   };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
#define MUL 260
#define DIV 261
#define EQ 262
#define NOTEQUAL 263
#define GE 264
#define GT 265
#define LE 266
#define LT 267
#define AND 268
#define OR 269
#define NOT 270
#define INIT 271
#define ASSIGN 272
#define IF 273
#define THEN 274
#define ELSE 275
#define ENDIF 276
#define DO 277
#define WHILE 278
#define ENDWHILE 279
#define TICK 280
#define ENDTICK 281
#define EOP 282
#define GRID 283
#define START 284
#define CONF 285
#define SCORE 286
#define LINE1 287
#define LINE2 288
#define LINE3 289
#define LINE4 290
#define DELETE 291
#define PAUSE 292
#define CLOCKWISE 293
#define ANTICLOCKWISE 294
#define UP 295
#define RIGHT 296
#define DOWN 297
#define LEFT 298
#define TRUE 299
#define FALSE 300
#define ID 301
#define NUM 302
#define KEY 303
#define SHAPE 304
#define PAUSE_BOOL 305
#define LOST 306
#define WIN 307
#define TIME 308




/* Copy the first part of user declarations.  */
#line 1 "tetris.y"

/* Definition section */
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int yylex(void);
	int yyerror(const char *s);
	int yydebug = 1;
	int success = 1;
	int expn_type = 0;
	int tab_count = 0;
	int temp;
	int idx = 0;
	int table_idx = 0;
	struct symbol_table{char var_name[30]; int type;} sym[20];
	extern int lookup_in_table(char var[30]);
	extern void insert_to_table(char var[30], int type);
	extern void print_tabs();


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "tetris.y"
{
	int data_type;
	char var_name[30];
}
/* Line 193 of yacc.c.  */
#line 227 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 240 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   303

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  163

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,    12,    19,    22,    23,    24,    29,
      30,    35,    38,    42,    48,    52,    54,    56,    58,    60,
      62,    64,    66,    67,    68,    69,    77,    78,    82,    83,
      88,    89,    94,    95,   100,   101,   106,   108,   110,   112,
     114,   116,   117,   122,   123,   128,   129,   134,   135,   140,
     141,   146,   147,   152,   153,   158,   159,   164,   165,   169,
     171,   173,   175,   176,   177,   183,   185,   187,   192,   193,
     197,   198,   203,   204,   206,   208,   210,   212,   214,   216,
     218,   219,   220,   226,   227,   232,   233,   238,   241,   245,
     249,   250,   251
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    -1,    28,    16,    47,    47,    56,    57,
      27,    -1,    28,    16,    47,    47,    57,     1,    -1,    57,
      58,    -1,    -1,    -1,    46,    16,    59,    67,    -1,    -1,
      46,    17,    60,    67,    -1,    61,    21,    -1,    61,    65,
      21,    -1,    22,    57,    23,    73,    24,    -1,    25,    57,
      26,    -1,    86,    -1,    85,    -1,    91,    -1,    96,    -1,
      97,    -1,    98,    -1,    99,    -1,    -1,    -1,    -1,    18,
      62,    73,    63,    19,    64,    57,    -1,    -1,    20,    66,
      57,    -1,    -1,    67,     3,    68,    67,    -1,    -1,    67,
       4,    69,    67,    -1,    -1,    67,     5,    70,    67,    -1,
      -1,    67,     6,    71,    67,    -1,    72,    -1,    31,    -1,
      53,    -1,    46,    -1,    47,    -1,    -1,    73,    13,    74,
      73,    -1,    -1,    73,    14,    75,    73,    -1,    -1,    67,
      11,    76,    67,    -1,    -1,    67,     9,    77,    67,    -1,
      -1,    67,    10,    78,    67,    -1,    -1,    67,    12,    79,
      67,    -1,    -1,    67,     8,    80,    67,    -1,    -1,    67,
       7,    81,    67,    -1,    -1,    15,    82,    73,    -1,    52,
      -1,    51,    -1,    50,    -1,    -1,    -1,    28,    83,    67,
      84,    67,    -1,    44,    -1,    45,    -1,    29,    16,    47,
      47,    -1,    -1,    30,    87,    88,    -1,    -1,    48,    89,
      90,    88,    -1,    -1,    40,    -1,    42,    -1,    43,    -1,
      41,    -1,    38,    -1,    39,    -1,    37,    -1,    -1,    -1,
      31,    92,    17,    93,    72,    -1,    -1,    31,    94,     3,
      67,    -1,    -1,    31,    95,     4,    67,    -1,    49,    73,
      -1,    53,     3,    67,    -1,    36,    67,    67,    -1,    -1,
      -1,    32,   100,    73,   101,    73,    73,    73,    33,    73,
      73,    73,    73,    34,    73,    73,    73,    73,    35,    73,
      73,    73,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    44,    53,    55,    55,    57,    57,    65,
      65,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    86,    86,    86,    86,    88,    88,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    95,    96,    98,
      99,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   112,   112,   112,   113,   113,   116,   118,   118,
     122,   122,   122,   123,   127,   131,   135,   139,   143,   147,
     149,   149,   149,   150,   150,   151,   151,   153,   155,   156,
     158,   158,   158
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "MUL", "DIV", "EQ",
  "NOTEQUAL", "GE", "GT", "LE", "LT", "AND", "OR", "NOT", "INIT", "ASSIGN",
  "IF", "THEN", "ELSE", "ENDIF", "DO", "WHILE", "ENDWHILE", "TICK",
  "ENDTICK", "EOP", "GRID", "START", "CONF", "SCORE", "LINE1", "LINE2",
  "LINE3", "LINE4", "DELETE", "PAUSE", "CLOCKWISE", "ANTICLOCKWISE", "UP",
  "RIGHT", "DOWN", "LEFT", "TRUE", "FALSE", "ID", "NUM", "KEY", "SHAPE",
  "PAUSE_BOOL", "LOST", "WIN", "TIME", "$accept", "grid", "@1",
  "STATEMENTS", "STATEMENT", "@2", "@3", "IF_BLOCK", "@4", "@5", "@6",
  "ELSE_BLOCK", "@7", "A_EXPN", "@8", "@9", "@10", "@11", "TERMINALS",
  "BOOL_RET", "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19",
  "@20", "@21", "@22", "ST_STMENT", "CONF_STMENT", "@23", "CONFS", "@24",
  "ACTION", "SCORE_STMENT", "@25", "@26", "@27", "@28", "SHAPE_STMENT",
  "TIME_STMENT", "DELETE_STMENT", "CUSTOM_SHAPE", "@29", "@30", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    56,    55,    55,    57,    57,    59,    58,    60,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    62,    63,    64,    61,    66,    65,    68,    67,
      69,    67,    70,    67,    71,    67,    67,    67,    67,    72,
      72,    74,    73,    75,    73,    76,    73,    77,    73,    78,
      73,    79,    73,    80,    73,    81,    73,    82,    73,    73,
      73,    73,    83,    84,    73,    73,    73,    85,    87,    86,
      89,    88,    88,    90,    90,    90,    90,    90,    90,    90,
      92,    93,    91,    94,    91,    95,    91,    96,    97,    98,
     100,   101,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     7,     6,     2,     0,     0,     4,     0,
       4,     2,     3,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     0,     7,     0,     3,     0,     4,
       0,     4,     0,     4,     0,     4,     1,     1,     1,     1,
       1,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     3,     1,
       1,     1,     0,     0,     5,     1,     1,     4,     0,     3,
       0,     4,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     5,     0,     4,     0,     4,     2,     3,     3,
       0,     0,    22
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     2,     6,     0,     0,
       4,    22,     6,     6,     0,    68,    80,    90,     0,     0,
       0,     0,     5,     0,    16,    15,    17,    18,    19,    20,
      21,     3,     0,     0,     0,     0,    72,     0,     0,     0,
       0,    37,    39,    40,    38,     0,    36,     7,     9,    57,
      62,    65,    66,    61,    60,    59,     0,    87,     0,    26,
      11,     0,    23,     0,    14,     0,    70,    69,    81,     0,
       0,    91,    28,    30,    32,    34,    89,     0,     0,     0,
       0,    55,    53,    47,    49,    45,    51,    41,    43,    88,
       6,    12,     0,     0,    67,     0,     0,    84,    86,     0,
       0,     0,     0,     0,     8,    10,    58,    63,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    24,    13,    79,
      77,    78,    73,    76,    74,    75,    72,    82,     0,    29,
      31,    33,    35,     0,    56,    54,    48,    50,    46,    52,
      42,    44,     6,    71,     0,    64,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    22,    77,    78,    23,    32,    92,
     142,    61,    90,    56,   100,   101,   102,   103,    46,    57,
     114,   115,   112,   110,   111,   113,   109,   108,    79,    80,
     133,    24,    25,    36,    67,    95,   126,    26,    37,    96,
      38,    39,    27,    28,    29,    30,    40,    99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -31
static const yytype_int16 yypact[] =
{
     -27,    -9,    11,   -28,   -31,   -25,    26,   -31,    12,   165,
     -31,   -31,   -31,   -31,    19,   -31,     0,   -31,   -15,    29,
     129,    44,   -31,    39,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   129,   190,   215,     3,     9,    45,    65,    66,
     129,   -31,   -31,   -31,   -31,    20,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   291,    73,   -15,   -31,
     -31,    61,    73,   129,   -31,    46,   -31,   -31,   -31,   -15,
     -15,    73,   -31,   -31,   -31,   -31,    50,   -15,   -15,   129,
     -15,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,    50,
     -31,   -31,    80,     4,   -31,    38,    42,    50,    50,   129,
     -15,   -15,   -15,   -15,    50,    50,   -31,    50,   -15,   -15,
     -15,   -15,   -15,   -15,   129,   129,   240,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     9,   -31,   119,    85,
      85,   -31,   -31,   -15,    50,    50,    50,    50,    50,    50,
     -31,    79,   -31,   -31,   119,    50,   240,     7,   129,   119,
     119,   119,    -5,   129,   119,   119,   119,     1,   129,   119,
     119,   119,    73
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,   -31,    -7,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,    -6,   -31,   -31,   -31,   -31,     5,   -30,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -26,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
{
       9,     1,    62,   -83,   -85,    33,    34,     3,    87,    88,
      71,     4,    45,    10,    87,    88,    41,    87,    88,     5,
      87,    88,     6,    72,    73,    74,    75,    -6,   118,   153,
      11,    42,    43,    93,    12,    35,   158,    13,    44,    76,
     148,    14,    15,    16,    17,    47,    48,    58,    18,   106,
      65,    41,    89,    72,    73,    74,    75,    66,    19,    59,
      60,    20,    68,    97,    98,    21,    42,    43,    69,   128,
      70,   104,   105,    44,   107,   119,   120,   121,   122,   123,
     124,   125,    91,   116,   140,   141,    87,    88,    42,    43,
      74,    75,    87,    94,   129,   130,   131,   132,   144,   117,
     143,   127,   134,   135,   136,   137,   138,   139,     0,     0,
       0,     0,     0,     0,   147,     0,     0,     0,   149,   150,
     151,   152,     0,   154,   155,   156,   157,   145,   159,   160,
     161,   162,    87,    88,    49,   146,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    50,     0,     0,
      41,     0,     0,     0,     0,     0,     0,    50,     0,     0,
      41,     0,     0,    51,    52,    42,    43,     0,     0,    53,
      54,    55,    44,    51,    52,    42,    43,     0,     0,    53,
      54,    55,    44,    11,     0,     0,     0,    12,     0,     0,
      13,     0,    31,     0,    14,    15,    16,    17,     0,     0,
       0,    18,     0,     0,     0,     0,     0,     0,    11,     0,
       0,    19,    12,    63,    20,    13,     0,     0,    21,    14,
      15,    16,    17,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,    11,     0,     0,    19,    12,     0,    20,
      13,    64,     0,    21,    14,    15,    16,    17,     0,     0,
       0,    18,     0,     0,     0,     0,     0,     0,    11,     0,
       0,    19,    12,     0,    20,    13,     0,     0,    21,    14,
      15,    16,    17,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,    20,
       0,     0,     0,    21,    72,    73,    74,    75,    81,    82,
      83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
       7,    28,    32,     3,     4,    12,    13,    16,    13,    14,
      40,     0,    18,     1,    13,    14,    31,    13,    14,    47,
      13,    14,    47,     3,     4,     5,     6,     1,    24,    34,
      18,    46,    47,    63,    22,    16,    35,    25,    53,    45,
      33,    29,    30,    31,    32,    16,    17,     3,    36,    79,
      47,    31,    58,     3,     4,     5,     6,    48,    46,    20,
      21,    49,    17,    69,    70,    53,    46,    47,     3,    99,
       4,    77,    78,    53,    80,    37,    38,    39,    40,    41,
      42,    43,    21,    90,   114,   115,    13,    14,    46,    47,
       5,     6,    13,    47,   100,   101,   102,   103,   128,    19,
     126,    96,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   133,   158,   159,
     160,   161,    13,    14,    15,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    44,    45,    46,    47,    -1,    -1,    50,
      51,    52,    53,    44,    45,    46,    47,    -1,    -1,    50,
      51,    52,    53,    18,    -1,    -1,    -1,    22,    -1,    -1,
      25,    -1,    27,    -1,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    46,    22,    23,    49,    25,    -1,    -1,    53,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    46,    22,    -1,    49,
      25,    26,    -1,    53,    29,    30,    31,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    46,    22,    -1,    49,    25,    -1,    -1,    53,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    53,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    55,    16,     0,    47,    47,    56,    57,    57,
       1,    18,    22,    25,    29,    30,    31,    32,    36,    46,
      49,    53,    58,    61,    85,    86,    91,    96,    97,    98,
      99,    27,    62,    57,    57,    16,    87,    92,    94,    95,
     100,    31,    46,    47,    53,    67,    72,    16,    17,    15,
      28,    44,    45,    50,    51,    52,    67,    73,     3,    20,
      21,    65,    73,    23,    26,    47,    48,    88,    17,     3,
       4,    73,     3,     4,     5,     6,    67,    59,    60,    82,
      83,     7,     8,     9,    10,    11,    12,    13,    14,    67,
      66,    21,    63,    73,    47,    89,    93,    67,    67,   101,
      68,    69,    70,    71,    67,    67,    73,    67,    81,    80,
      77,    78,    76,    79,    74,    75,    57,    19,    24,    37,
      38,    39,    40,    41,    42,    43,    90,    72,    73,    67,
      67,    67,    67,    84,    67,    67,    67,    67,    67,    67,
      73,    73,    64,    88,    73,    67,    57,    73,    33,    73,
      73,    73,    73,    34,    73,    73,    73,    73,    35,    73,
      73,    73,    73
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 44 "tetris.y"
    {
				{
					printf("int grid_x = %s, grid_y = %s\n", (yyvsp[(3) - (4)].var_name), (yyvsp[(4) - (4)].var_name));}
					//printf("int rows=7, col=4;");
					//printf("vector<vector<int> > block(rows,vector<int>(col,0));");
					//printf("vector<int> v={2,3,1};");
					//printf("block.push_back(v)");

				}
    break;

  case 4:
#line 53 "tetris.y"
    {yyerror("please enter '#'");}
    break;

  case 7:
#line 57 "tetris.y"
    {
					insert_to_table((yyvsp[(1) - (2)].var_name),0);
					printf("int %s = ",(yyvsp[(1) - (2)].var_name));
				}
    break;

  case 8:
#line 61 "tetris.y"
    {
					printf(";\n");
				}
    break;

  case 9:
#line 65 "tetris.y"
    {
					if(lookup_in_table((yyvsp[(1) - (2)].var_name))==-1){
						insert_to_table((yyvsp[(1) - (2)].var_name),0);
					}
					printf("int %s = ",(yyvsp[(1) - (2)].var_name));
				}
    break;

  case 10:
#line 71 "tetris.y"
    {
					printf(";\n");
				}
    break;

  case 22:
#line 86 "tetris.y"
    {printf("if(");}
    break;

  case 23:
#line 86 "tetris.y"
    {printf(")\n");}
    break;

  case 24:
#line 86 "tetris.y"
    {printf("{");}
    break;

  case 25:
#line 86 "tetris.y"
    {printf("}");}
    break;

  case 26:
#line 88 "tetris.y"
    {printf("else\n{");}
    break;

  case 28:
#line 90 "tetris.y"
    {printf("+");}
    break;

  case 30:
#line 91 "tetris.y"
    {printf("-");}
    break;

  case 32:
#line 92 "tetris.y"
    {printf("*");}
    break;

  case 34:
#line 93 "tetris.y"
    {printf("/");}
    break;

  case 37:
#line 95 "tetris.y"
    {printf("score");}
    break;

  case 38:
#line 96 "tetris.y"
    {printf("time");}
    break;

  case 39:
#line 98 "tetris.y"
    {printf("%s",(yyvsp[(1) - (1)].var_name));}
    break;

  case 40:
#line 99 "tetris.y"
    {printf("%s",(yyvsp[(1) - (1)].var_name));}
    break;

  case 41:
#line 102 "tetris.y"
    {printf("&&");}
    break;

  case 43:
#line 103 "tetris.y"
    {printf("||");}
    break;

  case 45:
#line 104 "tetris.y"
    {printf("<=");}
    break;

  case 47:
#line 105 "tetris.y"
    {printf(">=");}
    break;

  case 49:
#line 106 "tetris.y"
    {printf(">");}
    break;

  case 51:
#line 107 "tetris.y"
    {printf("<");}
    break;

  case 53:
#line 108 "tetris.y"
    {printf("!=");}
    break;

  case 55:
#line 109 "tetris.y"
    {printf("==");}
    break;

  case 57:
#line 110 "tetris.y"
    {printf("!");}
    break;

  case 59:
#line 111 "tetris.y"
    {printf("win");}
    break;

  case 60:
#line 111 "tetris.y"
    {printf("lost");}
    break;

  case 61:
#line 111 "tetris.y"
    {printf("pause_bool");}
    break;

  case 62:
#line 112 "tetris.y"
    {printf("grid[");}
    break;

  case 63:
#line 112 "tetris.y"
    {printf("][");}
    break;

  case 64:
#line 112 "tetris.y"
    {printf("]");}
    break;

  case 65:
#line 113 "tetris.y"
    {printf("true");}
    break;

  case 66:
#line 113 "tetris.y"
    {printf("false");}
    break;

  case 67:
#line 116 "tetris.y"
    {printf("int start_x = %s, start_y = %s",(yyvsp[(3) - (4)].var_name), (yyvsp[(4) - (4)].var_name));}
    break;

  case 68:
#line 118 "tetris.y"
    {
			printf("void Game::trasformTetromino (int key) {\n");
			printf("    switch (key) {\n");
			}
    break;

  case 69:
#line 121 "tetris.y"
    {printf("\n}}\n");}
    break;

  case 70:
#line 122 "tetris.y"
    {printf("case %s:\n", (yyvsp[(1) - (1)].var_name));}
    break;

  case 73:
#line 123 "tetris.y"
    {
			printf("            tetromino.moveUp();\n");
			printf("            if (collideWithTetrominoes()) tetromino.moveDown();\n");
			printf("            break;\n");}
    break;

  case 74:
#line 127 "tetris.y"
    {
			printf("            tetromino.moveDown();\n");
			printf("            if (collideWithTetrominoes()) tetromino.moveUp();\n");
			printf("            break;\n");}
    break;

  case 75:
#line 131 "tetris.y"
    {
			printf("            tetromino.moveLeft();\n");
			printf("            if (collideWithTetrominoes()) tetromino.moveRight();\n");
			printf("            break;\n");}
    break;

  case 76:
#line 135 "tetris.y"
    {
			printf("            tetromino.moveRight();\n");
			printf("            if (collideWithTetrominoes()) tetromino.moveLeft();\n");
			printf("            break;\n");}
    break;

  case 77:
#line 139 "tetris.y"
    {
			printf("            tetromino.rotate();\n");
			printf("            if (collideWithTetrominoes()) tetromino.rotate(true);\n");
			printf("            break;\n");}
    break;

  case 78:
#line 143 "tetris.y"
    {
			printf("            tetromino.rotate(true);\n");
			printf("            if (collideWithTetrominoes()) tetromino.rotate();\n");
			printf("            break;\n");}
    break;

  case 79:
#line 147 "tetris.y"
    {printf("PAUSE_BOOL = !PAUSE_BOOL");}
    break;

  case 80:
#line 149 "tetris.y"
    {printf("score");}
    break;

  case 81:
#line 149 "tetris.y"
    {printf("=");}
    break;

  case 83:
#line 150 "tetris.y"
    {printf("score");}
    break;

  case 85:
#line 151 "tetris.y"
    {printf("score");}
    break;

  case 90:
#line 158 "tetris.y"
    {printf("temp_block[4][4] = ");}
    break;

  case 91:
#line 158 "tetris.y"
    {printf("? :");}
    break;

  case 92:
#line 161 "tetris.y"
    {printf("blocks.push_back()");}
    break;


/* Line 1267 of yacc.c.  */
#line 1930 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 164 "tetris.y"


int lookup_in_table(char var[30])
{
	for(int i=0; i<table_idx; i++)
	{
		if(strcmp(sym[i].var_name, var)==0)
			return sym[i].type;
	}
	return -1;
}
void insert_to_table(char var[30], int type)
{
	if(lookup_in_table(var)==-1)
	{
		strcpy(sym[table_idx].var_name,var);
		sym[table_idx].type = type;
		table_idx++;
	}
	else {
		printf("Multiple declaration of variable\n");
		yyerror("");
		exit(0);
	}
}

void print_tabs() {
	for(int i = 0; i < tab_count; i++){
		printf("\t");
	}
	return;
}

int main() {
	yyparse();
	return 0;
}
int yyerror(const char *msg) {
	extern int yylineno;
	printf("Parsing failed\nLine number: %d %s\n", yylineno, msg);
	success = 0;
	return 0;
}

