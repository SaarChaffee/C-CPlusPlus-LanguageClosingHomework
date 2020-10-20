#include "saarchaffee.h"
Goods *Findgood(char *flag2) //找库存
{
    for (int i = 0; strcmp(good[i].gdsNo, "0") != 0; i++)
    {
        if (strcmp(flag2, good[i].gdsNo) == 0)
        {
            return &good[i]; //返回库存量的地址
        }
    }
    return NULL;
}
