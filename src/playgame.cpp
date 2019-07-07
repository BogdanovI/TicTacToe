#include "../include/playgame.h"

playGame::playGame()
{
    system("cls");
    drawLogo();
    drawMenu();
    moveCursor();
}
void playGame::drawMenu()
{
        for (int i =0;i < 5; i++)
        {
            cout << endl;
            cout << setw(8);
            for (int j = 0;j < 5; j++)
            {
                cout << gameField[i][j];
            }
        }
        cout << endl << setw(12) << backToMain;
        cout << endl << setw(12) << exitGame;
        if(playerTurn == PlayerOne)
            cout << endl << endl << setw(16) << "Turn player 1";
        else
            cout << endl << endl << setw(16) << "Turn player 2";
}
void playGame::changePlayer()
{
    if(playerTurn == PlayerOne)
        playerTurn = PlayerTwo;
    else
        playerTurn = PlayerOne;
}
int playGame::congratulationsPlayer(int playerWin)
{
    string winnerPlayer;
    if(playerWin == PlayerOne)
    {
        winnerPlayer = "Player 1 WIN GAME!";
    }
    else
    {
        winnerPlayer = "Player 2 WIN GAME!";
    }
    system("cls");
    drawLogo();
    cout << endl << setw(17) << "Congratulations";
    cout << endl << setw(19) << winnerPlayer;
    cout << endl << setw(12) << backToMain;
    cout << endl << setw(12) << exitGame;
    returnPosition = backMenu;
    return returnPosition;
}
int playGame::winCheck()
{
    int whoWin = noOne;
    if(*cellsField[0] == cursorGameX && *cellsField[1] == cursorGameX && *cellsField[2] == cursorGameX)
    {
        whoWin = PlayerOne;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[0] == cursorGameO && *cellsField[1] == cursorGameO && *cellsField[2] == cursorGameO)
    {
        whoWin = PlayerTwo;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[3] == cursorGameX && *cellsField[4] == cursorGameX && *cellsField[5] == cursorGameX)
    {
        whoWin = PlayerOne;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[3] == cursorGameO && *cellsField[4] == cursorGameO && *cellsField[5] == cursorGameO)
    {
        whoWin = PlayerTwo;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[6] == cursorGameX && *cellsField[7] == cursorGameX && *cellsField[8] == cursorGameX)
    {
        whoWin = PlayerOne;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[6] == cursorGameO && *cellsField[7] == cursorGameO && *cellsField[8] == cursorGameO)
    {
        whoWin = PlayerTwo;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[0] == cursorGameX && *cellsField[3] == cursorGameX && *cellsField[6] == cursorGameX)
    {
        whoWin = PlayerOne;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[0] == cursorGameO && *cellsField[3] == cursorGameO && *cellsField[6] == cursorGameO)
    {
        whoWin = PlayerTwo;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[2] == cursorGameX && *cellsField[5] == cursorGameX && *cellsField[8] == cursorGameX)
    {
        whoWin = PlayerOne;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[2] == cursorGameO && *cellsField[5] == cursorGameO && *cellsField[8] == cursorGameO)
    {
        whoWin = PlayerTwo;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[1] == cursorGameX && *cellsField[4] == cursorGameX && *cellsField[7] == cursorGameX)
    {
        whoWin = PlayerOne;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[1] == cursorGameO && *cellsField[4] == cursorGameO && *cellsField[7] == cursorGameO)
    {
        whoWin = PlayerTwo;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[0] == cursorGameX && *cellsField[4] == cursorGameX && *cellsField[8] == cursorGameX)
    {
        whoWin = PlayerOne;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[0] == cursorGameO && *cellsField[4] == cursorGameO && *cellsField[8] == cursorGameO)
    {
        whoWin = PlayerTwo;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[2] == cursorGameX && *cellsField[4] == cursorGameX && *cellsField[6] == cursorGameX)
    {
        whoWin = PlayerOne;
        congratulationsPlayer(whoWin);
    }
    else if(*cellsField[2] == cursorGameO && *cellsField[4] == cursorGameO && *cellsField[6] == cursorGameO)
    {
        whoWin = PlayerTwo;
        congratulationsPlayer(whoWin);
    }
}
void playGame::checkCell()
{
    for (int i = 0;i < 9;i++)
    {
        if(checkCells[i] == 1)
            *cellsField[i] = cursorGameX;
        else if(checkCells[i] == 2)
            *cellsField[i] = cursorGameO;
    }
}
int playGame::moveCursor()
{
    pressedBtn = getch();
    while (pressedBtn)
    {
        if(pressedBtn == Up || pressedBtn == Down || pressedBtn == Right || pressedBtn == Left)
        {
            if(cursorPosition == 1)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[0] = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[0] = ' ';
                    *cellsField[3] = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[0] = ' ';
                    *cellsField[1] = cursorMenu;
                    cursorPosition = 2;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[0] = ' ';
                    *cellsField[2] = cursorMenu;
                    cursorPosition = 3;
                }
            }
            else if(cursorPosition == 2)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[1] = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[1] = ' ';
                    *cellsField[4] = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[1] = ' ';
                    *cellsField[2] = cursorMenu;
                    cursorPosition = 3;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[1] = ' ';
                    *cellsField[0] = cursorMenu;
                    cursorPosition = 1;
                }
            }
            else if(cursorPosition == 3)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[2] = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[2] = ' ';
                    *cellsField[5] = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[2] = ' ';
                    *cellsField[0] = cursorMenu;
                    cursorPosition = 1;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[2] = ' ';
                    *cellsField[1] = cursorMenu;
                    cursorPosition = 2;
                }
            }
            else if(cursorPosition == 4)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[3] = ' ';
                    *cellsField[0] = cursorMenu;
                    cursorPosition = 1;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[3] = ' ';
                    *cellsField[6] = cursorMenu;
                    cursorPosition = 7;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[3] = ' ';
                    *cellsField[4] = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[3] = ' ';
                    *cellsField[5] = cursorMenu;
                    cursorPosition = 6;
                }
            }
            else if(cursorPosition == 5)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[4] = ' ';
                    *cellsField[1] = cursorMenu;
                    cursorPosition = 2;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[4] = ' ';
                    *cellsField[7] = cursorMenu;
                    cursorPosition = 8;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[4] = ' ';
                    *cellsField[5] = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[4] = ' ';
                    *cellsField[3] = cursorMenu;
                    cursorPosition = 4;
                }
            }
            else if(cursorPosition == 6)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[5] = ' ';
                    *cellsField[2] = cursorMenu;
                    cursorPosition = 3;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[5] = ' ';
                    *cellsField[8] = cursorMenu;
                    cursorPosition = 9;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[5] = ' ';
                    *cellsField[3] = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[5] = ' ';
                    *cellsField[4] = cursorMenu;
                    cursorPosition = 5;
                }
            }
            else if(cursorPosition == 7)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[6] = ' ';
                    *cellsField[3] = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[6] = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[6] = ' ';
                    *cellsField[7] = cursorMenu;
                    cursorPosition = 8;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[6] = ' ';
                    *cellsField[8] = cursorMenu;
                    cursorPosition = 9;
                }
            }
            else if(cursorPosition == 8)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[7] = ' ';
                    *cellsField[4] = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[7] = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[7] = ' ';
                    *cellsField[8] = cursorMenu;
                    cursorPosition = 9;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[7] = ' ';
                    *cellsField[6] = cursorMenu;
                    cursorPosition = 7;
                }
            }
            else if(cursorPosition == 9)
            {
                if(pressedBtn == Up)
                {
                    *cellsField[8] = ' ';
                    *cellsField[5] = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == Down)
                {
                    *cellsField[8] = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == Right)
                {
                    *cellsField[8] = ' ';
                    *cellsField[6] = cursorMenu;
                    cursorPosition = 7;
                }
                else if(pressedBtn == Left)
                {
                    *cellsField[8] = ' ';
                    *cellsField[7] = cursorMenu;
                    cursorPosition = 8;
                }
            }
            else if(cursorPosition == 10)
            {
                if(pressedBtn == Up)
                {
                    backToMain = backToMain.substr(0, backToMain.size() - 1);
                    *cellsField[7] = cursorMenu;
                    cursorPosition = 8;
                }
                else if(pressedBtn == Down)
                {
                    backToMain = backToMain.substr(0, backToMain.size() - 1);
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
            }
            else if (cursorPosition == 11)
            {
                if(pressedBtn == Up)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == Down)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    *cellsField[1] = cursorMenu;
                    cursorPosition = 2;
                }
            }
        }

        if(pressedBtn == Enter)
        {
            if(cursorPosition == 1)
            {
                if(playerTurn == 1 && *cellsField[0] != cursorGameO)
                {
                    *cellsField[0] = cursorGameX;
                    checkCells[0] = 1;
                    if(*cellsField[0] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[0] != cursorGameX)
                {
                    *cellsField[0] = cursorGameO;
                    checkCells[0] = 2;
                    if(*cellsField[0] == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 2)
            {
                if(playerTurn == 1 && *cellsField[1] != cursorGameO)
                {
                    *cellsField[1] = cursorGameX;
                    checkCells[1] = 1;
                    if(*cellsField[1] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[1] != cursorGameX)
                {
                    *cellsField[1] = cursorGameO;
                    checkCells[1] = 2;
                    if(*cellsField[1] == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 3)
            {
                if(playerTurn == 1 && *cellsField[2] != cursorGameO)
                {
                    *cellsField[2] = cursorGameX;
                    checkCells[2] = 1;
                    if(*cellsField[2] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[2] != cursorGameX)
                {
                    *cellsField[2] = cursorGameO;
                    checkCells[2] = 2;
                    if(*cellsField[2] == cursorGameO)
                    {
                        changePlayer();
                    }

                }
            }
            else if(cursorPosition == 4)
            {
                if(playerTurn == 1 && *cellsField[3] != cursorGameO)
                {
                    *cellsField[3] = cursorGameX;
                    checkCells[3] = 1;
                    if(*cellsField[3] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[3] != cursorGameX)
                {
                    *cellsField[3] = cursorGameO;
                    checkCells[3] = 2;
                    if(*cellsField[3] == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 5)
            {
                if(playerTurn == 1 && *cellsField[4] != cursorGameO)
                {
                    *cellsField[4] = cursorGameX;
                    checkCells[4] = 1;
                    if(*cellsField[4] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[4] != cursorGameX)
                {
                    *cellsField[4] = cursorGameO;
                    checkCells[4] = 2;
                    if(*cellsField[4] == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 6)
            {
                if(playerTurn == 1 && *cellsField[5] != cursorGameO)
                {
                    *cellsField[5] = cursorGameX;
                    checkCells[5] = 1;
                    if(*cellsField[5] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[5] != cursorGameX)
                {
                    *cellsField[5] = cursorGameO;
                    checkCells[5] = 2;
                    if(*cellsField[5] == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 7)
            {
                if(playerTurn == 1 && *cellsField[6] != cursorGameO)
                {
                    *cellsField[6] = cursorGameX;
                    checkCells[6] = 1;
                    if(*cellsField[6] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[6] != cursorGameX)
                {
                    *cellsField[6] = cursorGameO;
                    checkCells[6] = 2;
                    if(*cellsField[6] == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 8)
            {
                if(playerTurn == 1 && *cellsField[7] != cursorGameO)
                {
                    *cellsField[7] = cursorGameX;
                    checkCells[7] = 1;
                    if(*cellsField[7] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[7] != cursorGameX)
                {
                    *cellsField[7] = cursorGameO;
                    checkCells[7] = 2;
                    if(*cellsField[7] == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 9)
            {
                if(playerTurn == 1 && *cellsField[8] != cursorGameO)
                {
                    *cellsField[8] = cursorGameX;
                    checkCells[8] = 1;
                    if(*cellsField[8] == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellsField[8] != cursorGameX)
                {
                    *cellsField[8] = cursorGameO;
                    checkCells[8] = 2;
                    if(*cellsField[8] == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 10)
            {
                returnPosition = pressedBtn + 2;
                return returnPosition;
            }
            else if(cursorPosition == 11)
            {
                exit(0);
            }
        }
        system("cls");
        drawLogo();
        checkCell();
        drawMenu();
        winCheck();
        moveCursor();
    }
}
