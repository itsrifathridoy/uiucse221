#include<stdio.h>
int main()
{
    int i,j,count=2;
    for(i=0;i<=100;i=i+5)
    {
        for(j=1;j<=count;j++)
        {
            printf("%d ",i);
            i=i+5;
        }
        count++;
    }

    return 0;
}
