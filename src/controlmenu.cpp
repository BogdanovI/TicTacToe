#include "../include/controlmenu.h"

void controlMenu::showControlMenu()
{
        system("cls");
        drawLogo();
        drawMenu();
        moveCursor();
        cursorPosition = 1;
}
void controlMenu::drawMenu()
{
    cout << setw(57) << endl << moveUP;
    cout << setw(59) << endl << moveDOWN;
    cout << setw(59) << endl << moveLEFT;
    cout << setw(60) << endl << moveRIGHT;
    cout << setw(52) << endl << backToMain;
    cout << setw(52) << endl << exitGame;
}
int controlMenu::moveCursor()
{
    pressedBtn = getch();
    while (pressedBtn)
    {
        if(pressedBtn == 115 || pressedBtn == 119 || pressedBtn == 13)
        {
            if(cursorPosition == 1 && (pressedBtn == 115 || pressedBtn == 119))
            {
                backToMain = backToMain.substr(0, backToMain.size() - 1);
                exitGame.push_back(cursorMenu);
                cursorPosition = 2;
            }
            else if(cursorPosition == 2 && (pressedBtn == 115 || pressedBtn == 119))
            {
                exitGame = exitGame.substr(0, exitGame.size() - 1);
                backToMain.push_back(cursorMenu);
                cursorPosition = 1;
            }
            if(pressedBtn == 13)
            {
                if(cursorPosition == 1)
                {
                    return pressedBtn;
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
//        int transition();
    }
}
