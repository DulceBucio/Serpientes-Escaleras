//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#ifndef SERPIENTES_ESCALERAS_BOARD_H
#define SERPIENTES_ESCALERAS_BOARD_H
#include <iostream>
#include <vector>
using namespace std;

class Board {
    vector<char> boxes;
public:
    Board();
    ~Board() {};
    void printBoard();
};


#endif //SERPIENTES_ESCALERAS_BOARD_H
