//WAP that will take n integers into an array A and m positive integers into array B. Now find the union (set operation) of array A and B.
#include<stdio.h>
int main()
{
    int n,m,i,j,k,l,a[100],b[100],c[100];
    printf("Enter the number of elements in array A: ");
    scanf("%d",&n);
    printf("Enter the elements of array A: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements in array B: ");
    scanf("%d",&m);
    printf("Enter the elements of array B: ");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0;k<n;k++)
    {
        c[k]=a[k];
    }
    for(l=0;l<m;l++)
    {
        c[n+l]=b[l];
    }
    printf("The union of array A and array B is: ");
    for(i=0;i<n+m;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
