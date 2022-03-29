#include <stdio.h>

void f(int *a)
{
    *a = 10;
}
int main()
{
    int a = 0;
    f(&a);
    printf("%d", a);
    return 0;

    int a2 = 10;
    int b2 = 10;
    int *a2 = &a2;
    int *b2 = &b2;
    printf("%d", a2);
    printf("%d", b2);
}