#include<stdio.h>
struct primeNumbers
{
    int range1;
    int range2;
    int counter;
    int num[100];
};
int isPrime(int num)
{
    if(num==2)
    {
        return 1;
    }
    if(num==1)
    {
        return 0;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x=0;
    struct primeNumbers primes;
    scanf("%d %d",&primes.range1,&primes.range2);
    for(int i=primes.range1;i<=primes.range2;i++)
    {
        if(isPrime(i))
        {
            primes.num[x]=i;
            x++;
        }
    }
    primes.counter=x;
    printf("%d Prime numbers are generated between %d to %d\n",primes.counter,primes.range1,primes.range2);
    for(int i=0;i<x;i++)
    {
        printf("%d ",*(primes.num+i));
    }
    return 0;
}
