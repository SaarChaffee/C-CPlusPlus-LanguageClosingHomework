#include "saarchaffee.h"
void Printgood(int x)
{
    //    cout << "��Ʒ���\t��Ʒ����" << endl;
    int i = 0;
    for (; i < 100; i++)
    {
        //    	cout << good[i].cat<<endl;
        if (!good[i].cat)
            break;
        //        cout<<i<<endl;
    }
    for (int j = 0; j < i; j++)
    {
        if (good[j].cat == x)
        {
            cout << good[j].gdsNo << "\t" << good[j].gdsName;
            cout << endl;
        }
    }
    return;
}
