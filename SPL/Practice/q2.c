#include<stdio.h>
int main()
{
    int x,y,result=1;
    scanf("%d %d",&x,&y);
    for(int i=1;i<=y;i++)
    {
        result = result*x;
    }
    printf("%d\n",result);
    return 0;
}
