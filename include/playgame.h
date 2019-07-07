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
    char *cellsField[9] =                   //To simplify access to the cell installation figures
    {
        cellsField[0] = &gameField[0][0],
        cellsField[1] = &gameField[0][2],
        cellsField[2] = &gameField[0][4],
        cellsField[3] = &gameField[2][0],
        cellsField[4] = &gameField[2][2],
        cellsField[5] = &gameField[2][4],
        cellsField[6] = &gameField[4][0],
        cellsField[7] = &gameField[4][2],
        cellsField[8] = &gameField[4][4]
    };
    int checkCells[9];                      //Variables for checking shapes in cells
    char cursorGameX = 'X';
    char cursorGameO = 'O';
    int playerTurn = 1;                 //Variable to check whose turn
public:
    playGame();                         //Constructor for include all function
    void drawMenu();                    //Draw field TicTacToe
    int moveCursor();                   //Move game cursor on field
    void checkCell();                   //Сhecking an already established figure
    void changePlayer();                //Change player turn
    int winCheck();
    int congratulationsPlayer(int playerWin);
};

#endif // PLAYGAME_H
