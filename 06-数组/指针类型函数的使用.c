#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int minu(int a, int b)
{
    return a - b;
}
int main()
{
    int (*p)(int, int);
    char op = '+';
    if (op = '+')
        p = add;
    else
        p = minu;
    printf("%d", p(3, 4));

    return 0;
}