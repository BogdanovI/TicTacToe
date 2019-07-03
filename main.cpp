#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

class mainMenu
{
private:
    string playGame {"Play game<"};
    string controlButtons {"Control buttons"};
    string exitGame {"Exit"};
    int cursorPosition = 1;
    char cursorMenu = '<';
public:
    void drawLogo()
    {
            SetConsoleTextAttribute(hConsole, 2);
            cout << setw(53) << "TIC-";
            SetConsoleTextAttribute(hConsole, 12);
            cout << "TAC-";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "TOE";
            SetConsoleTextAttribute(hConsole, 7);
    }
    void drawFirstMenu()
    {
        cout << setw(57) << endl << playGame;
        cout << setw(63) << endl << controlButtons;
        cout << setw(52) << endl << exitGame;
    }
    void moveCursor()
    {
        int pressedButton = getch();
        while (pressedButton)
        {
            if(pressedButton == 115 || pressedButton == 119)
            {
                if(cursorPosition == 1)
                {
                    if(pressedButton == 115)
                    {
                        playGame = playGame.substr(0, playGame.size() - 1);
                        controlButtons.push_back(cursorMenu);
                        cursorPosition = 2;
                    }
                    if(pressedButton == 119)
                    {
                        playGame = playGame.substr(0, playGame.size() - 1);
                        exitGame.push_back(cursorMenu);
                        cursorPosition = 3;
                    }
                }
                else if(cursorPosition == 2)
                {
                    if(pressedButton == 115)
                    {
                        controlButtons = controlButtons.substr(0, controlButtons.size() - 1);
                        exitGame.push_back(cursorMenu);
                        cursorPosition = 3;
                    }
                    if(pressedButton == 119)
                    {
                        controlButtons = controlButtons.substr(0, controlButtons.size() - 1);
                        playGame.push_back(cursorMenu);
                        cursorPosition = 1;
                    }
                }
                else if(cursorPosition == 3)
                {
                    if(pressedButton == 115)
                    {
                        exitGame = exitGame.substr(0, exitGame.size() - 1);
                        playGame.push_back(cursorMenu);
                        cursorPosition = 1;
                    }
                    if(pressedButton == 119)
                    {
                        exitGame = exitGame.substr(0, exitGame.size() - 1);
                        controlButtons.push_back(cursorMenu);
                        cursorPosition = 2;
                    }
                }
                system("cls");
                drawLogo();
                drawFirstMenu();
                moveCursor();
            }
            else if (pressedButton == 13)
            {
                exit(0);
            }
        }
    }

};

int main()
{
    mainMenu newGame;
    newGame.drawLogo();
    newGame.drawFirstMenu();
    newGame.moveCursor();


    return 0;
}
