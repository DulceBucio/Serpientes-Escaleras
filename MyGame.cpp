//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#include "MyGame.h"
#include <iostream>
using namespace std;

MyGame::MyGame() {
    maxTurns = 30;
    turn = 1;
    Board board;
    players[0].setPlayerNumber(1);
    players[1].setPlayerNumber(2);
    players[0].setSquare(1);
    players[1].setSquare(1);
}


void MyGame::printTurn(Player &player) {
    srand(time(0));
    cout << turn << " ";
    Dice dice;
    player.printPlayer();
    int initialSquare = player.getSquare();
    int currentDice = dice.roll();
    player.setSquare(player.getSquare()+currentDice);
    char currentType = board.getType(player.getSquare());
    if (currentType == 'S') {
        player.setSquare(player.getSquare()-3);
    }
    if (currentType == 'L') {
        player.setSquare(player.getSquare()+3);
    }

    int finalSquare = player.getSquare();
    cout << currentDice << " " << currentType << " " << finalSquare << "\n";
    setTurn(getTurn()+1);
}


void MyGame::playGame() {
    if (turn%2 == 1) { printTurn(players[0]); }
    else if (turn%2 == 0) { printTurn(players[1]); }

}

void MyGame::start() {
    playGame();

}