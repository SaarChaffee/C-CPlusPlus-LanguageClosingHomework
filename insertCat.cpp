#include "saarchaffee.h"
Category category[100];

void insertCat()
{
    fstream file;
    file.open("category_gbk.txt");
    // FILE *p=fopen("category_gbk.txt","r");
    if (!file)
    {
        cout << "error" << endl;
        return;
    }
    int i = 0;
    char head_1[100], head_2[100];
    file >> head_1;
    file >> head_2;
    while (!file.eof())
    {
        file >> category[i].cat >> category[i].catName;
        i++;
    }
    //	int k=0;
    //	while(i>0)
    //	{
    //		cout<<category[k].cat<<" ";
    //		cout<<category[k].catName<<" ";         //²âÊÔ
    //		cout<<endl;
    //		k++;
    //		i--;
    //	}
    file.close();
    return;
}
