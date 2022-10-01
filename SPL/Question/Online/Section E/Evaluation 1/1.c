#include<stdio.h>
int startAndEndWithOne(int n)
{
    int r=n%10;
    int digit=0;
    int temp= n;
    while(temp!=0)
    {
        temp=temp/10;
        digit++;
    }
    for(int i=1;i<digit;i++)
    {
        n=n/10;
    }
    if(r==1 && n==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isPalindrome(int n)
{
    int temp=n,r,rev;
    while(temp!=0)
    {
       r=temp%10;
       rev=rev*10+r;
       temp=temp/10;
    }
    if(rev==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int squreOfSumDivisiblebyEight(int n)
{
    int r,sum;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if((sum*sum)%8==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int range1,range2;
    scanf("%d %d",&range1,&range2);

    for(int i=range1;i<=range2;i++)
    {
        if(startAndEndWithOne(i) && (!isPalindrome(i)) && squreOfSumDivisiblebyEight(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}

