#include<stdio.h>
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    int x=0;
    printf("Enter 1st array.\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter 2nd array.\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n");


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j] = arr1[i][x]*arr2[x][i] + arr1[i][x+1]*arr2[x+1][i] + arr1[i][x+2]*arr2[x+2][i];
            x=0;

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

