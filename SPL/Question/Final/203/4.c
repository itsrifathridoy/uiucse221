#include<stdio.h>
int digitMult(int id)
{
    int product=1,r;
    while(id!=0)
    {
        r=id%10;
        product*=r;
        id=id/10;
    }
    return product;
}
int main()
{
    int id;
    scanf("%d",&id);
    printf("%d",digitMult(id));
    return 0;
}

