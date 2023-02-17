#include<stdio.h>
int minimum(int arr[],int n)
{
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",minimum(arr,n));
    return 0;
}


