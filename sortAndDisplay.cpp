#include "saarchaffee.h"
void sortAndDisplay(List *phead)
{
    if (phead->head == NULL || phead->head->next == NULL)
    {
        cout << "没有销售记录" << endl;
        cout << "按回车返回菜单" << endl;
        system("pause");
        return;
    }
    else
        cout << setw(15) << "商品编号" << setw(25) << "商品名称" << setw(15) << "销售数量" << setw(15) << "单价" << setw(15) << "总金额" << endl;
    Order *p = phead->head->next, *pstart = new Order, *pend = phead->head;
    pstart->next = phead->head; //为了操作方便，添加一个头结点
    while (p)
    {
        Order *temp = pstart->next, *pre = pstart;
        while (temp != p && p->qty >= temp->qty) //找到插入位置
        {
            temp = temp->next;
            pre = pre->next;
        }
        if (temp == p)
            pend = p;
        else
        {
            pend->next = p->next;
            p->next = temp;
            pre->next = p;
        }
        p = pend->next;
    }
    phead->head = pstart->next;
    delete pstart, pend;
    p = phead->head->next;
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
        if (p->next == NULL)
        {
            phead->tail->next = p;
        }
        p = p->next;
    }
    delete p;
    return;
}
