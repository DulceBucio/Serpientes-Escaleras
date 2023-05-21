//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#include <iostream>
#include "Player.h"
#include "Board.h"
#include "Dice.h"
#include "MyGame.h"
using namespace std;

int main() {
    bool activeGame;
    activeGame = true;
    cout << "Press C to continue next turn, or E to end the game: \n";
    char answer;
    MyGame currentGame;
    while (activeGame){
        cin >> answer;
        cin.ignore();
        if (answer == 'C') {
            currentGame.start();
        }
        else if (answer == 'E') {
            cout << "Thanks for playing!!! \n";
            cout << "-- GAME OVER -- \n";
            activeGame = false;
        }
        else {
            cout << "Invalid option, please press C to continue next turn or E to end the game" << "\n";
        }
    }
    return 0;
};