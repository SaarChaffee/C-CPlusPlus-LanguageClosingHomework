#include "saarchaffee.h"
void displaycat(List *phead) //输出一类商品
{
    int i = 1, n;
    Order *p, *q, *r;
    p = phead->head->next;
    Printcat(); //列出清单
    cout << "请选择商品类别编号(以输入0为结束)" << endl;
    cin >> n;
    if (!n)
    {
        cout << "即将返回菜单";
        return;
    }
    else if (n > 6)
    {
        cout << "没有这个类别的商品，即将返回主菜单";
        return;
    }
    else
    {
        int i = 0;
        for (; i < 100; i++)
        {
            if (!good[i].cat)
                break;
        }
        cout << "订单号" << setw(15) << "商品编号" << setw(15) << "商品名称" << setw(15) << "销售数量" << setw(15) << "单价" << setw(15) << "总金额" << endl;
        for (int j = 0; j < i; j++)
        {
            if (good[j].cat == n)
            {
                while (p)
                {
                    if (!strcmp(good[j].gdsNo, p->goodsNo))
                    {
                        cout << p->orderNo << setw(15) << p->goodsNo << setw(15) << good[i].gdsName << setw(15) << p->qty << setw(15) << p->price << setw(15) << p->amount << endl;
                    }
                    p = p->next;
                }
            }
        }
    }
}
