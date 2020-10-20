#include "saarchaffee.h"
Goods good[100];

void insertGoods() //这是商品读入函数
{
    fstream file;
    file.open("goods_gbk.txt");
    // FILE *p=fopen("goods_gbk.txt","r");
    if (!file)
    {
        cout << "error" << endl;
        return;
    }
    int i = 0;
    while (!file.eof())
    {
        file >> good[i].gdsNo >> good[i].cat >> good[i].gdsName >> good[i].stock >> good[i].price;
        i++;
    }
    //	int k=0;
    //	while(i>0)
    //	{
    //		cout<<good[k].gdsNo<<" ";
    //		cout<<good[k].cat<<" ";
    //		cout<<good[k].gdsName<<" ";
    //		cout<<good[k].stock<<" ";
    //		cout<<good[k].price<<" ";        //测试
    //		cout<<endl;
    //		k++;
    //		i--;
    //	}
    file.close();
    return;
}
