#include "saarchaffee.h"
int Orderlist;
void insertOrder(List *phead) //β�巨��������
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
        cout << "û�ҵ��ļ�" << endl;
        cout << "�������ز˵�" << endl;
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
