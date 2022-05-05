#include <random>

#include "tetromino.h"
#include "tetrominoes.h"
#include <iostream>

using std::vector;



Tetromino::Tetromino() {
    //const static int gx=20, gy=10;
    //vector<vector<vector<vector<int>>>> tetrinos;
    b_h = gy;
    b_w = gx;
    int tetrominoes [7][4][4][4]= {
    {
        {
            {0, 0, 0, 0},
            {6, 6, 6, 6},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 6, 0},
            {0, 0, 6, 0},
            {0, 0, 6, 0},
            {0, 0, 6, 0}
        },
        {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {6, 6, 6, 6},
            {0, 0, 0, 0}
        },
        {
            {0, 6, 0, 0},
            {0, 6, 0, 0},
            {0, 6, 0, 0},
            {0, 6, 0, 0}
        }
    },
    {
        {
            {4, 0, 0, 0},
            {4, 4, 4, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 4, 4, 0},
            {0, 4, 0, 0},
            {0, 4, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {4, 4, 4, 0},
            {0, 0, 4, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 4, 0, 0},
            {0, 4, 0, 0},
            {4, 4, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 0, 7, 0},
            {7, 7, 7, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 7, 0, 0},
            {0, 7, 0, 0},
            {0, 7, 7, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {7, 7, 7, 0},
            {7, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {7, 7, 0, 0},
            {0, 7, 0, 0},
            {0, 7, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 3, 3, 0},
            {0, 3, 3, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 3, 3, 0},
            {0, 3, 3, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 3, 3, 0},
            {0, 3, 3, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 3, 3, 0},
            {0, 3, 3, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 2, 2, 0},
            {2, 2, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 2, 0, 0},
            {0, 2, 2, 0},
            {0, 0, 2, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {0, 2, 2, 0},
            {2, 2, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {2, 0, 0, 0},
            {2, 2, 0, 0},
            {0, 2, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 5, 0, 0},
            {5, 5, 5, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 5, 0, 0},
            {0, 5, 5, 0},
            {0, 5, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {5, 5, 5, 0},
            {0, 5, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 5, 0, 0},
            {5, 5, 0, 0},
            {0, 5, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        {
            {0, 1, 0, 0},
            {1, 1, 0, 0},
            {1, 0, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 0, 0},
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        },
        {
            {0, 0, 1, 0},
            {0, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        },
        {
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    }
};
//    vector<vector<vector<int>>> vec_rots(4, vector<vector<int>>(4, vector<int>(4, 0)));
    /*for (int i = 0; i < 7; i++) {
        tets.push_back(create_rotations(tetrominoes[0][0]));
    }*/

    num_blocks = tets.size();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> type_gen(0, 7-1);
    std::uniform_int_distribution<> rotation_gen(0, 3);
    type = type_gen(gen);
    rotation = rotation_gen(gen); //create int numTiles
    updateBoard();
}

void Tetromino::updateBoard() {
    // update board with current x, y, type and rotation
    for (int i = 0; i < b_h + 4; ++i) {
        for (int j = 0; j < b_w; ++j) {
            if (i - y < 4 && i - y >= 0 &&
                j - x < 4 && j - x >= 0) {
                board[i][j] = tetrominoes[type][rotation][i - y][j - x];
            } else {
                board[i][j] = 0;
            }
        }
    }
}

bool Tetromino::collideWithBorder() {
    updateBoard();
    int block = 0;
    for (int i = 0; i < b_h + 4; ++i) {
        for (int j = 0; j < b_w; ++j) {
            if (board[i][j] != 0) block += 1; //checks if all tiles are in existence
        }
    }
    if (block < 4) return true; //uses 4 tiles property
    return false;
}

bool Tetromino::moveRight() {
    x += 1;
    if (collideWithBorder()) {
        x -= 1;
        return false;
    }
    return true;
}

bool Tetromino::moveLeft() {
    x -= 1;
    if (collideWithBorder()) {
        x += 1;
        return false;
    }
    return true;
}

bool Tetromino::moveDown() {
    y += 1;
    if (collideWithBorder()) {
        y -= 1;
        return false;
    }
    return true;
}

bool Tetromino::moveUp() {
    y -= 1;
    if (collideWithBorder()) {
        y += 1;
        return false;
    }

    return true;
}

bool Tetromino::rotate(bool reverse) {
    if (reverse) rotation += 2;
    rotation = (rotation + 1) % 4;
    if (collideWithBorder()) {
        rotation = (rotation + 3) % 4;
        return false;
    }
    return true;
}


 vector<vector<vector<int>>> Tetromino::create_rotations(int a[4][4]){

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
