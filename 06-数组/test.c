#include <stdio.h>
int main()
{
    int a[10] = {0};
    for (int i = 0; i < 10; ++i)
        printf("%d", a[i]); // 0 0 0....

    int b[10] = {1};
    for (int i = 0; i < 10; ++i)
    {
        printf("%d", a[i]); // 1 0 0 0....
    }

    int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; ++i)
    {
        printf("%d", a[i]); // 1,2,3,4,5,6,7,8,9
    }
    return 0;
}
