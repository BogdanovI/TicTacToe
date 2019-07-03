#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

class mainMenu
{
protected:
    int cursorPosition = 1;
    char cursorMenu = '<';
    string playGame {"Play game<"};
    string controlButtons {"Control buttons"};
    string exitGame {"Exit"};
    int pressedBtn;
public:
    void startGame()
    {
        system("cls");
        drawLogo();
        drawMenu();
        moveCursor();
    }
    virtual ~mainMenu(){}
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
    virtual void drawMenu()
    {
        cout << setw(57) << endl << playGame;
        cout << setw(63) << endl << controlButtons;
        cout << setw(52) << endl << exitGame;
    }
    virtual int moveCursor()
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
                    if(pressedBtn == 13)
                    {
                        transition();
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
                    if (pressedBtn == 13)
                    {
                        exit(0);
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
    virtual int transition()
    {
        return pressedBtn;
    }
};

class controlMenu : public mainMenu
{
private:
    string moveUP {"w - cursor UP"};
    string moveDOWN {"s - cursor DOWN"};
    string moveLEFT {"a - cursor LEFT"};
    string moveRIGHT {"d - cursor RIGHT"};
    string backToMain {"Back<"};
public:
    controlMenu()
    {
        system("cls");
        drawLogo();
        drawMenu();
        moveCursor();
        cursorPosition = 1;
    }
    virtual ~controlMenu(){}
    void drawMenu()
    {
        cout << setw(57) << endl << moveUP;
        cout << setw(59) << endl << moveDOWN;
        cout << setw(59) << endl << moveLEFT;
        cout << setw(60) << endl << moveRIGHT;
        cout << setw(52) << endl << backToMain;
        cout << setw(52) << endl << exitGame;
    }
    int moveCursor()
    {

        pressedBtn = getch();
        while (pressedBtn)
        {
            if(pressedBtn == 115 || pressedBtn == 119)
            {
                if(cursorPosition == 1)
                {
                    backToMain = backToMain.substr(0, backToMain.size() - 1);
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 2;
                    if(pressedBtn == 13)
                    {
                        return transition();
                    }
                }
                else if(cursorPosition == 2)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 1;
                    if(pressedBtn == 13)
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
    }
    int transition()
    {
        return pressedBtn;
    }
};

int main()
{
    mainMenu newGame;
    newGame.startGame();
    if(newGame.transition() == 13)
    {
    controlMenu settingsGame;
    }
    if(newGame.transition() == 13)
    {
        newGame.startGame();
    }


    return 0;
}
