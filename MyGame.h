//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#ifndef SERPIENTES_ESCALERAS_MYGAME_H
#define SERPIENTES_ESCALERAS_MYGAME_H
#include <iostream>
#include "Player.h"
#include "Board.h"

class MyGame {
    int turn;
    Player players[2];
public:
    const int &getTurn() {return turn;}
    void setTurn(int turn) {this ->turn = turn;}
    void setPlayers();
    void newTurn();
};


#endif //SERPIENTES_ESCALERAS_MYGAME_H
