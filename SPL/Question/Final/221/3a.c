#include<stdio.h>
int countDigit(long long int n);
int main()
{
    long long int n;
    scanf("%lld",&n);
    printf("%d",countDigit(n));
    return 0;
}
int countDigit(long long int n)
{
    int count = 0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
