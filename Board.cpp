//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//
#include <iostream>
#include "Board.h"
using namespace std;

Board::Board() {
    char generalBox = 'N';
    boxes = vector<char>(30, 'N');
    boxes[2] = 'S';
    boxes[13] = 'S';
    boxes[24] = 'S';
    boxes[6] = 'L';
    boxes[19] = 'L';
    boxes[10] = 'L';
}

void Board::printBoard() {
    for (vector<char>::const_iterator it1 = boxes.begin(); it1 != boxes.end(); it1++){
        cout << *it1 << "\n";
    }
}

char Board::getType(int index) {
    return boxes[index];
}

