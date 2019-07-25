#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include <iostream>
#include <vector>

using namespace std;

class GameField
{
public:
    unsigned int rangeField;
    vector<char> fieldForPlay;
    GameField();
    void draw();
};

#endif // GAMEFIELD_H
