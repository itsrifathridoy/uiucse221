#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int arr1[n][n];
    int arr2[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr2[j][i]=arr1[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i][j]==arr2[i][j])
            {
                flag++;
            }
        }
    }
    if(flag==n*n)
    {
        printf("Yes\n");
    }
    else
    {
        printf("NO");
    }
    /*
    a00 a01 a02
    a10 a11 a12
    a20 a21 a22

    a00 a10 a20
    a01 a11 a21
    a02 a12 a22

    arr1[0][0]= arr2[0][0]
    arr1[0][1]= arr2[1][0]
    arr1[0][2]= arr2[2][0]

    arr1[1][0]= arr2[0][1]
    arr1[1][1]= arr2[1][1]
    arr1[1][2]= arr2[2][1]
    */

    return 0;
}

