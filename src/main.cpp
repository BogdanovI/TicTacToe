#include "gamecursor.h"
#include "gamefield.h"
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t cursorPos = 0;
    GameField *Field = new GameField;
    {
        GameCursor Cursor(Field);
        Cursor.setCurrentMarkerPosition(cursorPos);
    }

    return 0;
}
