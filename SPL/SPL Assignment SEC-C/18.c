#include <stdio.h>

int main()
{
    float a,b,X;
    scanf("%f %f",&a,&b);
    X =(3.31 * a*a + 2.01 * b*b*b)/(7.16*b*b + 2.01*a*a*a);
    printf("The answer is=%f",X);

    return 0;
}

