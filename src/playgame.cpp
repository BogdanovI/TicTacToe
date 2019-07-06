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
            cout << setw(53);
            for (int j = 0;j < 5; j++)
            {
                cout << gameField[i][j];
            }
        }
        cout << endl << setw(57) << backToMain;
        cout << endl << setw(57) << exitGame;
        if(playerTurn == 1)
            cout << endl << endl << setw(62) << "Turn player 1";
        else
            cout << endl << endl << setw(62) << "Turn player 2";
}
void playGame::changePlayer()
{
    if(playerTurn == 1)
        playerTurn = 2;
    else
        playerTurn = 1;
}
int playGame::congratulationsPlayer(int playerWin)
{
    string winnerPlayer;
    if(playerWin == 1)
    {
        winnerPlayer = "Player 1 WIN GAME!";
    }
    else
    {
        winnerPlayer = "Player 2 WIN GAME!";
    }
    system("cls");
    drawLogo();
    cout << endl << setw(62) << "Congratulations";
    cout << endl << setw(64) << winnerPlayer;
    cout << endl << setw(57) << backToMain;
    cout << endl << setw(57) << exitGame;
    returnPosition = pressedBtn + 2;
    return returnPosition;
}
int playGame::winCheck()
{
    int whoWin = 0;
    if(*cellOne == cursorGameX && *cellTwo == cursorGameX && *cellThree == cursorGameX)
    {
        whoWin = 1;
        congratulationsPlayer(whoWin);
    }
    else if(*cellOne == cursorGameO && *cellTwo == cursorGameO && *cellThree == cursorGameO)
    {
        whoWin = 2;
        congratulationsPlayer(whoWin);
    }
    else if(*cellFour == cursorGameX && *cellFive == cursorGameX && *cellSix == cursorGameX)
    {
        whoWin = 1;
        congratulationsPlayer(whoWin);
    }
    else if(*cellFour == cursorGameO && *cellFive == cursorGameO && *cellSix == cursorGameO)
    {
        whoWin = 2;
        congratulationsPlayer(whoWin);
    }
    else if(*cellSeven == cursorGameX && *cellEight == cursorGameX && *cellNine == cursorGameX)
    {
        whoWin = 1;
        congratulationsPlayer(whoWin);
    }
    else if(*cellSeven == cursorGameO && *cellEight == cursorGameO && *cellNine == cursorGameO)
    {
        whoWin = 2;
        congratulationsPlayer(whoWin);
    }
    else if(*cellOne == cursorGameX && *cellFour == cursorGameX && *cellSeven == cursorGameX)
    {
        whoWin = 1;
        congratulationsPlayer(whoWin);
    }
    else if(*cellOne == cursorGameO && *cellFour == cursorGameO && *cellSeven == cursorGameO)
    {
        whoWin = 2;
        congratulationsPlayer(whoWin);
    }
    else if(*cellThree == cursorGameX && *cellSix == cursorGameX && *cellNine == cursorGameX)
    {
        whoWin = 1;
        congratulationsPlayer(whoWin);
    }
    else if(*cellThree == cursorGameO && *cellSix == cursorGameO && *cellNine == cursorGameO)
    {
        whoWin = 2;
        congratulationsPlayer(whoWin);
    }
    else if(*cellTwo == cursorGameX && *cellFive == cursorGameX && *cellEight == cursorGameX)
    {
        whoWin = 1;
        congratulationsPlayer(whoWin);
    }
    else if(*cellTwo == cursorGameO && *cellFive == cursorGameO && *cellEight == cursorGameO)
    {
        whoWin = 2;
        congratulationsPlayer(whoWin);
    }
    else if(*cellOne == cursorGameX && *cellFive == cursorGameX && *cellNine == cursorGameX)
    {
        whoWin = 1;
        congratulationsPlayer(whoWin);
    }
    else if(*cellOne == cursorGameO && *cellFive == cursorGameO && *cellNine == cursorGameO)
    {
        whoWin = 2;
        congratulationsPlayer(whoWin);
    }
    else if(*cellThree == cursorGameX && *cellFive == cursorGameX && *cellSeven == cursorGameX)
    {
        whoWin = 1;
        congratulationsPlayer(whoWin);
    }
    else if(*cellThree == cursorGameO && *cellFive == cursorGameO && *cellSeven == cursorGameO)
    {
        whoWin = 2;
        congratulationsPlayer(whoWin);
    }
}
void playGame::checkCell()
{

    switch (checkCellOne)
    {
    case 1:
        *cellOne = cursorGameX;
        break;
    case 2:
        *cellOne = cursorGameO;
        break;
    }
    switch (checkCellTwo)
    {
    case 1:
        *cellTwo = cursorGameX;
        break;
    case 2:
        *cellTwo = cursorGameO;
        break;
    }
    switch (checkCellThree)
    {
    case 1:
        *cellThree = cursorGameX;
        break;
    case 2:
        *cellThree = cursorGameO;
        break;
    }
    switch (checkCellFour)
    {
    case 1:
        *cellFour = cursorGameX;
        break;
    case 2:
        *cellFour = cursorGameO;
        break;
    }
    switch (checkCellFive)
    {
    case 1:
        *cellFive = cursorGameX;
        break;
    case 2:
        *cellFive = cursorGameO;
        break;
    }
    switch (checkCellSix)
    {
    case 1:
        *cellSix = cursorGameX;
        break;
    case 2:
        *cellSix = cursorGameO;
        break;
    }
    switch (checkCellSeven)
    {
    case 1:
        *cellSeven = cursorGameX;
        break;
    case 2:
        *cellSeven = cursorGameO;
        break;
    }
    switch (checkCellEight)
    {
    case 1:
        *cellEight = cursorGameX;
        break;
    case 2:
        *cellEight = cursorGameO;
        break;
    }
    switch (checkCellNine)
    {
    case 1:
        *cellNine = cursorGameX;
        break;
    case 2:
        *cellNine = cursorGameO;
        break;
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
                    *cellOne = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == Down)
                {
                    *cellOne = ' ';
                    *cellFour = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == Right)
                {
                    *cellOne = ' ';
                    *cellTwo = cursorMenu;
                    cursorPosition = 2;
                }
                else if(pressedBtn == Left)
                {
                    *cellOne = ' ';
                    *cellThree = cursorMenu;
                    cursorPosition = 3;
                }
            }
            else if(cursorPosition == 2)
            {
                if(pressedBtn == Up)
                {
                    *cellTwo = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == Down)
                {
                    *cellTwo = ' ';
                    *cellFive = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == Right)
                {
                    *cellTwo = ' ';
                    *cellThree = cursorMenu;
                    cursorPosition = 3;
                }
                else if(pressedBtn == Left)
                {
                    *cellTwo = ' ';
                    *cellOne = cursorMenu;
                    cursorPosition = 1;
                }
            }
            else if(cursorPosition == 3)
            {
                if(pressedBtn == Up)
                {
                    *cellThree = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == Down)
                {
                    *cellThree = ' ';
                    *cellSix = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == Right)
                {
                    *cellThree = ' ';
                    *cellOne = cursorMenu;
                    cursorPosition = 1;
                }
                else if(pressedBtn == Left)
                {
                    *cellThree = ' ';
                    *cellTwo = cursorMenu;
                    cursorPosition = 2;
                }
            }
            else if(cursorPosition == 4)
            {
                if(pressedBtn == Up)
                {
                    *cellFour = ' ';
                    *cellOne = cursorMenu;
                    cursorPosition = 1;
                }
                else if(pressedBtn == Down)
                {
                    *cellFour = ' ';
                    *cellSeven = cursorMenu;
                    cursorPosition = 7;
                }
                else if(pressedBtn == Right)
                {
                    *cellFour = ' ';
                    *cellFive = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == Left)
                {
                    *cellFour = ' ';
                    *cellSix = cursorMenu;
                    cursorPosition = 6;
                }
            }
            else if(cursorPosition == 5)
            {
                if(pressedBtn == Up)
                {
                    *cellFive = ' ';
                    *cellTwo = cursorMenu;
                    cursorPosition = 2;
                }
                else if(pressedBtn == Down)
                {
                    *cellFive = ' ';
                    *cellEight = cursorMenu;
                    cursorPosition = 8;
                }
                else if(pressedBtn == Right)
                {
                    *cellFive = ' ';
                    *cellSix = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == Left)
                {
                    *cellFive = ' ';
                    *cellFour = cursorMenu;
                    cursorPosition = 4;
                }
            }
            else if(cursorPosition == 6)
            {
                if(pressedBtn == Up)
                {
                    *cellSix = ' ';
                    *cellThree = cursorMenu;
                    cursorPosition = 3;
                }
                else if(pressedBtn == Down)
                {
                    *cellSix = ' ';
                    *cellNine = cursorMenu;
                    cursorPosition = 9;
                }
                else if(pressedBtn == Right)
                {
                    *cellSix = ' ';
                    *cellFour = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == Left)
                {
                    *cellSix = ' ';
                    *cellFive = cursorMenu;
                    cursorPosition = 5;
                }
            }
            else if(cursorPosition == 7)
            {
                if(pressedBtn == Up)
                {
                    *cellSeven = ' ';
                    *cellFour = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == Down)
                {
                    *cellSeven = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == Right)
                {
                    *cellSeven = ' ';
                    *cellEight = cursorMenu;
                    cursorPosition = 8;
                }
                else if(pressedBtn == Left)
                {
                    *cellSeven = ' ';
                    *cellNine = cursorMenu;
                    cursorPosition = 9;
                }
            }
            else if(cursorPosition == 8)
            {
                if(pressedBtn == Up)
                {
                    *cellEight = ' ';
                    *cellFive = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == Down)
                {
                    *cellEight = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == Right)
                {
                    *cellEight = ' ';
                    *cellNine = cursorMenu;
                    cursorPosition = 9;
                }
                else if(pressedBtn == Left)
                {
                    *cellEight = ' ';
                    *cellSeven = cursorMenu;
                    cursorPosition = 7;
                }
            }
            else if(cursorPosition == 9)
            {
                if(pressedBtn == Up)
                {
                    *cellNine = ' ';
                    *cellSix = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == Down)
                {
                    *cellNine = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == Right)
                {
                    *cellNine = ' ';
                    *cellSeven = cursorMenu;
                    cursorPosition = 7;
                }
                else if(pressedBtn == Left)
                {
                    *cellNine = ' ';
                    *cellEight = cursorMenu;
                    cursorPosition = 8;
                }
            }
            else if(cursorPosition == 10)
            {
                if(pressedBtn == Up)
                {
                    backToMain = backToMain.substr(0, backToMain.size() - 1);
                    *cellEight = cursorMenu;
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
                    *cellTwo = cursorMenu;
                    cursorPosition = 2;
                }
            }
        }

        if(pressedBtn == Enter)
        {
            if(cursorPosition == 1)
            {
                if(playerTurn == 1 && *cellOne != cursorGameO)
                {
                    *cellOne = cursorGameX;
                    checkCellOne = 1;
                    if(*cellOne == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellOne != cursorGameX)
                {
                    *cellOne = cursorGameO;
                    checkCellOne = 2;
                    if(*cellOne == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 2)
            {
                if(playerTurn == 1 && *cellTwo != cursorGameO)
                {
                    *cellTwo = cursorGameX;
                    checkCellTwo = 1;
                    if(*cellTwo == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellTwo != cursorGameX)
                {
                    *cellTwo = cursorGameO;
                    checkCellTwo = 2;
                    if(*cellTwo == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 3)
            {
                if(playerTurn == 1 && *cellThree != cursorGameO)
                {
                    *cellThree = cursorGameX;
                    checkCellThree = 1;
                    if(*cellThree == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellThree != cursorGameX)
                {
                    *cellThree = cursorGameO;
                    checkCellThree = 2;
                    if(*cellThree == cursorGameO)
                    {
                        changePlayer();
                    }

                }
            }
            else if(cursorPosition == 4)
            {
                if(playerTurn == 1 && *cellFour != cursorGameO)
                {
                    *cellFour = cursorGameX;
                    checkCellFour = 1;
                    if(*cellFour == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellFour != cursorGameX)
                {
                    *cellFour = cursorGameO;
                    checkCellFour = 2;
                    if(*cellFour == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 5)
            {
                if(playerTurn == 1 && *cellFive != cursorGameO)
                {
                    *cellFive = cursorGameX;
                    checkCellFive = 1;
                    if(*cellFive == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellFive != cursorGameX)
                {
                    *cellFive = cursorGameO;
                    checkCellFive = 2;
                    if(*cellFive == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 6)
            {
                if(playerTurn == 1 && *cellSix != cursorGameO)
                {
                    *cellSix = cursorGameX;
                    checkCellSix = 1;
                    if(*cellSix == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellSix != cursorGameX)
                {
                    *cellSix = cursorGameO;
                    checkCellSix = 2;
                    if(*cellSix == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 7)
            {
                if(playerTurn == 1 && *cellSeven != cursorGameO)
                {
                    *cellSeven = cursorGameX;
                    checkCellSeven = 1;
                    if(*cellSeven == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellSeven != cursorGameX)
                {
                    *cellSeven = cursorGameO;
                    checkCellSeven = 2;
                    if(*cellSeven == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 8)
            {
                if(playerTurn == 1 && *cellEight != cursorGameO)
                {
                    *cellEight = cursorGameX;
                    checkCellEight = 1;
                    if(*cellEight == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellEight != cursorGameX)
                {
                    *cellEight = cursorGameO;
                    checkCellEight = 2;
                    if(*cellEight == cursorGameO)
                    {
                        changePlayer();
                    }
                }
            }
            else if(cursorPosition == 9)
            {
                if(playerTurn == 1 && *cellNine != cursorGameO)
                {
                    *cellNine = cursorGameX;
                    checkCellNine = 1;
                    if(*cellNine == cursorGameX)
                    {
                        changePlayer();
                    }
                }
                else if(playerTurn == 2 && *cellNine != cursorGameX)
                {
                    *cellNine = cursorGameO;
                    checkCellNine = 2;
                    if(*cellNine == cursorGameO)
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
