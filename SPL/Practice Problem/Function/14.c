#include<stdio.h>
void isEven(int n)
{
    if(n%2==0)
        printf("%d ",n);
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
    for(int i=0;i<n;i++)
    {
        isEven(arr[i]);
    }
    return 0;
}

