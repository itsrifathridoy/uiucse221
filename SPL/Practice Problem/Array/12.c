#include<stdio.h>
int main()
{
    int n,insertNum,insertPosition;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("number: ");
    scanf("%d",&insertNum);
    printf("position: ");
    scanf("%d",&insertPosition);
    for(int i=0;i<=insertPosition+1;i++)
    {
            arr[n-i]=arr[n-1-i];
            //i=0, arr[10]=arr[9]=54
            //i=1, arr[9]=arr[8]=89
            //i=2, arr[8]=arr[7]=2
            //i=3, arr[7]=arr[6]=15

    }
    arr[insertPosition]=insertNum;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
