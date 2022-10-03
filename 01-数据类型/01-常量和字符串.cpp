#include <iostream>
using namespace std;

// 常量的定义方式
// 1.#define 宏常量
// 2.const 修饰的变量

//1.define
#define Day 7
int main()
{   
     //Day = 14 错误，常量不能修改
    cout<<"一周一共有"<< Day <<"天"<<endl;

    //2.const
    const int month = 12;//const 常量也不能修改
    cout<<"一年一共有"<<month<<endl;

    //字符串（2种风格）
    //1.C语言风格
    char s1[] = "Hello World";
    cout<< s1 <<endl;
    //2.c++风格
    string s2 = "hello Yzy";
    cout<< s2 <<endl;

    return 0;
}