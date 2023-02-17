#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {

        if(i%2==0)
        {
            sum=sum+i*pow(--i,2);
        }
        else if(i%2!=0)
        {
            sum=sum+pow(i,2);
        }

    }
    printf("%d\n",sum);
    return 0;
}

