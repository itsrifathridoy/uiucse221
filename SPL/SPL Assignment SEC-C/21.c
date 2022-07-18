#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    printf("Multiplication: %d\n",X*=Y);
    X=X/Y;
    printf("Division: %d\n",X=X/Y);
    return 0;
}
