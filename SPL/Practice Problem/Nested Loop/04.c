#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf("_");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
