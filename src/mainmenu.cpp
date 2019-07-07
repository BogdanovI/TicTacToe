#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include "../include/mainmenu.h"

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


void mainMenu::startGame()
{
        system("cls");
        drawLogo();
        drawMenu();
        moveCursor();
}

void mainMenu::drawLogo()
{
        SetConsoleTextAttribute(hConsole, 2);
        cout << setw(8) << "TIC-";
        SetConsoleTextAttribute(hConsole, 12);
        cout << "TAC-";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "TOE";
        SetConsoleTextAttribute(hConsole, 7);
}
void mainMenu::drawMenu()
{
    cout << setw(12) << endl << playGame;
    cout << setw(18) << endl << controlButtons;
    cout << setw(7) << endl << exitGame;
}
int mainMenu::moveCursor()
{
    pressedBtn = getch();
    while (pressedBtn)
    {
        if(pressedBtn == Down || pressedBtn == Up)
        {
            if(cursorPosition == 1)
            {
                if(pressedBtn == Down)
                {
                    playGame = playGame.substr(0, playGame.size() - 1);
                    controlButtons.push_back(cursorMenu);
                    cursorPosition = 2;
                }
                if(pressedBtn == Up)
                {
                    playGame = playGame.substr(0, playGame.size() - 1);
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 3;
                }
            }
            else if(cursorPosition == 2)
            {
                if(pressedBtn == Down)
                {
                    controlButtons = controlButtons.substr(0, controlButtons.size() - 1);
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 3;
                }
                if(pressedBtn == Up)
                {
                    controlButtons = controlButtons.substr(0, controlButtons.size() - 1);
                    playGame.push_back(cursorMenu);
                    cursorPosition = 1;
                }
            }
            else if(cursorPosition == 3)
            {
                if(pressedBtn == Down)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    playGame.push_back(cursorMenu);
                    cursorPosition = 1;
                }
                if(pressedBtn == Up)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    controlButtons.push_back(cursorMenu);
                    cursorPosition = 2;
                }
            }

        }
        if(pressedBtn == Enter)
        {
            if(cursorPosition == 1)
            {
                returnPosition = inGame;
                return returnPosition;
            }
            if(cursorPosition == 2)
            {
                returnPosition = inControl;
                return returnPosition;

            }
            if(cursorPosition == 3)
            {
                exit(0);
            }

        }
            system("cls");
            drawLogo();
            drawMenu();
            moveCursor();
    }
}
