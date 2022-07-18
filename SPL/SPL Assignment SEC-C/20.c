#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    printf("Increment: %d\n",X+=Y);
    X-=Y;
    printf("Decrement: %d\n",X-=Y);
    return 0;
}
