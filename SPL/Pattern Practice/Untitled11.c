#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%.2f\n",sum);
        sum=sum+1.0/(i*i);
    }
    printf("Sum: %.2f",sum);
    return 0;
}
