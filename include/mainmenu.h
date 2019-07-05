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
    int cursorPosition = 1;                     //Variable for check cursor position in game/menu
    char cursorMenu = '*';
    string playGame {"Play game*"};
    string controlButtons {"Control buttons"};
    string exitGame {"Exit"};
    int pressedBtn;                             //Variable to store the value of the key pressed
public:
    int returnPosition;                         //Return cursor position
    void startGame();                           //The function that displays the main menu and logo at startup
    void drawLogo();
    virtual void drawMenu();                    //The function that displays the main menu
    virtual int moveCursor();                   //Move game cursor on field
    virtual ~mainMenu(){}
};

#endif // MAINMENU_H
