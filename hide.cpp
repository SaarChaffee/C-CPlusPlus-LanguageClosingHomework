#include "saarchaffee.h"
char instr[100];

void hide()
{
    char ch;
    int cnt = 0;
    instr[cnt] = '0';
    cnt = 0;
    while (ch = getch())
    { //getch()���Բ��ԵĶ�ȡ����
        if (ch == '\r')
            break; //�ж��Ƿ�س�
        else if (ch == '\b')
        {                  //�ж��˸�
            putchar('\b'); //�����˸�
            putchar(' ');
            putchar('\b');
            if (cnt > 0)
                cnt--; //�����ַ����ܳ���
        }
        else
        {                      //���������ַ�����������
            instr[cnt++] = ch; //cnt��¼�ַ����ܳ�
            putchar('*');
        }
    }
    instr[cnt] = '\0'; //�ַ����Ľ�β
}

