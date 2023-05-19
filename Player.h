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
    Player() = default;
    Player(const int &playerNumber, const int &square): playerNumber(playerNumber), square(square) {}
    Player(const Player &playerCopy): playerNumber(playerCopy.playerNumber), square(playerCopy.square) {}
    ~Player();
    int getPlayerNumber();
    int getSquare();
    void setPlayerNumber(int);
    void setSquare(int);
};


#endif //SERPIENTES_ESCALERAS_PLAYER_H
