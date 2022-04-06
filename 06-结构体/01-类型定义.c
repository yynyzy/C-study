#include "stdio.h"
int main(){
    // typedef:用来给数据类型取新的名字
    typedef int MYINT;
    MYINT a =10;
    printf("%d\n",a);// 如果不是 int型，输出会报错

    typedef char CHAR;
    CHAR c ='c';
    printf("%c\n",c);
    return 0 ;

}