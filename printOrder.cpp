#include "saarchaffee.h"
void printOrder(List *phead) //�����������
{
    Order *p = phead->head->next;
    cout << "������" << setw(15) << "��Ʒ���" << setw(15) << "��Ʒ��" << setw(15) << "����" << setw(15) << "����" << setw(15) << "�ܽ��" << endl;
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
