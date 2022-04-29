/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     ASSIGN = 268,
     GRID = 269,
     START = 270,
     CONF = 271,
     NOT = 272,
     SCORE = 273,
     LINE1 = 274,
     LINE2 = 275,
     LINE3 = 276,
     LINE4 = 277,
     DELETE = 278,
     CLOCKWISE = 279,
     ANTICLOCKWISE = 280,
     PAUSE = 281,
     UP = 282,
     ENDIF = 283,
     IF = 284,
     THEN = 285,
     DO = 286,
     WHILE = 287,
     TRUE = 288,
     FALSE = 289,
     EOL = 290,
     EOP = 291,
     T = 292,
     L = 293,
     ID = 294,
     NUM = 295,
     KEY = 296,
     SHAPE = 297,
     AND = 298,
     OR = 299,
     ENDWHILE = 300,
     TICK = 301,
     ENDTICK = 302,
     PAUSE_BOOL = 303,
     ELSE = 304,
     LOST = 305,
     WIN = 306,
     RIGHT = 307,
     DOWN = 308,
     LEFT = 309,
     TIME = 310,
     INIT = 311
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
#define ASSIGN 268
#define GRID 269
#define START 270
#define CONF 271
#define NOT 272
#define SCORE 273
#define LINE1 274
#define LINE2 275
#define LINE3 276
#define LINE4 277
#define DELETE 278
#define CLOCKWISE 279
#define ANTICLOCKWISE 280
#define PAUSE 281
#define UP 282
#define ENDIF 283
#define IF 284
#define THEN 285
#define DO 286
#define WHILE 287
#define TRUE 288
#define FALSE 289
#define EOL 290
#define EOP 291
#define T 292
#define L 293
#define ID 294
#define NUM 295
#define KEY 296
#define SHAPE 297
#define AND 298
#define OR 299
#define ENDWHILE 300
#define TICK 301
#define ENDTICK 302
#define PAUSE_BOOL 303
#define ELSE 304
#define LOST 305
#define WIN 306
#define RIGHT 307
#define DOWN 308
#define LEFT 309
#define TIME 310
#define INIT 311




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "tetris.y"
{
	int data_type;
	char var_name[30];
}
/* Line 1529 of yacc.c.  */
#line 166 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

