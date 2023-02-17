#include<stdio.h>
void reverse(int arr[],int l,int r)
{

    if(arr==NULL)
    {
        return;
    }
    if(l<r)
    {
        int temp = arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        reverse(arr,l+1,r-1);
    }

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
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

