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
void playGame::winCheck()
{

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
        if(pressedBtn == 119 || pressedBtn == 115 || pressedBtn == 100 || pressedBtn == 97)
        {
            if(cursorPosition == 1)
            {
                if(pressedBtn == 119)
                {
                    *cellOne = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == 115)
                {
                    *cellOne = ' ';
                    *cellFour = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == 100)
                {
                    *cellOne = ' ';
                    *cellTwo = cursorMenu;
                    cursorPosition = 2;
                }
                else if(pressedBtn == 97)
                {
                    *cellOne = ' ';
                    *cellThree = cursorMenu;
                    cursorPosition = 3;
                }
            }
            else if(cursorPosition == 2)
            {
                if(pressedBtn == 119)
                {
                    *cellTwo = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == 115)
                {
                    *cellTwo = ' ';
                    *cellFive = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == 100)
                {
                    *cellTwo = ' ';
                    *cellThree = cursorMenu;
                    cursorPosition = 3;
                }
                else if(pressedBtn == 97)
                {
                    *cellTwo = ' ';
                    *cellOne = cursorMenu;
                    cursorPosition = 1;
                }
            }
            else if(cursorPosition == 3)
            {
                if(pressedBtn == 119)
                {
                    *cellThree = ' ';
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
                else if(pressedBtn == 115)
                {
                    *cellThree = ' ';
                    *cellSix = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == 100)
                {
                    *cellThree = ' ';
                    *cellOne = cursorMenu;
                    cursorPosition = 1;
                }
                else if(pressedBtn == 97)
                {
                    *cellThree = ' ';
                    *cellTwo = cursorMenu;
                    cursorPosition = 2;
                }
            }
            else if(cursorPosition == 4)
            {
                if(pressedBtn == 119)
                {
                    *cellFour = ' ';
                    *cellOne = cursorMenu;
                    cursorPosition = 1;
                }
                else if(pressedBtn == 115)
                {
                    *cellFour = ' ';
                    *cellSeven = cursorMenu;
                    cursorPosition = 7;
                }
                else if(pressedBtn == 100)
                {
                    *cellFour = ' ';
                    *cellFive = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == 97)
                {
                    *cellFour = ' ';
                    *cellSix = cursorMenu;
                    cursorPosition = 6;
                }
            }
            else if(cursorPosition == 5)
            {
                if(pressedBtn == 119)
                {
                    *cellFive = ' ';
                    *cellTwo = cursorMenu;
                    cursorPosition = 2;
                }
                else if(pressedBtn == 115)
                {
                    *cellFive = ' ';
                    *cellEight = cursorMenu;
                    cursorPosition = 8;
                }
                else if(pressedBtn == 100)
                {
                    *cellFive = ' ';
                    *cellSix = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == 97)
                {
                    *cellFive = ' ';
                    *cellFour = cursorMenu;
                    cursorPosition = 4;
                }
            }
            else if(cursorPosition == 6)
            {
                if(pressedBtn == 119)
                {
                    *cellSix = ' ';
                    *cellThree = cursorMenu;
                    cursorPosition = 3;
                }
                else if(pressedBtn == 115)
                {
                    *cellSix = ' ';
                    *cellNine = cursorMenu;
                    cursorPosition = 9;
                }
                else if(pressedBtn == 100)
                {
                    *cellSix = ' ';
                    *cellFour = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == 97)
                {
                    *cellSix = ' ';
                    *cellFive = cursorMenu;
                    cursorPosition = 5;
                }
            }
            else if(cursorPosition == 7)
            {
                if(pressedBtn == 119)
                {
                    *cellSeven = ' ';
                    *cellFour = cursorMenu;
                    cursorPosition = 4;
                }
                else if(pressedBtn == 115)
                {
                    *cellSeven = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == 100)
                {
                    *cellSeven = ' ';
                    *cellEight = cursorMenu;
                    cursorPosition = 8;
                }
                else if(pressedBtn == 97)
                {
                    *cellSeven = ' ';
                    *cellNine = cursorMenu;
                    cursorPosition = 9;
                }
            }
            else if(cursorPosition == 8)
            {
                if(pressedBtn == 119)
                {
                    *cellEight = ' ';
                    *cellFive = cursorMenu;
                    cursorPosition = 5;
                }
                else if(pressedBtn == 115)
                {
                    *cellEight = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == 100)
                {
                    *cellEight = ' ';
                    *cellNine = cursorMenu;
                    cursorPosition = 9;
                }
                else if(pressedBtn == 97)
                {
                    *cellEight = ' ';
                    *cellSeven = cursorMenu;
                    cursorPosition = 7;
                }
            }
            else if(cursorPosition == 9)
            {
                if(pressedBtn == 119)
                {
                    *cellNine = ' ';
                    *cellSix = cursorMenu;
                    cursorPosition = 6;
                }
                else if(pressedBtn == 115)
                {
                    *cellNine = ' ';
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == 100)
                {
                    *cellNine = ' ';
                    *cellSeven = cursorMenu;
                    cursorPosition = 7;
                }
                else if(pressedBtn == 97)
                {
                    *cellNine = ' ';
                    *cellEight = cursorMenu;
                    cursorPosition = 8;
                }
            }
            else if(cursorPosition == 10)
            {
                if(pressedBtn == 119)
                {
                    backToMain = backToMain.substr(0, backToMain.size() - 1);
                    *cellEight = cursorMenu;
                    cursorPosition = 8;
                }
                else if(pressedBtn == 115)
                {
                    backToMain = backToMain.substr(0, backToMain.size() - 1);
                    exitGame.push_back(cursorMenu);
                    cursorPosition = 11;
                }
            }
            else if (cursorPosition == 11)
            {
                if(pressedBtn == 119)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    backToMain.push_back(cursorMenu);
                    cursorPosition = 10;
                }
                else if(pressedBtn == 115)
                {
                    exitGame = exitGame.substr(0, exitGame.size() - 1);
                    *cellTwo = cursorMenu;
                    cursorPosition = 2;
                }
            }
        }

        if(pressedBtn == 13)
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
