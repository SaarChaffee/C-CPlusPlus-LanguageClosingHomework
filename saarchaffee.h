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
    char gdsNo[9];    //商品编号
    int cat;          //商品类别号
    char catName[10]; //类别名
    char gdsName[10]; //商品名
    int stock;        //库存量
    float price;      //单价
    int sales;        //销售数量，初始值为0，根据订单数据更新，便于查询
} Goods;
extern Goods good[100];
typedef struct _category
{
    int cat;          //分类号
    char catName[10]; //分类名
} Category;
extern Category category[100];
typedef struct _order
{
    int orderNo;         //订单号
    char goodsNo[9];     //商品编号
    int qty;             //销售量
    float price;         //单价
    float amount;        //总金额
    struct _order *next; //指向下一个节点
} Order;
typedef struct _list
{
    Order *head; //头
    Order *tail; //尾指针
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

