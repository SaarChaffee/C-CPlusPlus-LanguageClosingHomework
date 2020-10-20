#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <windows.h>
#include <iomanip>
#include <cstdio>
#include <conio.h>
using namespace std;
#define SaarChaffee 114514
#define Yu 1919
#define Lin_Seven 810
extern char instr[100];
extern int Orderlist;
typedef struct _goods
{
    char gdsNo[9];    //��Ʒ���
    int cat;          //��Ʒ����
    char catName[10]; //�����
    char gdsName[10]; //��Ʒ��
    int stock;        //�����
    float price;      //����
    int sales;        //������������ʼֵΪ0�����ݶ������ݸ��£����ڲ�ѯ
} Goods;
extern Goods good[100];
typedef struct _category
{
    int cat;          //�����
    char catName[10]; //������
} Category;
extern Category category[100];
typedef struct _order
{
    int orderNo;         //������
    char goodsNo[9];     //��Ʒ���
    int qty;             //������
    float price;         //����
    float amount;        //�ܽ��
    struct _order *next; //ָ����һ���ڵ�
} Order;
typedef struct _list
{
    Order *head; //ͷ
    Order *tail; //βָ��
} List;
extern List order;

void insertGoods();
void insertCat();
void insertOrder(List* phead);
bool gdscmp(_goods a, _goods b);
void gdsSort();
void Printcat();
void Printgood(int x);
Goods* Findgood(char* flag2);
void OrderLIST(Order** goods, int orderNO, char* Name, float price, int flag, Order* next);
void salegood(List* phead);
void displayorder(List* phead);
void displayone(List* phead);
void sortAndDisplay(List* phead);
void hide();
void encrypt(char pw[]);
int setPassword();
int checkPassword();
int passWord();
void changePassword();
void printOrder(List* phead);
void deletegood(List* phead);
void displaycat(List* phead);
void menu();
int main();

