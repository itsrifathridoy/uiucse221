#include<stdio.h>
void func(int n,int m)
{
    if(n>m)
    {
        printf("%d is greater than %d",n,m);
    }
    else if(n<m)
    {
        printf("%d is less than %d",n,m);
    }
    else
    {
        printf("%d is equal to %d",n,m);
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    func(n,m);

    return 0;
}

