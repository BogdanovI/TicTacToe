#pragma once
#ifndef CONTROLMENU_H
#define CONTROLMENU_H

#include "mainmenu.h"
#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

class controlMenu : public mainMenu
{
private:
    string moveUP {"w - cursor UP"};
    string moveDOWN {"s - cursor DOWN"};
    string moveLEFT {"a - cursor LEFT"};
    string moveRIGHT {"d - cursor RIGHT"};
    string backToMain {"Back<"};
public:
    void showControlMenu();
    void drawMenu();
    int moveCursor();
    int transition();
    virtual ~controlMenu(){}
};

#endif // CONTROLMENU_H
