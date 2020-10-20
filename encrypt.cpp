#include "saarchaffee.h"
void encrypt(char pw[])
{
    for (int i = 0; pw[i] != '\0'; i++)
    {
        pw[i] += i;
    }
}
