//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#ifndef SERPIENTES_ESCALERAS_PLAYER_H
#define SERPIENTES_ESCALERAS_PLAYER_H
#include <iostream>
using namespace std;

class Dice {
    int faces;

public:
    //Constructor
    Dice(const int &faces): faces(faces) { this->faces = 6;}
    Dice(const Dice &facesCopy): faces(facesCopy.faces) {}
    //Destructor
    ~Dice() {};
    //Method that generates a random number between 1 and the total number of faces
    int roll();
};


#endif //SERPIENTES_ESCALERAS_DICE_H
