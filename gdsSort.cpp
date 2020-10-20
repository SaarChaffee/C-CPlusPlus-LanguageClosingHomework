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
    cout << "商品号      商品类别    商品名\t单价\t库存\t库存额\t\t销量\t销售额" << endl;
    for (int j = 0; j < i; j++)
    {
        cout << good[j].gdsNo << setw(5) << good[j].catName << setw(15) << good[j].gdsName << setw(15) << good[j].price << setw(15) << good[j].stock << setw(15) << good[j].stock * good[j].price << setw(15) << good[j].sales << setw(15) << good[j].sales * good[j].price << endl;
    }
}
