#pragma once
#ifndef CONTROLMENU_H
#define CONTROLMENU_H

#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include "mainmenu.h"

using namespace std;

class controlMenu : public mainMenu
{
private:
    string moveUP {"w - cursor UP"};
    string moveDOWN {"s - cursor DOWN"};
    string moveLEFT {"a - cursor LEFT"};
    string moveRIGHT {"d - cursor RIGHT"};
    string backToMain {"Back*"};
public:
    void showControlMenu();
    void drawMenu();
    int moveCursor();
    virtual ~controlMenu(){}
};

#endif // CONTROLMENU_H
