#include "gamefield.h"

GameField::GameField()
{
    cout << "Enter quantity cells: ";
    cin >> rangeField;
    rangeField = (rangeField * 2) - 1;
    for (size_t fieldDrawing = 0; fieldDrawing < rangeField; fieldDrawing++)
    {
        for (size_t i = 0; i < rangeField; i++)
        {
            if (i % 2 == 0)
            {
                fieldForPlay.push_back(' ');
            }
            else
            {
                fieldForPlay.push_back('|');
            }
        }
        for (size_t j = 0; j < rangeField; j++)
        {
            fieldForPlay.push_back('-');
        }
    }
}

void GameField::draw()
{
    for (unsigned int i = 0; i < rangeField * rangeField; i++)
    {
        cout << fieldForPlay[i];
        if ((i + 1) % rangeField == 0 && i != 0)
        {
            cout << endl;
        }
    }
}
