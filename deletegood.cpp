#include "saarchaffee.h"
void deletegood(List *phead)
{
    int n;
    Order *p = phead->head->next;
    Order *q = phead->head;
    Order *r = phead->tail;
    Order *s;
    printOrder(phead);
    cout << "������Ҫɾ���Ķ�����(���������0�˳�)" << endl;
    cout << "���棺�˲��������棬���������" << endl;
    cin >> n;
    if (!n)
    {
        cout << "�������ز˵�";
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
                    cout << "ɾ���ɹ����������ز˵�";
                    return;
                }
            }
            else if (p == phead->tail->next)
            {
                phead->tail->next = q;
                delete p;
                cout << "ɾ���ɹ����������ز˵�";
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
    cout << "û���ҵ���������������������˵�" << endl;
}
