#include "gamecursor.h"

unsigned int GameCursor::setCurrentMarkerPosition(size_t value)
{
    while (pressedButton != Enter)
    {
        pressedButton = getch();
        field->fieldForPlay[value] = ' ';
        switch (pressedButton)
        {
        case Up:
            if (value <= field->rangeField)
            {
                value = (field->rangeField * field->rangeField) - static_cast<unsigned int>(field->rangeField / 2);
                field->fieldForPlay[value] = '*';
            }
            else
            {
                value -= field->rangeField;
                field->fieldForPlay[value] = '*';
            }
            break;
        case Down:
            if (value >= field->rangeField * field->rangeField - field->rangeField)
            {
                value = field->rangeField - static_cast<unsigned int>(field->rangeField / 2);
                field->fieldForPlay[value] = '*';
            }
            else
            {
                value += field->rangeField;
                field->fieldForPlay[value] = '*';
            }
            break;
        case Right:
            if (value == field->rangeField * field->rangeField)
            {
                value = 0;
                field->fieldForPlay[value] = '*';
            }
            else
            {
                value += 1;
                field->fieldForPlay[value] = '*';
            }
            break;
        case Left:
            if (value == 0)
            {
                value = field->rangeField * field->rangeField;
                field->fieldForPlay[value] = '*';
            }
            else
            {
                value -= 1;
                field->fieldForPlay[value] = '*';
            }
            break;
        }
        system("cls");
        field->draw();
    }
}
