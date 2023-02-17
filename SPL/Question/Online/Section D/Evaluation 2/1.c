#include<stdio.h>
int checkerFunc1(int n)
{
    int lastDigit= n%10;
    int firstDigit;
    while(n!=0)
    {
        firstDigit=n%10;
        n=n/10;
    }
    if((firstDigit==7 || firstDigit==1) && (lastDigit!=9 && lastDigit!=2))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int checkerFunc2(int n)
{
    int position=0,r;
    while(n!=0)
    {
        position++;
        r=n%10;
        n=n/10;
        if((position%2==0 && r%2==0) || (position%2!=0 && r%2!=0))
        {
            return -1;
        }
    }
    return 1;
}
int strongChecker(int n)
{
    int temp=n,sum=0;
    while(temp!=0)
    {
        int r=temp%10;
        int fact=1;
        for(int i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int defectiveChecker(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum<2*n)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int checkerFunc3(int n)
{
    if(strongChecker(n) && !defectiveChecker(n))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int checkerFunc4(int n)
{
    int r,digit=0,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        digit++;
    }
    if(digit>=2 && (sum*sum)%7==0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int sectumSempra(int n)
{
    if(checkerFunc1(n)==1 && checkerFunc2(n)==1 && checkerFunc3(n)==1 && checkerFunc4(n)==1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int range1,range2;
    scanf("%d %d",&range1,&range2);
    for(int i=range1;i<=range2;i++)
    {
        if(sectumSempra(i)==1)
        {
            printf("%d ",i);
        }
        //printf("%d ",sectumSempra(i));
    }


    return 0;
}

