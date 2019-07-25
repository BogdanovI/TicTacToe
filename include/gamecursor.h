#ifndef GAMECURSOR_H
#define GAMECURSOR_H
#include "gamefield.h"
#include <conio.h>

class GameCursor
{
private:
    char gameMarker = '*';
    char emptyCell = ' ';
    enum controlKeys
    {
        Enter = 13,
        Left = 97,
        Right = 100,
        Down = 115,
        Up = 119
    };
    GameField *field;

public:
    int currentPosition = 0;
    int pressedButton;
    unsigned int setCurrentMarkerPosition(size_t value);
    GameCursor(GameField *_field)
        : field(_field)
    {
    }
};
#endif // GAMECURSOR_H
