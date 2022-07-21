#include<stdio.h>
int main()
{
        int n,x;
        scanf("%d",&n);
        if(n%2!=0)
        {
            x=n;
        }
        else
        {
            x=n+1;
        }
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
