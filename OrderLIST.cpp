#include "saarchaffee.h"
void OrderLIST(Order **goods, int orderNO, char *Name, float price, int flag, Order *next)
{
    Order *p = (Order *)malloc(sizeof(struct _order));
    p->qty = flag;
    p->price = price;
    p->amount = flag * price;
    strcpy(p->goodsNo, Name);
    p->orderNo = orderNO;
    p->next = next;       //指向空
    (*(goods))->next = p; //移动指针
    *(goods) = p;
    return;
}
