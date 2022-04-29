tetris: tetris.l tetris.y
	lex tetris.l
	yacc -d -v tetris.y
	gcc -w lex.yy.c y.tab.c -ll

debug:  tetris.l tetris.y
	lex tetris.l
	yacc -d -t -v tetris.y
	gcc -w lex.yy.c y.tab.c -ll

clean:
	rm lex.yy.c y.tab.c y.tab.h a.out y.output
