#include"saarchaffee.h"

List phead;

int main()
{
    int n;
    n = passWord();
    phead.head = NULL;
    insertGoods();       //这是商品读入函数
    insertCat();         //写入Category
    insertOrder(&phead); //写入订单
    while (n)
    {
        menu();
        cin >> n;
        switch (n)
        {
        case 1:
            system("cls");
            gdsSort();
            system("pause");
            break;
        case 2:
            system("cls");
            salegood(&phead);
            system("pause");
            break;
        case 3:
            system("cls");
            deletegood(&phead);
            system("pause");
            break;
        case 4:
            system("cls");
            displaycat(&phead);
            system("pause");
            break;
        case 5:
            system("cls");
            displayorder(&phead);
            system("pause");
            break;
        case 6:
            system("cls");
            sortAndDisplay(&phead);
            system("pause");
            break;
        case 7:
            system("cls");
            displayone(&phead);
            system("pause");
            break;
        case 8:
            system("cls");
            changePassword();
            system("pause");
            break;
        }
    }
    return 0;
}
