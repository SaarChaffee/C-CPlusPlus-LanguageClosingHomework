#include "saarchaffee.h"
int setPassword()
{
    char pw1[100], pw2[100];
    FILE *KEY = fopen("password.bin", "w+");
    cout << "第一次使用请设置密码" << endl;
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
    fprintf(KEY, "%s\n", pw2);
    cout << endl
         << "注册完成" << endl;
    fclose(KEY);
    return true;
}
