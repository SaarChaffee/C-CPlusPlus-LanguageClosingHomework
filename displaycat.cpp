#include "saarchaffee.h"
void displaycat(List *phead) //���һ����Ʒ
{
    int i = 1, n;
    Order *p, *q, *r;
    p = phead->head->next;
    Printcat(); //�г��嵥
    cout << "��ѡ����Ʒ�����(������0Ϊ����)" << endl;
    cin >> n;
    if (!n)
    {
        cout << "�������ز˵�";
        return;
    }
    else if (n > 6)
    {
        cout << "û�����������Ʒ�������������˵�";
        return;
    }
    else
    {
        int i = 0;
        for (; i < 100; i++)
        {
            if (!good[i].cat)
                break;
        }
        cout << "������" << setw(15) << "��Ʒ���" << setw(15) << "��Ʒ����" << setw(15) << "��������" << setw(15) << "����" << setw(15) << "�ܽ��" << endl;
        for (int j = 0; j < i; j++)
        {
            if (good[j].cat == n)
            {
                while (p)
                {
                    if (!strcmp(good[j].gdsNo, p->goodsNo))
                    {
                        cout << p->orderNo << setw(15) << p->goodsNo << setw(15) << good[i].gdsName << setw(15) << p->qty << setw(15) << p->price << setw(15) << p->amount << endl;
                    }
                    p = p->next;
                }
            }
        }
    }
}
