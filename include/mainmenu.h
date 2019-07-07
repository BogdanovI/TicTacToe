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
    char cursorMenu = '*';
    string playGame {"Play game*"};
    string controlButtons {"Control buttons"};
    string exitGame {"Exit"};
    int pressedBtn;                             //Variable to store the value of the key pressed
    int cursorPosition = posOne;                     //Variable for check cursor position in game/menu
    enum moveControl {Enter = 13, Left = 97, Right = 100, Down = 115, Up = 119};
    enum positionCursor {posOne = 1, posTwo, posThree, posFour, posFive, posSix, posSeven, posEight, posNine, posTen};
    enum whoWin {noOne, PlayerOne, PlayerTwo};
public:
    enum returnedCodes {inControl = 13, inGame = 14, backMenu = 15} code;
    int returnPosition;                         //Return cursor position
    void startGame();                           //The function that displays the main menu and logo at startup
    void drawLogo();
    virtual void drawMenu();                    //The function that displays the main menu
    virtual int moveCursor();                   //Move game cursor on field
    virtual ~mainMenu(){}
};

#endif // MAINMENU_H
