%{
/* Definition section */
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int yylex(void);
	int yyerror(const char *s);
	int yydebug = 1;
	int success = 1;
	int expn_type = -1;
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

%token PLUS MINUS MUL DIV EQ NOTEQUAL GE GT LE LT ASSIGN GRID START CONF NOT SCORE LINE1 LINE2 LINE3 LINE4 DELETE CLOCKWISE ANTICLOCKWISE PAUSE UP ENDIF IF THEN DO WHILE TRUE FALSE EOL EOP T L ID NUM KEY SHAPE AND OR ENDWHILE TICK ENDTICK PAUSE_BOOL ELSE LOST WIN RIGHT DOWN LEFT TIME INIT

%left OR
%left AND
%left GE LE NOTEQUAL GT LT 
%left PLUS MINUS
%left MUL DIV 
%left NOT

%type<var_name>ID

%start grid

/* Rule Section */
%%
grid:	 			GRID ASSIGN NUM NUM{
						printf("#include<stdio.h>\nint main()\n{\n");
						tab_count++;
					}
					STATEMENTS EOP{
						printf("}\n");
					}
STATEMENTS: 		STATEMENTS {print_tabs();} STATEMENT | EOL

STATEMENT: 			ID INIT NUM{
					}
					| ID {
							printf("%s", $1);
							if((temp=lookup_in_table($1))==-1) {
								printf("\n variable \" %s\" undeclared\n", $1);
								yyerror("");
								exit(0);
							}
							expn_type=-1;
					} 
					ASSIGN
					A_EXPN EOL{
						printf(";\n");
					}
					
					| IF_BLOCK ELSE_BLOCK ENDIF
					| IF_BLOCK ENDIF
					| DO {printf("do{\n");tab_count++;}
					  STATEMENTS {tab_count--;print_tabs();}
					  WHILE{printf("}while(");} 
				      BOOL_RET ENDWHILE {printf(");\n");}
					| TICK {}
					  STATEMENTS {}
					  ENDTICK {}
					| CONF_STMENT {}
					| ST_STMENT {}
					| SCORE_STMENT {}
					| SHAPE_STMENT {}
					| TIME_STMENT {}
					| DELETE_STMENT {}
					| CUSTOM_SHAPE {}

IF_BLOCK:		 	IF {printf("if(");} 
					BOOL_RET {printf("){\n");tab_count++;} 
					THEN
					STATEMENTS
					{tab_count--;print_tabs();printf("}\n");}

ELSE_BLOCK: 	    ELSE {print_tabs();printf("else{\n");tab_count++;} 
					STATEMENTS
					{tab_count--;print_tabs();printf("}\n");}

A_EXPN: 		A_EXPN PLUS {printf("+");} A_EXPN
				| A_EXPN MINUS {printf("-");} A_EXPN
				| A_EXPN MUL {printf("*");} A_EXPN
				| A_EXPN DIV {printf("/");} A_EXPN
				| TERMINALS
				| SCORE
				| TIME

TERMINALS:			ID {
						if((temp=lookup_in_table(yylval.var_name))!=-1) {
							printf("%s", yylval.var_name);
							if(expn_type==-1){
								expn_type=temp;
							}
							else if(expn_type!=temp){
								printf("\ntype mismatch in the expression\n");
								yyerror("");
								exit(0);
							}
						}
						else{
							printf("\n variable \"%s\" undeclared\n", yylval.var_name);
							yyerror("");
							exit(0);
						}
					}
					| NUM {printf("%s", yylval.var_name);}


BOOL_RET: 		A_EXPN AND {printf("&&");} A_EXPN
				| A_EXPN OR {printf("||");} A_EXPN
	 			| A_EXPN LE {printf("<=");} A_EXPN
				| A_EXPN GE {printf(">=");} A_EXPN
				| A_EXPN GT {printf(">");} A_EXPN
				| A_EXPN LT {printf("<");} A_EXPN
				| A_EXPN NOTEQUAL {printf("!=");} A_EXPN
				| A_EXPN EQ {printf("==");} A_EXPN
				| NOT {printf("!");} A_EXPN 
				| WIN | LOST | PAUSE_BOOL
				| TRUE | FALSE
				| GRID A_EXPN A_EXPN

ST_STMENT: 		START ASSIGN NUM NUM
CONF_STMENT: 	CONF action KEY {printf("%s",yylval.var_name);}
action: 		UP | DOWN | LEFT | RIGHT 
				| CLOCKWISE | ANTICLOCKWISE 
				| PAUSE

SCORE_STMENT: 	SCORE ASSIGN NUM
				| SCORE PLUS A_EXPN
				| SCORE MINUS A_EXPN

SHAPE_STMENT: SHAPE BOOL_RET 

TIME_STMENT: TIME PLUS A_EXPN
DELETE_STMENT: DELETE A_EXPN A_EXPN

CUSTOM_SHAPE: 	LINE1 BOOL_RET BOOL_RET BOOL_RET BOOL_RET 
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