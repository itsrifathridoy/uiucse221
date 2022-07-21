#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        for(int i=1;i<=n/2;i++)
        {
          for(int j=1;j<=n;j++)
          {
             printf("*");
          }
          printf("\n*");
          for(int k=1;k<=n-2;k++)
          {
              printf("_");
          }
          printf("*\n");
        }
        for(int j=1;j<=n;j++)
          {
             printf("*");
          }
    }
    else
    {
        printf("Please Enter an odd number");
    }
    return 0;
}
