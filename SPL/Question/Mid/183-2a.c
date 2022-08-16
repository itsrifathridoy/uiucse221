#include<stdio.h>
int main()
{
    int unit,unit_price,bill;
    scanf("%d %d",&unit,&unit_price);
    if(unit>200)
    {
        unit_price+=5;
    }
    if(unit>400 && unit<600)
    {
        unit_price+=10;
    }
    else if(unit>600)
    {
        unit_price+=15;
    }
    bill=unit*unit_price;
    printf("%d",bill);
    return 0;
}
