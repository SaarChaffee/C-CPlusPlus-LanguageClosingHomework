#include "saarchaffee.h"
void displayone(List *phead) //���ָ����Ʒ��Ϣ
{
    char n[9];
    int i = 1, m;
    Order *p, *q, *r;
    p = phead->head->next;
    r = phead->head->next;
    Printcat(); //�г��嵥
    cout << "��ѡ����Ʒ�����(������0Ϊ����)" << endl;
    cin >> m;
    Printgood(m);
    cout << "��ѡ��Ҫ���ҵ���Ʒ���" << endl;
    cin >> n;
    while (1)
    {
        if (!p)
        {
            cout << "û���ҵ������Ʒ" << endl;
            cout << "�������ز˵�" << endl;
            return;
        }
        else if (!strcmp(n, p->goodsNo))
        {
            cout << "��Ʒ���" << setw(25) << "��Ʒ����" << setw(15) << "�������" << setw(15) << "��������" << setw(15) << "����" << endl;
            cout << p->goodsNo;
            for (int i = 0;; i++)
            {
                if (!strcmp(good[i].gdsNo, p->goodsNo))
                {
                    cout << setw(15) << good[i].gdsName << setw(15) << good[i].stock << setw(15) << good[i].sales << setw(15) << good[i].price << endl;
                    delete p, q, r;
                    return;
                }
            }
        }
        else
        {
            p = p->next;
        }
    }
}
