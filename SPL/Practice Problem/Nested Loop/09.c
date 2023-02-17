#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x=i;
        for(int j=1;j<=n;j++)
        {
            printf("%d",x%2);
            x++;
        }

        printf("\n");
    }
    return 0;
}
