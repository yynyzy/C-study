/*
    考研主要使用的数据类型
    基础类型
    int（存储整数）、float （存储小数）、char（存储字符）
    int a,b,c = 2   //定义了三个变量，c变量赋值为2

    指针型
    int *p = &A (将A的地址赋值给 p)
    p1 = &D (我们称为将  p1指向 D的地址，p1是存了 D 的地址)
    E = *p1 (取 p1 所指变量的值)

    NULL是不指向任何地址的特殊标记，其值为0。初始化指针的时候常用,如int *p4 = NULL;

*/

#include <iostream>
using namespace std;
int main()
{
    int a1, b1, c1 = 2;
    cout << "a1: " << a1 << endl; // 0
    cout << "b1: " << b1 << endl; //
    cout << "c1: " << c1 << endl; // 2
    int a;
    int b = 10;
    a = 11;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    int *p = &a;
    cout << "*p: " << *p << endl;
    *p = *p + 1;
    cout << "a: " << a << endl; // 12
    p = NULL;
    cout << "p: " << p << endl; // 0
    return 0;
}
