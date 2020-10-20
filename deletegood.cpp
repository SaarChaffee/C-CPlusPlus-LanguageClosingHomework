#include "saarchaffee.h"
void deletegood(List *phead)
{
    int n;
    Order *p = phead->head->next;
    Order *q = phead->head;
    Order *r = phead->tail;
    Order *s;
    printOrder(phead);
    cout << "请输入要删除的订单号(你可以输入0退出)" << endl;
    cout << "警告：此操作不可逆，请谨慎操作" << endl;
    cin >> n;
    if (!n)
    {
        cout << "即将返回菜单";
        return;
    }
    while (p)
    {
        while (p->orderNo == n)
        {
            if (p == phead->head->next)
            {
                phead->head->next = p->next;
                s = p;
                p = p->next;
                delete s;
                if (p->orderNo == n + 1)
                {
                    cout << "删除成功，即将返回菜单";
                    return;
                }
            }
            else if (p == phead->tail->next)
            {
                phead->tail->next = q;
                delete p;
                cout << "删除成功，即将返回菜单";
                return;
            }
            else
            {
                q->next = p->next;
                s = p;
                p = p->next;
                delete s;
            }
        }
        p = p->next;
        if (q->next->orderNo != n)
        {
            q = q->next;
        }
    }
    cout << "没有找到这个订单，即将返回主菜单" << endl;
}
