#include<stdio.h>
int main()
{
    float num,sum=0,k=0;
    for (int i=1;k<4;i++)
    {
        scanf("%f",&num);
        if(num>=0)
        {
              sum+=num;
              k++;
        printf("avg=%.1f\n",sum/k);
        }


    }
}
