#include "../include/mainmenu.h"
#include "../include/playgame.h"
#include "../include/controlmenu.h"

int main()
{
    mainMenu newGame;
    controlMenu settingsGame;
    newGame.startGame();
    for (;;) {
        if(newGame.returnPosition == 13)
        {
            settingsGame.showControlMenu();
            if(settingsGame.returnPosition == 15)
            {
                newGame.startGame();
            }
        }
        if(newGame.returnPosition == 14)
        {
            playGame* newField = new playGame();
            if(newField->returnPosition == 15)
            {
                newGame.startGame();
            }
        }
    }
    return 0;
}
