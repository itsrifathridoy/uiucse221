#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max = arr[0][0];
    int maxI,maxJ;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
                maxI=i;
                maxJ=j;
            }
        }
    }
    printf("Max: %d\n",max);
    printf("Location: [%d][%d]\n",maxI,maxJ);
    return 0;
}
