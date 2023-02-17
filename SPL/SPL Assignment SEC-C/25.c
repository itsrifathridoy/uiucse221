#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);
    if((a + b) <= 80)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if(!(a + b))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    if(c != 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}