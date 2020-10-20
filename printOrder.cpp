#include "saarchaffee.h"
void printOrder(List *phead) //输出订单内容
{
    Order *p = phead->head->next;
    cout << "订单号" << setw(15) << "商品编号" << setw(15) << "商品名" << setw(15) << "单价" << setw(15) << "销量" << setw(15) << "总金额" << endl;
    while (p)
    {
        cout << p->orderNo;
        for (int i = 0;; i++)
        {
            if (!strcmp(good[i].gdsNo, p->goodsNo))
            {
                cout << setw(15) << p->goodsNo << setw(15) << good[i].gdsName;
                break;
            }
        }
        cout << setw(15) << p->price << setw(15) << p->qty << setw(15) << p->amount << endl;
        p = p->next;
    }
}
