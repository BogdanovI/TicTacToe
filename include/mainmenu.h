#pragma once
#ifndef MAINMENU_H
#define MAINMENU_H

#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

class mainMenu
{
protected:
    int cursorPosition = 1;
    char cursorMenu = '*';
    string playGame {"Play game*"};
    string controlButtons {"Control buttons"};
    string exitGame {"Exit"};
    int pressedBtn;
public:
    int returnPosition;
    void startGame();
    void drawLogo();
    virtual void drawMenu();
    virtual int moveCursor();
    virtual ~mainMenu(){}
};

#endif // MAINMENU_H
