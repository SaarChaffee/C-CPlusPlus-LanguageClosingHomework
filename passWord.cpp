#include "saarchaffee.h"
int passWord()
{
    FILE *KEY = fopen("password.bin", "r");
    if (!KEY)
    {
        fclose(KEY);
        return setPassword();
    }
    else
    {
        fclose(KEY);
        return checkPassword();
    }
}
