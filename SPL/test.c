#include <stdio.h>
int binarySearch(int arr[], int left, int right, int search)
    {
        int mid = (left + right)/2;

        if (arr[mid] == search)
        {
            return mid;
        }
        if (arr[mid] > search)
        {
            return binarySearch(arr, left, mid-1, search);
        }
        if(arr[mid]<search)
        {
            return binarySearch(arr, mid+1, right, search);
        }
        else
        {
            return -1;
        }
    }

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int search;
    scanf("%d",&search);
    int result = binarySearch(arr, 0, n-1, search);
    if(result == -1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Found at index: %d", result);
    }

return 0;
}
