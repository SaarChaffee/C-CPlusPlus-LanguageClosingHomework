#include "saarchaffee.h"
int checkPassword()
{
    FILE *KEY = fopen("password.bin", "r");
    int cn = 3;
    char pw[100], password[100];
    fscanf(KEY, "%s", password);
    cout << "请输入密码" << endl;
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
             << "密码错误次数过多，退出程序" << endl;
        exit(0);
    }
    fclose(KEY);
    return true;
} 
