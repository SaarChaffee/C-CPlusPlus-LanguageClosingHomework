#include "saarchaffee.h"
bool gdscmp(_goods a, _goods b)
{

    if (strcmp(a.gdsNo, b.gdsNo) < 0)
    {
        return true;
    }
    else
        return false;
}
