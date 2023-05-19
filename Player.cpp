//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#include "Player.h"
#include <iostream>
using namespace std;

int Player::getPlayerNumber() {
    return playerNumber;
}

int Player::getSquare() {
    return square;
}

void Player::setPlayerNumber(int playerNumber) {
    this -> playerNumber = playerNumber;
}

void Player::setSquare(int square) {
    this -> square = square;
}

