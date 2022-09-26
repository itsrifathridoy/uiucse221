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
    int count=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                for(int l=0;l<n;l++)
                {
                    if(arr[i][j]==arr[k][l])
                    {
                        if(count>0)
                        {
                            arr[k][l]=-1;
                        }
                        count++;
                    }
                }
            }
            count=0;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

