//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//
#include <iostream>
#include "Board.h"
using namespace std;

Board::Board() {
    char generalBox = 'N';
    boxes = vector<char>(30, 'N');
}


void Board::printBoard() {
    for (vector<char>::const_iterator it1 = boxes.begin(); it1 != boxes.end(); it1++){
        cout << *it1 << "\n";
    }
}

