#include "saarchaffee.h"
void Printcat()
{

    cout << "商品编号\t商品统称" << endl;
    for (int j = 0; j < 6; j++)
    {
        cout << category[j].cat << "\t\t" << category[j].catName;
        cout << endl;
    }
    return;
}
