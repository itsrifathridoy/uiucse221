#include<stdio.h>
int main()
{
    int count=1;
    for(int i=0;i<=100;i+5)
    {
        if(count%3==0)
        {
            i=i+5;
            printf("%d ",i);
        }
        else
        {
            printf("%d ",i);
        }
        count++;
    }
    return 0;
}
