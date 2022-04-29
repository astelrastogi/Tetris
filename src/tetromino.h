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
    int static const b_h=20, b_w=10;
    int board[b_h+4][b_w] = {};

private:
    int y = 1;
    int x = 3;
    int rotation;
    int type;
    bool collideWithBorder();
};

#endif
