#include<stdio.h>
int main()
{
    int n=3;
    int A[n][n];
    int B[n][n];
    int C[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=A[i][0]*B[0][i] + A[i][1]*B[1][i] + A[i][2]*B[2][i];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
