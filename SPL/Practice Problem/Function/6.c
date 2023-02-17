#include<stdio.h>
int sum=0;
int sumfunc(int n)
{
    int num;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("Sum In Function: %d\n",sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    sumfunc(n);
    printf("Sum In main: %d\n",sum);

    return 0;
}

