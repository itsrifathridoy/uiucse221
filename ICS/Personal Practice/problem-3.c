#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>=1 && N<=12)
    {
        printf("Kid");
    }
    else if(N>=13 && N<=18)
    {
        printf("Teenagers");
    }
    else if(N>=13 && N<=18)
    {
        printf("Teenagers");
    }
    else if(N>=19 && N<=29)
    {
        printf("Young Adult");
    }
    else if(N>=30 && N<=40)
    {
        printf("Adult");
    }
    else if(N>=41 && N<=55)
    {
        printf("Middle Aged");
    }
    else if(N>55)
    {
        printf("Senior");
    }
    else
    {
        printf("Invalid age");
    }
    return 0;
}
