//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#include "MyGame.h"
#include <iostream>
using namespace std;

MyGame::MyGame() {
    maxTurns = 30;
    turn = 0;
}
void MyGame::setPlayers() {
    players[0].setPlayerNumber(1);
    players[1].setPlayerNumber(2);
}

void MyGame::newTurn() {
    srand(time(0));
    Dice dice;
    dice.roll();
    setTurn(getTurn()+1);
    
}

