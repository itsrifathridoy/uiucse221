#include <stdio.h>
int main()
{
    int n, sum=0,count=0;
    scanf("%d", &n);
    int arrBeforeTrans[n][n];
    int arrAfterTrans[n][n];
    int arr_BA_mult[n][n];
    int arr_AB_mult[n][n];


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &arrBeforeTrans[i][j]);
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            arrAfterTrans[i][j]=arrBeforeTrans[j][i];
        }
    }



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
               sum = sum + arrBeforeTrans[i][k]*arrAfterTrans[k][j];
            }
            arr_BA_mult[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
               sum = sum + arrAfterTrans[i][k]*arrBeforeTrans[k][j];
            }
            arr_AB_mult[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr_BA_mult[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr_AB_mult[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr_BA_mult[i][j]==arr_AB_mult[i][j])
            {
                count++;
            }
        }
    }
    if(count==n*n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("NO");
    }
    return 0;

}
