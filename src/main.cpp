#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include "../include/mainmenu.h"
#include "../include/playgame.h"
#include "../include/controlmenu.h"

int main()
{
    mainMenu newGame;
    controlMenu settingsGame;
    playGame newField;
    newGame.startGame();
    for (;;) {
        if(newGame.returnPosition == 13)
        {
            settingsGame.showControlMenu();
        }
        if(newGame.returnPosition == 14)
        {
            newField.drawMenu();
        }
        if(settingsGame.returnPosition == 15)
        {
            newGame.startGame();
        }
    }
    return 0;
}
