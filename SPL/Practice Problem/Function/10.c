#include<stdio.h>
int power(int x,int y)
{
    int result=1;
    for(int i=1;i<=y;i++)
    {
        result = result*x;
    }
    return result;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",power(x,y));
    return 0;
}

