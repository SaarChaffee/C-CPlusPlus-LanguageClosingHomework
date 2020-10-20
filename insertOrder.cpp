#include "saarchaffee.h"
int Orderlist;
void insertOrder(List *phead) //尾插法建立链表
{
    phead->head = new Order;
    phead->tail = new Order;
    phead->head->next = NULL;
    int n = 1;
    Order *p, *q;
    fstream file;
    file.open("order_gbk.txt");
    if (!file)
    {
        cout << "没找到文件" << endl;
        cout << "即将返回菜单" << endl;
        return;
    }
    char head_1[100], head_2[100];
    file >> head_1;
    file >> head_2;
    q = phead->head;
    while (!file.eof())
    {
        p = new Order;
        file >> p->orderNo >> p->goodsNo >> p->qty >> p->price >> p->amount;
        q->next = p;
        p->next = NULL;
        q = p;
    }
    phead->tail->next = q;
    Orderlist = phead->tail->next->orderNo;
    file.close();
    return;
}
