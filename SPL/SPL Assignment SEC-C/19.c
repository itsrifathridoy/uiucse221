#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    printf("X++: %d\n",x++);
    x--;
    printf("++X: %d\n",++x);
    x--;
    printf("X--: %d\n",x--);
    x++;
    printf("X++: %d\n",--x);



    return 0;
}
