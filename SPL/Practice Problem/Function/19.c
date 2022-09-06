#include<stdio.h>
int isPrime(int n)
{
    int flag=1;
    if(n==1)
    {
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("%d ",n);
    }
}
void GeneratePrime(int n)
{
    printf("Prime less than %d: ",n);
    for(int i=1;i<n;i++)
    {
        isPrime(i);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    GeneratePrime(n);
    return 0;
}


