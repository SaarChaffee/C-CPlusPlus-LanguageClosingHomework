#include "saarchaffee.h"
char instr[100];

void hide()
{
    char ch;
    int cnt = 0;
    instr[cnt] = '0';
    cnt = 0;
    while (ch = getch())
    { //getch()可以不显的读取输入
        if (ch == '\r')
            break; //判断是否回车
        else if (ch == '\b')
        {                  //判断退格
            putchar('\b'); //处理退格
            putchar(' ');
            putchar('\b');
            if (cnt > 0)
                cnt--; //处理字符串总长度
        }
        else
        {                      //其他正常字符，正常输入
            instr[cnt++] = ch; //cnt记录字符串总长
            putchar('*');
        }
    }
    instr[cnt] = '\0'; //字符串的结尾
}

