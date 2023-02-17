#include<stdio.h>
int arr[100];
void sumfunc(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum in Function: %d\n",sum);
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    sumfunc(n);
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum in main: %d\n",sum);
    return 0;
}
