#include "saarchaffee.h"
void displayorder(List *phead) //输出所有链表
{
    Order *p;
    p = phead->head->next;
    if (!p)
    {
        cout << "没有销售记录" << endl;
        cout << "按回车返回菜单" << endl;
        system("pause");
        return;
    }
    else
        cout << setw(15) << "商品编号" << setw(25) << "商品名称" << setw(15) << "销售数量" << setw(15) << "单价" << setw(15) << "总金额" << endl;
    while (p)
    {
        cout << setw(15) << p->goodsNo;
        for (int i = 0;; i++)
        {
            if (!strcmp(good[i].gdsNo, p->goodsNo))
            {
                cout << setw(25) << good[i].gdsName;
                break;
            }
        }
        cout << setw(15) << p->qty << setw(15) << p->price << setw(15) << p->amount << endl;
        p = p->next;
    }
    return;
}
