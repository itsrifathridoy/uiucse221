#include<stdio.h>
void reverseArray(int n)
{
    int arr[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[n-1-i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    reverseArray(n);
    return 0;
}

