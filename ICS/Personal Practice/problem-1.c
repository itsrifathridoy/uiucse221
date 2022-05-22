#include<stdio.h>
int main()
{
    int n,sum=0,t_sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum*10+i;
        t_sum=t_sum+sum;

    }
    printf("%d",t_sum);
    return 0;
}
