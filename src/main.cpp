#include "../include/mainmenu.h"
#include "../include/playgame.h"
#include "../include/controlmenu.h"

int main()
{
    system ("mode con cols=20 lines=10");
    COORD crd = {20, 10};
    SMALL_RECT src = {0, 0, crd.X, crd.Y};
    SetConsoleScreenBufferSize (GetStdHandle (STD_OUTPUT_HANDLE), crd);
    SetConsoleWindowInfo (GetStdHandle (STD_OUTPUT_HANDLE), TRUE, &src);

    mainMenu newGame;
    controlMenu settingsGame;
    newGame.startGame();
    for (;;) {
        if(newGame.returnPosition == newGame.inControl)
        {
            settingsGame.showControlMenu();
            if(settingsGame.returnPosition == newGame.backMenu)
            {
                newGame.startGame();
            }
        }
        if(newGame.returnPosition == newGame.inGame)
        {
            playGame* newField = new playGame();
            if(newField->returnPosition == newGame.backMenu)
            {
                newGame.startGame();
            }
            delete newField;
        }
    }


    return 0;
}
