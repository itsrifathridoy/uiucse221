#include<stdio.h>
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int sum=0;
    printf("Enter 1st array.\n");
    for(int i=0;i<3;i++)
    {
            scanf("%d %d %d",&arr1[i][0],&arr1[i][1],&arr1[i][2]);
    }
    printf("Enter 2nd array.\n");
    for(int i=0;i<3;i++)
    {
            scanf("%d %d %d",&arr2[i][0],&arr2[i][1],&arr2[i][2]);
    }
    printf("\n");


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
               sum = sum + arr1[i][k]*arr2[k][j];
            }
            printf("%d ",sum);
            sum=0;
        }
        printf("\n");
    }
    return 0;
}


