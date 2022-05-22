#include<stdio.h>
int main()
{
    int N,factorial=1;
    scanf("%d",&N);
    printf("%d! = 1",N);
    for(int i=2;i<=N;i++)
    {
        factorial = factorial*i;

        printf(" X %d",i);
    }
    printf(" = %d",factorial);
    return 0;
}
