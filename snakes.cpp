//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#include <iostream>
#include "Player.h"
#include "Board.h"
#include "Dice.h"
using namespace std;

int main() {
    srand(time(0)); // Initializes the seed for the random number generator based on the current time
    Dice D1;
    D1.roll();
    return 0;
};