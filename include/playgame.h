#pragma once
#ifndef PLAYGAME_H
#define PLAYGAME_H
#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include "mainmenu.h"

using namespace std;

class playGame : public mainMenu
{
    char gameField[5][5] =
    {
        {' ','|',' ','|',' '},
        {'-','-','-','-','-'},
        {' ','|',' ','|',' '},
        {'-','-','-','-','-'},
        {' ','|',' ','|',' '}
    };
public:
    void drawMenu();
    int moveCursor();
};

#endif // PLAYGAME_H
