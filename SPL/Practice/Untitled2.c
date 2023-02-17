#include<stdio.h>
int main()
{
    int r,c,flag=1;
    scanf("%d",&r);
    scanf("%d",&c);
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j && matrix[i][j]!=1)
            {
                flag=0;
            }
            if(i!=j && matrix[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}
