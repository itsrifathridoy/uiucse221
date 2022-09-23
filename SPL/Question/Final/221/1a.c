#include<stdio.h>
int main()
{
    int n,result,flag=1;
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
            if(i>j && arr[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        result =1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    result*=arr[i][j];
                }
            }
        }
    }
    else
    {
        result=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    result+=arr[i][j];
                }
            }
        }
    }
    printf("%d",result);
    return 0;
}

