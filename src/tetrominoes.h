#ifndef tetrominoes_H
#define tetrominoes_H

// Collection of all tetraminios and all possible rotation based on
// Super rotation system https://strategywiki.org/wiki/Tetris/Rotation_systems
// I, J, L, O, S, T, Z

//              ┌ type
//              │  ┌ rotation
//              │  │  ┌ height
//              │  │  │  ┌ width
int tetrominoes[7][4][4][4] = {
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

#endif
