#include<stdio.h>
int main()
{
    int n,sum=0; //size: 4 byte
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}
