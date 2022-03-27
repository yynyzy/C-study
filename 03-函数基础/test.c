#include <stdio.h>

/*
    返回值类型 函数名 （参数列表）
    {
        声明和语句；
    }
*/
int main()
{
    int res = add(3,4);
    return 0;
}
int add(int a ,int b ){
    int r = a+b;
    return r;
}