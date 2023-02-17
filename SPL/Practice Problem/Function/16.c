#include<stdio.h>
int *muliplies(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]*2;
    }
    return arr;

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
    int *result = muliplies(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",result[i]);
    }

    return 0;
}



