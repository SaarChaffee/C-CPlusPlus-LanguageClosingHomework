#include "saarchaffee.h"
int checkPassword()
{
    FILE *KEY = fopen("password.bin", "r");
    int cn = 3;
    char pw[100], password[100];
    fscanf(KEY, "%s", password);
    cout << "����������" << endl;
    do
    {
        hide();
        strcpy(pw, instr);
        cn--;
        encrypt(pw);
        if (strcmp(password, pw) && cn > 0)
            cout << endl
                 << "��������㻹��" << cn << "�λ���" << endl;
    } while (strcmp(password, pw) && cn > 0);
    if (!cn && strcmp(password, pw))
    {
        cout << endl
             << "�������������࣬�˳�����" << endl;
        exit(0);
    }
    fclose(KEY);
    return true;
} 
