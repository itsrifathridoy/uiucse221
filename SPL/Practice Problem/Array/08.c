//WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index position.
#include<stdio.h>
int main()
{
    int n,indexMin,indexMax;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
       if(max<arr[i])
       {
           max=arr[i];
           indexMax =i;
       }
       if(min>arr[i])
       {
           min=arr[i];
           indexMin =i;
       }
    }
    printf("Max: %d, Index: %d\n",max,indexMax);
    printf("Min: %d, Index: %d\n",min,indexMin);
    return 0;
}
