#include "saarchaffee.h"
int setPassword()
{
    char pw1[100], pw2[100];
    FILE *KEY = fopen("password.bin", "w+");
    cout << "��һ��ʹ������������" << endl;
    hide();
    strcpy(pw1, instr);
    cout << endl
         << "���ٴ���������" << endl;
    do
    {
        hide();
        strcpy(pw2, instr);
        if (strcmp(pw1, pw2))
            cout << endl
                 << "������������벻һ�£�����������" << endl;
    } while (strcmp(pw1, pw2));
    encrypt(pw2);
    fprintf(KEY, "%s\n", pw2);
    cout << endl
         << "ע�����" << endl;
    fclose(KEY);
    return true;
}
