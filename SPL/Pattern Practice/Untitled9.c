#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    switch(num%2)
    {
    case 0:
        if(num>5) printf("Greater than 5");
        else printf("less than 5");
        break;
    default:
        printf("Odd");
    }

    return 0;
}
