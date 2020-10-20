#include "saarchaffee.h"
void displayone(List *phead) //输出指定商品信息
{
    char n[9];
    int i = 1, m;
    Order *p, *q, *r;
    p = phead->head->next;
    r = phead->head->next;
    Printcat(); //列出清单
    cout << "请选择商品类别编号(以输入0为结束)" << endl;
    cin >> m;
    Printgood(m);
    cout << "请选择要查找的商品编号" << endl;
    cin >> n;
    while (1)
    {
        if (!p)
        {
            cout << "没有找到这个商品" << endl;
            cout << "即将返回菜单" << endl;
            return;
        }
        else if (!strcmp(n, p->goodsNo))
        {
            cout << "商品编号" << setw(25) << "商品名称" << setw(15) << "库存数量" << setw(15) << "销售数量" << setw(15) << "单价" << endl;
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
