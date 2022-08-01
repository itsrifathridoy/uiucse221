/*WAP that will take n integer numbers into an array, and then print all the integers into reverse order (from the last valid index to index 0).*/
#include<stdio.h>
int main()
{
    int n; //size: 4 byte
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
