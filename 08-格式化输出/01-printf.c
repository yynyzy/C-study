#include <stdio.h>
int main()
{
    int a = 10;
    float b = 1.1;
    char c = 'C';
    char str[10] = "string";
    char str1[6] = "string";
    /*
    str[6]会导致空间不够，会出现乱码。
    原因是：
    字符串本质上其实就是以'\0作为'结尾的特殊字符数组，所以定义字符串时，必须保证字符串存储的最后一个元素为'\0'。字符串长度等于字符串实际长度+1
    */
    printf("int var : %d\n", a);
    printf("float var:%f\n", b);
    printf("char var: %c\n", c);
    printf("string var: %s\n", str);
    printf("string var1: %s\n", str1);

    return 0;
}