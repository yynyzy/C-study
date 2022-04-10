#include <stdio.h>
int main()
{
    int a = 10;
    float b = 1.1;
    char c = 'C';
    char str[10] = "string";
    char str1[6] = "string";//6空间不够，会出现乱码
    printf("int var : %d\n", a);
    printf("float var:%f\n", b);
    printf("char var: %c\n", c);
    printf("string var: %s\n", str);
    printf("string var1: %s\n", str1);

    return 0;
}