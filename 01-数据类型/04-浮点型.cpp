#include <iostream>
using namespace std;

int main()
{
    //单精度 float    有效数字 7位
    //双精度 double     有效数字 15-16位
    //默认情况下，输出一个小数会显示6位有效数字
    float num1 = 3.1415926f;
    double num2 = 3.1415926;
    cout<<"num1="<<num1<<endl;
    cout<<"num1占用的内存空间"<<sizeof(num1)<<endl; //4
    cout<<"num2="<<num2<<endl;
    cout<<"num2占用的内存空间"<<sizeof(num2)<<endl; //8

    //科学计数法
    float f1 = 3e2;
    float f2 = 3e-2;
     cout<<"f1="<<num1<<endl;
    cout<<"f2="<<num2<<endl;
    return 0;
}