#include<stdio.h>
int main()
{
    int n;
    float sum =0,avg;
    scanf("%d",&n);
    float arr[n];

    for(int i=1;i<=n;i++)
    {
        float x;
        scanf("%f",&x);
        arr[i-1] = x;
    }
    for(int j=1;j<=n;j++)
    {
        sum = sum + arr[j-1];

    }
    avg = sum/n;
    printf("%f",avg);
    return 0;
}
