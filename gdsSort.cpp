#include "saarchaffee.h"
void gdsSort()
{
    system("cls");
    int i = 0;
    for (; i < 100; i++)
    {
        if (!good[i].cat)
            break;
    }
    sort(good, good + i, gdscmp);
    cout << "��Ʒ��      ��Ʒ���    ��Ʒ��\t����\t���\t����\t\t����\t���۶�" << endl;
    for (int j = 0; j < i; j++)
    {
        cout << good[j].gdsNo << setw(5) << good[j].catName << setw(15) << good[j].gdsName << setw(15) << good[j].price << setw(15) << good[j].stock << setw(15) << good[j].stock * good[j].price << setw(15) << good[j].sales << setw(15) << good[j].sales * good[j].price << endl;
    }
}
