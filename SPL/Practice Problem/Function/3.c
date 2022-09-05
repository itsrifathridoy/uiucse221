#include<stdio.h>
void isEven(int n)
{
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    isEven(n);
    return 0;
}

