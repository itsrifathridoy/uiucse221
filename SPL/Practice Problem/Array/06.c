/*Wap that will take n integer numbers in an array, n different integer numbers in a second array and put the sum of the same indexed numbers from the two arrays in a third array.*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n],arr3[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++)
    {
       arr3[i]=arr1[i]+arr2[i];
    }
    for(int i=0;i<n;i++)
    {
       printf("%d ",arr3[i]);
    }
    return 0;
}
