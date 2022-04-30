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

%type<var_name>ID NUM KEY SHAPE

%start grid

/* Rule Section */
%%
grid:	 		GRID INIT NUM NUM {
				{
					printf("int grid_x = %s, grid_y = %s\n", $3, $4);}
					//printf("int rows=7, col=4;");
					//printf("vector<vector<int> > block(rows,vector<int>(col,0));");
					//printf("vector<int> v={2,3,1};");
					//printf("block.push_back(v)");

				} STATEMENTS EOP
				| GRID INIT NUM NUM STATEMENTS error{yyerror("please enter '#'");}

STATEMENTS: 	STATEMENTS  STATEMENT | ;

STATEMENT: 		ID INIT{
					printf("int %s = ",$1);
				} 
				A_EXPN{
					printf(";\n");
				}
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
				| A_EXPN MINUS {printf("-");} A_EXPN
				| A_EXPN MUL {printf("*");}  A_EXPN
				| A_EXPN DIV {printf("/");} A_EXPN
				| TERMINALS
				| SCORE{printf("score");}
				| TIME{printf("time");}

TERMINALS:		ID{printf("%s",$1);} 
				| NUM{printf("%s",$1);}


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
				| GRID {printf("grid[");} A_EXPN {printf("][");} A_EXPN {printf("]");}
				| TRUE {printf("true");} | FALSE{printf("false");}
			//@TODO collisions: out of border with other tetromino

ST_STMENT: 		START INIT NUM NUM{printf("int start_x = %s, start_y = %s",$3, $4);}

CONF_STMENT: 		CONF{
			printf("void Game::trasformTetromino (int key) {\n");
			printf("    switch (key) {\n");
			} CONFS {printf("\n}}\n");}//@changed
CONFS:			KEY {printf("case %s:\n", $1);} ACTION CONFS |; 
ACTION: 		UP {
			printf("            tetromino.moveUp();\n");
			printf("            if (collideWithTetrominoes()) tetromino.moveDown();\n");
			printf("            break;\n");}
 			| DOWN {
			printf("            tetromino.moveDown();\n");
			printf("            if (collideWithTetrominoes()) tetromino.moveUp();\n");
			printf("            break;\n");}
			| LEFT {
			printf("            tetromino.moveLeft();\n");
			printf("            if (collideWithTetrominoes()) tetromino.moveRight();\n");
			printf("            break;\n");}
			| RIGHT {
			printf("            tetromino.moveRight();\n");
			printf("            if (collideWithTetrominoes()) tetromino.moveLeft();\n");
			printf("            break;\n");}
			| CLOCKWISE{
			printf("            tetromino.rotate();\n");
			printf("            if (collideWithTetrominoes()) tetromino.rotate(true);\n");
			printf("            break;\n");}
			| ANTICLOCKWISE {
			printf("            tetromino.rotate(true);\n");
			printf("            if (collideWithTetrominoes()) tetromino.rotate();\n");
			printf("            break;\n");}
			| PAUSE{printf("PAUSE_BOOL = !PAUSE_BOOL");}

SCORE_STMENT: 		SCORE{printf("score");} ASSIGN{printf("=");} NUM
				| SCORE{printf("score");} PLUS A_EXPN
				| SCORE{printf("score");} MINUS A_EXPN

SHAPE_STMENT: 		SHAPE BOOL_RET 

TIME_STMENT: 		TIME PLUS A_EXPN
DELETE_STMENT: 		DELETE A_EXPN A_EXPN

CUSTOM_SHAPE: 		LINE1 {printf("temp_block[4][4] = ");} BOOL_RET {printf("? :");}BOOL_RET BOOL_RET BOOL_RET 
				LINE2 BOOL_RET BOOL_RET BOOL_RET BOOL_RET 
				LINE3 BOOL_RET BOOL_RET BOOL_RET BOOL_RET 
				LINE4 BOOL_RET BOOL_RET BOOL_RET BOOL_RET {printf("blocks.push_back()");}
			

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
