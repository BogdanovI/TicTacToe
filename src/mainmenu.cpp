#include "../include/mainmenu.h"
#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>

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
        cout << setw(53) << "TIC-";
        SetConsoleTextAttribute(hConsole, 12);
        cout << "TAC-";
        SetConsoleTextAttribute(hConsole, 14);
        cout << "TOE";
        SetConsoleTextAttribute(hConsole, 7);
}
void mainMenu::drawMenu()
{
    cout << setw(57) << endl << playGame;
    cout << setw(63) << endl << controlButtons;
    cout << setw(52) << endl << exitGame;
}
int mainMenu::moveCursor()
{
    pressedBtn = getch();
    while (pressedBtn)
    {
        if(pressedBtn == 115 || pressedBtn == 119 || pressedBtn == 13)
        {
            if(cursorPosition == 1)
            {
                if(pressedBtn == 115)
                {
                    playGame = playGame.substr(0, playGame.size() - 1);
                    controlButtons.push_back(cursorMenu);
                    cursorPosition = 2;
                }
                if(pressedBtn == 119)
                {
                    playGame = playGame.substr(0, playGame.size() - 1);
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 3;
                }
            }
            else if(cursorPosition == 2)
            {
                if(pressedBtn == 115)
                {
                    controlButtons = controlButtons.substr(0, controlButtons.size() - 1);
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 3;
                }
                if(pressedBtn == 119)
                {
                    controlButtons = controlButtons.substr(0, controlButtons.size() - 1);
                    playGame.push_back(cursorMenu);
                    cursorPosition = 1;
                }
            }
            else if(cursorPosition == 3)
            {
                if(pressedBtn == 115)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    playGame.push_back(cursorMenu);
                    cursorPosition = 1;
                }
                if(pressedBtn == 119)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    controlButtons.push_back(cursorMenu);
                    cursorPosition = 2;
                }
            }
            if(pressedBtn == 13)
            {
                if(cursorPosition == 1)
                {

                }
                if(cursorPosition == 2)
                {
                    return pressedBtn;
                }
                if(cursorPosition == 3)
                {
                    exit(0);
                }

            }

        }
            system("cls");
            drawLogo();
            drawMenu();
            moveCursor();
    }
}

int mainMenu::transition()
{
    return pressedBtn;
}
