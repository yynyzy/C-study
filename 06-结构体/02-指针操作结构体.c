#include "stdio.h"

typedef struct
{
    int x;
    int y;
} Point;
int main()
{
    Point point;//定义了一个 Point类型变量
    Point *p;   //定义一个 Point类型的指针
    p = &point;
    p->x =10;
    p->y =10;
    printf("%d,%d\n",p->x,p->y);
    return  0;
}