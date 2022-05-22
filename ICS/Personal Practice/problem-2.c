#include<stdio.h>
int main()
{
    int n,r,rv=0,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rv=rv*10 + r;
        temp=temp/10;
    }
    if(n==rv)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;

}

