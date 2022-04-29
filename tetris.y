%{
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
%}

%union{
	int data_type;
	char var_name[30];
}

%token PLUS MINUS MUL DIV EQ NOTEQUAL GE GT LE LT AND OR NOT
%token INIT ASSIGN IF THEN ELSE ENDIF DO WHILE ENDWHILE TICK ENDTICK EOP
%token GRID START CONF SCORE LINE1 LINE2 LINE3 LINE4 DELETE PAUSE
%token CLOCKWISE ANTICLOCKWISE UP RIGHT DOWN LEFT TRUE FALSE ID NUM KEY SHAPE PAUSE_BOOL LOST WIN TIME 

%left OR
%left AND
%left GE LE NOTEQUAL GT LT 
%left PLUS MINUS
%left MUL DIV 
%left NOT

%type<var_name>ID NUM

%start grid

/* Rule Section */
%%
grid:	 		GRID INIT NUM NUM {printf("");
printf("#include <ctime>\n");
printf("#include <curses.h>\n");
printf("#include <unistd.h>\n");
printf("#include <stdlib.h>\n");
printf("#include <string.h>\n");
printf("\n");
printf("/ block layout is: {w-1,h-1}{x0,y0}{x1,y1}{x2,y2}{x3,y3} (two bits each)\n");
printf("nt x = 431424, y = 598356, r = 427089, px = 247872, py = 799248, pr,\n");
printf("   c = 348480, p = 615696, tick, board[%s][%s],\n", $3,$4);
printf("   block[7][4] = {{x, y, x, y},\n");
printf("                  {r, p, r, p},\n");
printf("                  {c, c, c, c},\n");
printf("                  {599636, 431376, 598336, 432192},\n");
printf("                  {411985, 610832, 415808, 595540},\n");
printf("                  {px, py, px, py},\n");
printf("                  {614928, 399424, 615744, 428369}},\n");
printf("   score = 0;\n");
printf("\n");
printf("// extract a 2-bit number from a block entry\n");
printf("NUM(int x, int y) { return 3 & block[p][x] >> y; }\n");}
				STATEMENTS EOP
//    				| GRID INIT NUM NUM STATEMENTS error{yyerror("please enter '#'");}
STATEMENTS: 		STATEMENTS  STATEMENT 
	  			| ;
STATEMENT: 		ID INIT NUM
				| ID  ASSIGN A_EXPN 
				| IF_BLOCK ENDIF
				| IF_BLOCK ELSE_BLOCK ENDIF
				| DO STATEMENTS WHILE BOOL_RET ENDWHILE 
				| TICK STATEMENTS ENDTICK 
				| CONF_STMENT 
				| ST_STMENT 
				| SCORE_STMENT 
				| SHAPE_STMENT 
				| TIME_STMENT 
				| DELETE_STMENT 
				| CUSTOM_SHAPE 

IF_BLOCK:		IF{printf("if(");}  BOOL_RET{printf(")\n");} THEN {printf("{");} STATEMENTS {printf("}");}
ELSE_BLOCK: 	  	ELSE{printf("else\n{");}  STATEMENTS

A_EXPN: 		A_EXPN PLUS {printf("+");} A_EXPN
				| A_EXPN MINUS  A_EXPN
				| A_EXPN MUL  A_EXPN
				| A_EXPN DIV  A_EXPN
				| TERMINALS
				| SCORE
				| TIME

TERMINALS:		ID{printf("%s",$1);} 
				| NUM{printf("$1");}


BOOL_RET: 		A_EXPN AND{printf("&&");}  A_EXPN
				| A_EXPN OR {printf("||");} A_EXPN
	 			| A_EXPN LE {printf("<=");} A_EXPN
				| A_EXPN GE {printf(">=");} A_EXPN
				| A_EXPN GT {printf(">");} A_EXPN
				| A_EXPN LT {printf("<");} A_EXPN
				| A_EXPN NOTEQUAL {printf("!=");} A_EXPN
				| A_EXPN EQ  {printf("==");} A_EXPN
				| NOT  {printf("!");} A_EXPN 
				| WIN  {printf("win");}| LOST {printf("lost");}| PAUSE_BOOL{printf("pause_bool");}
				| TRUE {printf("true");} | FALSE{printf("false");}
				| GRID {printf("grid[");} A_EXPN {printf("][");} A_EXPN {printf("]");}

ST_STMENT: 		START INIT NUM NUM
CONF_STMENT: 		CONF action KEY 
action: 		UP | DOWN | LEFT | RIGHT 
				| CLOCKWISE | ANTICLOCKWISE 
				| PAUSE

SCORE_STMENT: 		SCORE ASSIGN{printf("=");} NUM
				| SCORE PLUS A_EXPN
				| SCORE MINUS A_EXPN

SHAPE_STMENT: 		SHAPE BOOL_RET 

TIME_STMENT: 		TIME PLUS A_EXPN
DELETE_STMENT: 		DELETE A_EXPN A_EXPN

CUSTOM_SHAPE: 		LINE1 BOOL_RET BOOL_RET BOOL_RET BOOL_RET 
				LINE2 BOOL_RET BOOL_RET BOOL_RET BOOL_RET 
				LINE3 BOOL_RET BOOL_RET BOOL_RET BOOL_RET 
				LINE4 BOOL_RET BOOL_RET BOOL_RET BOOL_RET 
			

%%

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
