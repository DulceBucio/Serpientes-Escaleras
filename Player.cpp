//
// Created by PC BULLOCK on 20/05/2023.
//

#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(int playerNumber, int square) {
    this->playerNumber = playerNumber;
    this->square = square;
}

Player::~Player() {
}

void Player::printPlayer() {
    cout << playerNumber << " ";
    cout << square << " ";
}