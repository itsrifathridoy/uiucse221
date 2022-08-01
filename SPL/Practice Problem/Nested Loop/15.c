#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        for(int i=1;i<=n;i++)
        {
            if(i==1 || i==n)
            {
                for(int j=1;j<=n;j++)
                {
                    printf("Z");
                }
                printf("\n");
            }
            else
            {
                for(int j=1;j<=n-i;j++)
                {
                    printf(" ");
                }
                printf("Z\n");
            }
        }
    }
    else
    {
        printf("Please Enter an odd number");
    }
    return 0;
}
