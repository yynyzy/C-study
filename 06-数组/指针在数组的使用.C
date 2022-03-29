#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a; //将数组名赋值给一个指针类型，这个指针指的是数组中的第一个元素
    for (int i = 0; i < 10; ++i)
    {
        printf("%d", *(p + i)); //数组中的元素在内存中的分配是一块连续分配的空间，所以通过 *(p + i) 的方式可以取得数组的值
    }
    char s1[] = "l am a string"; //其实长度为14，因为默认在最后携带 /n 为终止符
    char *s = "l am a string";   //指针指的是第一个字符
    return 0;
}
