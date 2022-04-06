#include "stdio.h"

//给结构体换名字来简化结构体名字
//在全局定义，可以在所有函数中使用
 typedef struct 
 {
     int x;
 int y;
 }Point;
int main(){
    // typedef:用来给数据类型取新的名字
    typedef int MYINT;
    MYINT a =10;
    printf("%d\n",a);// 如果不是 int型，输出会报错

    typedef char CHAR;
    CHAR c ='c';
    printf("%c\n",c);

//结构体
    struct 
    {
       int x;
       int y;
    }point;
    point.x =10;
    point.y =10;
    printf("%d,%d\n",point.x,point.y);
    

    Point point2;
    point2.x =20;
    point2.y =20;
    printf("%d,%d\n",point2.x,point2.y);

    return 0 ;
}