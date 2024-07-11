#pragma once
#ifndef DIE_H
#define DIE_H

#include <iostream>

class Die
{
private:
    int faceValue, sides;
    const int SIDES = 6;

public:
    Die();
    Die(int sides);
    void roll();
    int getFaceValue();
    int getSides();
    std::string dieToString();
};

#endif