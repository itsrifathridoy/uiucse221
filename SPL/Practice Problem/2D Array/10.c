#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==((n+1)/2-1) || j<=((n+1)/2-1) || (j>=((n+1)/2-1) && i==n-1) || (i>((n+1)/2-1) && j==0) || j==((n+1)/2)-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}

