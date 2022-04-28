#include <iostream>
using namespace std;
void mergearray(int a[], int m, int b[], int n)
{
    int c[] = {0};
    int i = 0, j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++]; // c[k] = a[ i];k++; i++;else
        c[k++] = b[j++];
    }
    while (i < m)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];
}
int main()
{
    int arr1[6] = {1, 3, 8, 9, 11, 22};
    int arr2[6] = {2, 4, 7, 12, 15, 23};
    mergearray(arr1, 6, arr2, 6);
    return 0;
}
