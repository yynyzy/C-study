#include <iostream>
using namespace std;
void partition(int arr[], int n)
{
    int temp;
    int i = 0, j = n - 1;
    temp = arr[i];
    while (i < j)
    {
        while (i < j && arr[j] >= temp)
            --j;
        if (i < j)
        {
            arr[i] = arr[j];
            ++i;
        }
        while (i < j && arr[i] < temp)
            ++i;
        if (i < j)
        {
            arr[j] = arr[i];
            --j;
        }
    }
    arr[i] = temp;
}
int main()
{
    int arr[] = {10, 2, 34, 5, 66, 12};
    partition(arr, sizeof(arr));
    cout << arr << endl;
    return 0;
}