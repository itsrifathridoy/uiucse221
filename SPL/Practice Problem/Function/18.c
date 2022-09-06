#include<stdio.h>
void isPrime(int n)
{
    int flag=1;
    if(n==1)
    {
        printf("Not Prime");
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    isPrime(n);
    return 0;
}

