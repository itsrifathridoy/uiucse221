#include<stdio.h>
#include<math.h>
int main()
{
    float X;
    scanf("%f",&X);
    printf("A=%d\n",(int)ceil(X));
    printf("B=%d\n",(int)floor(X));
    printf("C=%.1f\n",X);
}
