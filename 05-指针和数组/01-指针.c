#include <stdio.h>

void f(int *a)
{
    *a = 10;
}
int main()
{

    int a2 = 10;
    int b2 = 10;
    int *A2 = &a2;
    int *B2 = &b2;
    printf("%p\n", A2); //0x16f9230d8
    printf("%p\n", B2); //0x16f9230d4

    int a = 0;
    f(&a);
    printf("%d", a);
    return 0;

  
}