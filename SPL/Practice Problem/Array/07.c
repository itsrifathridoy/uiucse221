// WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally print them all from 0 index to last valid index.
#include <stdio.h>
int main()
{
    int n, i, j, temp;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];

        arr[n - i - 1] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
