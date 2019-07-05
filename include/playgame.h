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
        {'*','|',' ','|',' '},
        {'-','-','-','-','-'},
        {' ','|',' ','|',' '},
        {'-','-','-','-','-'},
        {' ','|',' ','|',' '}
    };
    string backToMain {"Back"};
    char *cellOne = &gameField[0][0];   //
    char *cellTwo = &gameField[0][2];   //
    char *cellThree = &gameField[0][4]; //
    char *cellFour = &gameField[2][0];  //
    char *cellFive = &gameField[2][2];  //To simplify access to the cell installation figures
    char *cellSix = &gameField[2][4];   //
    char *cellSeven = &gameField[4][0]; //
    char *cellEight = &gameField[4][2]; //
    char *cellNine = &gameField[4][4];  //
    char cursorGameX = 'X';
    char cursorGameO = 'O';
    int playerTurn = 1;                 //Variable to check whose turn
    int checkCellOne = 0;               //
    int checkCellTwo = 0;               //
    int checkCellThree = 0;             //
    int checkCellFour = 0;              //
    int checkCellFive = 0;              //Variables for checking shapes in cells
    int checkCellSix = 0;               //
    int checkCellSeven = 0;             //
    int checkCellEight = 0;             //
    int checkCellNine = 0;              //
public:
    playGame();                         //Constructor for include all function
    void drawMenu();                    //Draw field TicTacToe
    int moveCursor();                   //Move game cursor on field
    void checkCell();                   //Сhecking an already established figure
    void changePlayer();                //Change player turn
    void winCheck();
};

#endif // PLAYGAME_H
