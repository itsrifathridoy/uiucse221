#include <stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0],maxi=0,maxj=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }
    printf("Max: %d\nLocation:[%d,%d]",max,maxi,maxj);
    return 0;
}
