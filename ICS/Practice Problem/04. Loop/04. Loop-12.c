#include<stdio.h>
int main()
{
    int n,a=1,b=1,next;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1");
    }
    else
    {
        printf("%d,%d",a,b);
        for(int i=3;i<=n;i++)
        {
            next=a+b;
            printf(",%d",next);
            a=b;
            b=next;

        }

    }

    return 0;
}
