#include<stdio.h>
#include<math.h>
int main()
    {
    double X,Y;
    scanf("%d %d",&X,&Y);

    printf("Addition: %.1d\n",X+Y);
    printf("Subtraction: %.1d\n",X-Y);
    printf("Multiplication: %.1d\n",X*Y);
    printf("Quotient: %d\n",(int)(X/Y));
    printf("Reminder: %d\n",fmod(X,Y));

    return 0;
    }
