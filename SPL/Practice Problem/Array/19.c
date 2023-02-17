#include<stdio.h>
int main()
{
    int n,m,count=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    int B[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i]==B[j])
            {
                printf("%d ",A[i]);
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("Empty Set");
    }
    return 0;
}
