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
    return 0;
}