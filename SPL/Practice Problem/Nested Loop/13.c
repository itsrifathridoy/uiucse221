#include<stdio.h>
int main()
{
        int n,x;
        scanf("%d",&n);
        x=2*n-3;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            for(int k=1;k<=x;k++)
                {
                    printf("_");
                }
                x=x-2;
            for(int m=i;m>=1;m--)
            {
                if(m==n)
                {
                    continue;
                }
                printf("%d",m);
            }
            printf("\n");
        }


    return 0;
}
