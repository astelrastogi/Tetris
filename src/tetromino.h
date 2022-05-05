#include <vector>
using std::vector;

#ifndef TETROMINO_H
#define TETROMINO_H


class Tetromino
{
public:
    Tetromino();
    void updateBoard();
    bool moveRight();
    bool moveLeft();
    bool moveDown();
    bool moveUp();
    bool rotate(bool=false);
    int tetrominoes [7][4][4][4];
    vector<vector<vector<int>>> create_rotations(int a[4][4]);
    int b_h, b_w;
    int static const gx = 10, gy =20;
    int num_blocks;
    int board[gy+4][gx] = {};
    vector<vector<vector<vector<int>>>> tets;

private:
    int y = 1;
    int x = 3;
    int rotation;
    int type;
    bool collideWithBorder();
};

#endif
