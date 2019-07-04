#include <iostream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <conio.h>
#include "../include/mainmenu.h"
#include "../include/controlmenu.h"

int main()
{
    mainMenu newGame;
    controlMenu settingsGame;
    newGame.startGame();
    for (;;) {
        if(newGame.transition() == 13)
        {
            settingsGame.showControlMenu();
        }
        if(newGame.transition() == 13)
        {
            newGame.startGame();
        }
    }
    return 0;
}
