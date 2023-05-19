//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#ifndef SERPIENTES_ESCALERAS_PLAYER_H
#define SERPIENTES_ESCALERAS_PLAYER_H
#include <iostream>
using namespace std;

class Player {
    int playerNumber;
    int square;
public:
    //Constructors
    Player() = default;

    Player(const int &playerNumber, const int &square) : playerNumber(playerNumber), square(square) {}

    Player(const Player &playerCopy) : playerNumber(playerCopy.playerNumber), square(playerCopy.square) {}

    //Destructor
    ~Player();

    //Accessors
    const int &getPlayerNumber() { return playerNumber; }

    const int &getSquare() { return square; }

    //Mutators
    void setPlayerNumber(const int &playerNumber) { this->playerNumber = playerNumber; }

    void setSquare(const int &square) { this->square = square; }
};

Player::~Player()
{
}


#endif //SERPIENTES_ESCALERAS_PLAYER_H
