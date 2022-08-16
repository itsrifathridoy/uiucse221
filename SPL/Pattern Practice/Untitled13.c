#include<stdio.h>
int main()
{
    int n,temp=0,sum=0;
    scanf("%d",&n);
    for(int i=1,x=1;i<=n;i++,x=x*10)
    {
        temp=temp+x;
        sum=sum+temp;
    }
    printf("%d",sum);
    return 0;
}
