#include "saarchaffee.h"
void OrderLIST(Order **goods, int orderNO, char *Name, float price, int flag, Order *next)
{
    Order *p = (Order *)malloc(sizeof(struct _order));
    p->qty = flag;
    p->price = price;
    p->amount = flag * price;
    strcpy(p->goodsNo, Name);
    p->orderNo = orderNO;
    p->next = next;       //ָ���
    (*(goods))->next = p; //�ƶ�ָ��
    *(goods) = p;
    return;
}
