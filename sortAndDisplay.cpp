#include "saarchaffee.h"
void sortAndDisplay(List *phead)
{
    if (phead->head == NULL || phead->head->next == NULL)
    {
        cout << "û�����ۼ�¼" << endl;
        cout << "���س����ز˵�" << endl;
        system("pause");
        return;
    }
    else
        cout << setw(15) << "��Ʒ���" << setw(25) << "��Ʒ����" << setw(15) << "��������" << setw(15) << "����" << setw(15) << "�ܽ��" << endl;
    Order *p = phead->head->next, *pstart = new Order, *pend = phead->head;
    pstart->next = phead->head; //Ϊ�˲������㣬���һ��ͷ���
    while (p)
    {
        Order *temp = pstart->next, *pre = pstart;
        while (temp != p && p->qty >= temp->qty) //�ҵ�����λ��
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
