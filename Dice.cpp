//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#include "Dice.h"
#include <iostream>
using namespace std;

int Dice::roll(){
    int facesNum = rand() % (faces - 1 + 1) + 1;
    return facesNum;
}

