%option yylineno
%{
#include <stdio.h>
#include <time.h>
#include "y.tab.h"
%}


T	[OLJISTZ]
L	[A-Z]|"CTRL"|"TAB"|"SHIFT"|"ALT"|"SPACE"|"ENTER"|"UP"|"DOWN"|"LEFT"|"RIGHT"
ID	[a-zA-Z][a-zA-Z0-9_]*
NUM	[0-9][0-9]*

%%

"#".* {};
[ \t]   { };
"+"     return(PLUS);
"-"     return(MINUS);
"*"     return(MUL);
"/"     return(DIV);

"=="    return(EQ);
"!="    return(NOTEQUAL);
">="    return(GE);
">"     return(GT);
"<="    return(LE);
"<"     return(LT);
"!" return (NOT);

"=" return(ASSIGN);
"grid" return(GRID);
"start" return(START);
"conf" return(CONF);
"score" return(SCORE);

"line1" return(LINE1);
"line2" return(LINE2);
"line3" return(LINE3);
"line4" return(LINE4);

"shape" return(SHAPE);
"delete" return(DELETE);


"pause" return(PAUSE);
"pausebool" return(PAUSE_BOOL);
"time" return (TIME);

"down" return(DOWN);
"left" return(LEFT);
"right" return(RIGHT);
"up" return(UP);
"clockwise" return(CLOCKWISE);
"anticlockwise" return(ANTICLOCKWISE);

"init" return(INIT);
"if" return(IF);
"then" return (THEN);
"else" return(ELSE);
"endif" return(ENDIF);
"and" return (AND);
"or" return (OR);
"not" return(NOT);
"do" return(DO);
"while" return(WHILE);
"endwhile" return(ENDWHILE);
"tick" return(TICK);
"endtick" return(ENDTICK);
"true" return(TRUE);
"false" return(FALSE);
"lost" return (LOST);
"win" return (WIN);
"KEY_"{L} { strcpy(yylval.var_name, yytext); return KEY;} 
"SHAPE_"{T} { strcpy(yylval.var_name, yytext); return SHAPE;} 
"\n"   {};
"%" return(EOP);
{ID}	{strcpy(yylval.var_name, yytext); return(ID);}
{NUM}   {strcpy(yylval.var_name,yytext); return(NUM);}
%%
