#include<stdio.h>
int main()
{
    int count=1,i=0;
    while(i<=100)
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
        i=i+5;


    }
    return 0;
}
