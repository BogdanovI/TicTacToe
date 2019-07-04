#include "../include/playgame.h"

void playGame::drawMenu()
{
    system("cls");
        for (int i =0;i < 5; i++)
        {
            cout << setw(20);
            for (int j = 0;j < 5; j++)
            {
                cout << gameField[i][j];
            }
            cout << setw(20) << endl;
        }
}
int playGame::moveCursor()
{

}
