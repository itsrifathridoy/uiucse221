#include<stdio.h>
void func(int *x,int *y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("%d %d\n",x,y);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    func(a,b);
    printf("%d %d\n",a,b);
    return 0;
}

