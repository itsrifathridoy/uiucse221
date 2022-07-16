#include<stdio.h>
int main()
{
    int n,x,y,z,sum=0, sum_even=0,sub_odd=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum_even=sum_even+i;
        }
        else
        {
                sub_odd=sub_odd-i;
        }
        sum = -(sum_even + sub_odd);

    }
    printf("%d",sum);
    return 0;
}
