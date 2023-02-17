#include<stdio.h>
int a,b;
void func()
{
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
}

int main()
{
    scanf("%d %d",&a,&b);
    func(a,b);
    printf("%d %d\n",a,b);
    return 0;
}


