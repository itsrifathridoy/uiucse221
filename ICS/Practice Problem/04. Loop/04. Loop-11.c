#include<stdio.h>
int main()
{
    int n,a,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a = i*i*(i+1);
        sum=sum+a;
    }
    printf("Result: %d",sum);

    return 0;
}
