#include "../include/controlmenu.h"

void controlMenu::showControlMenu()
{
        system("cls");
        drawLogo();
        drawMenu();
        moveCursor();
        cursorPosition = posOne;
}
void controlMenu::drawMenu()
{
    cout << setw(15) << endl << moveUP;
    cout << setw(17) << endl << moveDOWN;
    cout << setw(17) << endl << moveLEFT;
    cout << setw(18) << endl << moveRIGHT;
    cout << setw(10) << endl << backToMain;
    cout << setw(10) << endl << exitGame;
}
int controlMenu::moveCursor()
{
    pressedBtn = getch();
    while (pressedBtn)
    {
        if(pressedBtn == Down || pressedBtn == Up)
        {
            if(cursorPosition == 1 && (pressedBtn == Down || pressedBtn == Up))
            {
                backToMain = backToMain.substr(0, backToMain.size() - 1);
                exitGame.push_back(cursorMenu);
                cursorPosition = 2;
            }
            else if(cursorPosition == 2 && (pressedBtn == Down || pressedBtn == Up))
            {
                exitGame = exitGame.substr(0, exitGame.size() - 1);
                backToMain.push_back(cursorMenu);
                cursorPosition = 1;
            }

        }
        if(pressedBtn == Enter)
        {
            if(cursorPosition == 1)
            {
                returnPosition = backMenu;
                return returnPosition;
            }
            if(cursorPosition == 2)
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
