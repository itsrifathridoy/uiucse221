#include<stdio.h>
int main()
{
    int n,max,min,maxIndex,minIndex;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxIndex=i;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            minIndex=i;
        }
    }
    printf("Max: %d, Index: %d \nMin:%d, Index: %d",max,maxIndex,min,minIndex);
    return 0;
}