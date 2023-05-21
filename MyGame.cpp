//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#include "MyGame.h"
#include <iostream>
using namespace std;

MyGame::MyGame() {
    maxTurns = 30;
    turn = 0;
    Board board;
    players[0].setPlayerNumber(1);
    players[1].setPlayerNumber(2);
}


void MyGame::newTurn() {
    srand(time(0));
    Dice dice;
    setTurn(getTurn()+1);
    if (turn%2 == 1) {
        currentPlayer = players[0];
    }
    if (turn%2 == 0) {
        currentPlayer = players[1];
    }
    int initialSquare = currentPlayer.getSquare();
    int currentDice = dice.roll();
    currentPlayer.setSquare(currentPlayer.getSquare()+currentDice);
    char currentType = board.getType(currentPlayer.getSquare());
    if (currentType == 'S') {
        currentPlayer.setSquare(currentPlayer.getSquare()-3);
    }
    if (currentType == 'L') {
        currentPlayer.setSquare(currentPlayer.getSquare()+3);
    }
    int finalSquare = currentPlayer.getSquare();
    cout << turn << " " << currentPlayer.getPlayerNumber() << " " << initialSquare << " " << currentDice << " " << currentType << " " << finalSquare;
}

