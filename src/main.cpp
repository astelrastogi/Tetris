#include <ncurses.h>

#include "game.h"
//#include "tetromino.h"
#include "tetrominoes.h"
#include <unistd.h>
using std::vector;

 vector<vector<vector<int>>> create_rotations(int a[4][4]){

    //create vectors to return and add first rotation
    vector<vector<vector<int>>> vec_rots(4, vector<vector<int>>(4, vector<int>(4, 0)));

 
    int N = 4;
    for (int k = 0; k < 4; k++) {
        
        vector<vector<int>> vec(4, vector<int>(4, 0));

        for (int i = 0; i < N / 2; i++) {
            for (int j = i; j < N - i - 1; j++) {
                int temp = a[i][j];
                a[i][j] = a[N - 1 - j][i];
                a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
                a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
                a[j][N - 1 - i] = temp;
            }
        }

        for (int n = 0; n < 4; n++){        
            for (int m = 0; m < 4; m++){
                vec[m][n] = a[m][n];
                }
            }
        vec_rots[(k+1)%4] = vec;

    }

    return vec_rots;
}

int main(int argc, char const *argv[]) {
    int tetrominoes[7][4][4][4] = {};
    vector<vector<vector<vector<int>>>> tets;

    for (int i = 0; i < 7; i++) {
        tets.push_back(create_rotations(tetrominoes[0][0]));
    }

    int input;
    Game game;

    initscr();

    start_color();
    for (int i = 1; i < 8; ++i) init_pair(i, 0, i);
    noecho();
    curs_set(0);
    //timeout(0);
    keypad(stdscr, TRUE);
    halfdelay(1);

    int count = 0;
    while (true) {
    for (int i = 0; game.level < 10 && i < 10 - game.level; ++i) {
        input = getch();
        game.trasformTetromino(input);
        game.render();
    }
    game.updateState();
	//if(count >= 30){
		count = 0;
	//}     
}

    endwin();


}


