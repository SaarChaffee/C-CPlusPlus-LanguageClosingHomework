#include "saarchaffee.h"
void changePassword()
{
    FILE *keyRead = fopen("password.bin", "r");
    int cn = 3;
    char pw[100], password[100];
    fscanf(keyRead, "%s", password);
    cout << "�����������õ�����" << endl;
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
             << "�������������࣬�������˵�" << endl;
        return;
    }
    fclose(keyRead);
    char pw1[100], pw2[100];
    FILE *keyWrite = fopen("password.bin", "w+");
    cout << endl
         << "������������" << endl;
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
    fprintf(keyWrite, "%s", pw2);
    cout << endl
         << "�������" << endl;
    fclose(keyWrite);
    return;
}
