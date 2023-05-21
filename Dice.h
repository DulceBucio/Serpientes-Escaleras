//
// Created by Dulce Nahomi Bucio Rivas | A01425284 on 19/05/2023.
//

#ifndef SERPIENTES_ESCALERAS_DICE_H
#define SERPIENTES_ESCALERAS_DICE_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

class Dice {
    int faces;

public:
    //Constructors
    Dice(const int &faces = 6) : faces(faces) {}
    Dice(const Dice &facesCopy): faces(facesCopy.faces) {}
    //Destructor
    ~Dice() {};
    //Method that generates a random number between 1 and the total number of faces
    int roll();
};


#endif //SERPIENTES_ESCALERAS_DICE_H
