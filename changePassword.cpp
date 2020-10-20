#include "saarchaffee.h"
void changePassword()
{
    FILE *keyRead = fopen("password.bin", "r");
    int cn = 3;
    char pw[100], password[100];
    fscanf(keyRead, "%s", password);
    cout << "请输入已设置的密码" << endl;
    do
    {
        hide();
        strcpy(pw, instr);
        cn--;
        encrypt(pw);
        if (strcmp(password, pw) && cn > 0)
            cout << endl
                 << "密码错误，你还有" << cn << "次机会" << endl;
    } while (strcmp(password, pw) && cn > 0);
    if (!cn && strcmp(password, pw))
    {
        cout << endl
             << "密码错误次数过多，返回主菜单" << endl;
        return;
    }
    fclose(keyRead);
    char pw1[100], pw2[100];
    FILE *keyWrite = fopen("password.bin", "w+");
    cout << endl
         << "请输入新密码" << endl;
    hide();
    strcpy(pw1, instr);
    cout << endl
         << "请再次输入密码" << endl;
    do
    {
        hide();
        strcpy(pw2, instr);
        if (strcmp(pw1, pw2))
            cout << endl
                 << "两次输入的密码不一致，请重新输入" << endl;
    } while (strcmp(pw1, pw2));
    encrypt(pw2);
    fprintf(keyWrite, "%s", pw2);
    cout << endl
         << "更改完成" << endl;
    fclose(keyWrite);
    return;
}
