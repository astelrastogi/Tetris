lex tetris.l
yacc -d -v tetris.y
gcc -o tt tetris.cpp -lncurses -w ./lex.yy.c ./y.tab.c -ll
./a.out

maketet: tetris.cpp