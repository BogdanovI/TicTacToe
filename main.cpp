#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

class mainMenu
{
public:
    mainMenu()
    {
            SetConsoleTextAttribute(hConsole, 2);
            cout << setw(53) << "TIC-";
            SetConsoleTextAttribute(hConsole, 12);
            cout << "TAC-";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "TOE";
            SetConsoleTextAttribute(hConsole, 7);
    }
};

class firstMenu : public mainMenu
{
public:
    string playGame {"Play game"};
    string controlButtons {"Control buttons"};
    string exitGame {"Exit"};
    int cursorPosition;
    char cursorMenu = '<';

    int showFirstMenu()
    {
        int pressedButton;
        cout << setw(57) << endl << playGame;
        cout << setw(63) << endl << controlButtons;
        cout << setw(52) << endl << exitGame;
        pressedButton = getch();
        system("cls");
        mainMenu();
        return pressedButton;
    }
    void moveCursor()
    {
        int cursorPosition = 1;
        playGame.push_back(cursorMenu);
            while (showFirstMenu() != 13)
            {
                if(showFirstMenu() == 115 || showFirstMenu() == 119)
                {
                    if(cursorPosition == 1)
                    {
                        if(showFirstMenu() == 115)
                        {
                            playGame = playGame.substr(0, playGame.size() - 1);
                            controlButtons.push_back(cursorMenu);
                            cursorPosition = 2;
                        }
                    }
                    if(cursorPosition == 1)
                    {
                        if(showFirstMenu() == 119)
                        {
                            playGame = playGame.substr(0, playGame.size() - 1);
                            exitGame.push_back(cursorMenu);
                            cursorPosition = 3;
                        }
                    }
                    if(cursorPosition == 2)
                    {
                        if(showFirstMenu() == 115)
                        {
                            controlButtons = controlButtons.substr(0, controlButtons.size() - 1);
                            exitGame.push_back(cursorMenu);
                            cursorPosition = 3;
                        }
                    }
                    if(cursorPosition == 2)
                    {
                        if(showFirstMenu() == 119)
                        {
                            controlButtons = controlButtons.substr(0, controlButtons.size() - 1);
                            playGame.push_back(cursorMenu);
                            cursorPosition = 1;
                        }
                    }
                    if(cursorPosition == 3)
                    {
                        if(showFirstMenu() == 115)
                        {
                            exitGame = exitGame.substr(0, exitGame.size() - 1);
                            playGame.push_back(cursorMenu);
                            cursorPosition = 1;
                        }
                    }
                    if(cursorPosition == 3)
                    {
                        if(showFirstMenu() == 119)
                        {
                            exitGame = exitGame.substr(0, exitGame.size() - 1);
                            controlButtons.push_back(cursorMenu);
                            cursorPosition = 2;
                        }
                    }
                }
                showFirstMenu();
            };
    }
};



int main()
{
    firstMenu newGame;
    newGame.moveCursor();

    return 0;
}
