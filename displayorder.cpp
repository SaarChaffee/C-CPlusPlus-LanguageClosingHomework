#include "saarchaffee.h"
void displayorder(List *phead) //�����������
{
    Order *p;
    p = phead->head->next;
    if (!p)
    {
        cout << "û�����ۼ�¼" << endl;
        cout << "���س����ز˵�" << endl;
        system("pause");
        return;
    }
    else
        cout << setw(15) << "��Ʒ���" << setw(25) << "��Ʒ����" << setw(15) << "��������" << setw(15) << "����" << setw(15) << "�ܽ��" << endl;
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
        p = p->next;
    }
    return;
}
