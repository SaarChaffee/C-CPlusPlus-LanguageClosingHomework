#include "saarchaffee.h"
void salegood(List *phead) //������Ʒ
{

    Order *head = phead->head->next; //ͷ���
    Order *next = phead->tail->next;
    while (1)
    {
        Printcat(); //�г��嵥
        cout << "��ѡ����Ʒ�����(������0Ϊ����)" << endl;
        int flag;
        cin >> flag;
        if (flag == 0) //����0��ֹ����
        {
            cout << "������Ϊ" << ++Orderlist << endl;
            return;
        }
        Printgood(flag);
        cout << "��ѡ����Ʒ���" << endl;
        char flag2[50];

        Goods *num; //��¼ʣ������
        cin >> flag2;
        num = Findgood(flag2); //�����ýڵ��Ժ���ʹ��
        int flag3;
        cout << "�����빺�������" << endl;
        cin >> flag3;
        if (num->stock < flag3)
        {
            cout << "����ʧ��(��治��)" << endl;
            continue;
        }
        else
        {
            //OrderLIST( &head , num->gdsName , num->price , flag3 , (head->next));
            OrderLIST(&phead->tail->next, Orderlist, num->gdsNo, num->price, flag3, NULL);
            num->stock = num->stock - flag3;
            num->sales = num->sales + flag3;
            cout << "�����ɹ�" << endl;
        }
    }
}
