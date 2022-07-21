#include<stdio.h>
int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    int sum=0;
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

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
               sum = sum + arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=sum;
            sum=0;
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
        /*
        1 2 3       2 2 2       9 9 9
        4 5 6       2 2 2       24 24 24
        7 8 9       1 1 1       29 29 29

        row*col

        2+4+3 -> arr1[0][0]*arr2[0][0] + arr1[0][1]*arr2[1][0]+ arr1[0][2]*arr2[2][0]
        2+4+3 -> arr1[0][0]*arr2[0][1] + arr1[0][1]*arr2[1][1]+ arr1[0][2]*arr2[2][1]
        1+4+3 -> arr1[0][0]*arr2[0][2] + arr1[0][1]*arr2[1][2]+ arr1[0][2]*arr2[2][2]

        8+10+6 -> arr1[1][0]*arr2[0][0] + arr1[1][1]*arr2[1][0]+ arr1[1][2]*arr2[2][0]
        8+10+6 -> arr1[1][0]*arr2[0][1] + arr1[1][1]*arr2[1][1]+ arr1[1][2]*arr2[2][1]
        8+1-+6 -> arr1[1][0]*arr2[0][2] + arr1[1][1]*arr2[1][2]+ arr1[1][2]*arr2[2][2]
        */

    return 0;
}
