#include "saarchaffee.h"
Goods *Findgood(char *flag2) //�ҿ��
{
    for (int i = 0; strcmp(good[i].gdsNo, "0") != 0; i++)
    {
        if (strcmp(flag2, good[i].gdsNo) == 0)
        {
            return &good[i]; //���ؿ�����ĵ�ַ
        }
    }
    return NULL;
}
