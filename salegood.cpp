#include "saarchaffee.h"
void salegood(List *phead) //销售商品
{

    Order *head = phead->head->next; //头结点
    Order *next = phead->tail->next;
    while (1)
    {
        Printcat(); //列出清单
        cout << "请选择商品类别编号(以输入0为结束)" << endl;
        int flag;
        cin >> flag;
        if (flag == 0) //输入0终止程序
        {
            cout << "订单号为" << ++Orderlist << endl;
            return;
        }
        Printgood(flag);
        cout << "请选择商品编号" << endl;
        char flag2[50];

        Goods *num; //记录剩余数量
        cin >> flag2;
        num = Findgood(flag2); //传出该节点以后续使用
        int flag3;
        cout << "请输入购买的数量" << endl;
        cin >> flag3;
        if (num->stock < flag3)
        {
            cout << "购买失败(库存不足)" << endl;
            continue;
        }
        else
        {
            //OrderLIST( &head , num->gdsName , num->price , flag3 , (head->next));
            OrderLIST(&phead->tail->next, Orderlist, num->gdsNo, num->price, flag3, NULL);
            num->stock = num->stock - flag3;
            num->sales = num->sales + flag3;
            cout << "操作成功" << endl;
        }
    }
}
