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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "tetris.y"
{
	int data_type;
	char var_name[30];
}
/* Line 1529 of yacc.c.  */
#line 160 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

