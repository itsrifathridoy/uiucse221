#include<stdio.h>
int main()
{
    float a,b;
    char op;

    scanf("%d",&a);
    scanf(" %c",&op);
    scanf("%d",&b);
    switch(op)
    {
        case '+':
            printf("Addition: %f",a+b);
            break;
        case '-':
            printf("Subtraction: %f",a-b);
            break;
        case '*':
            printf("Multiplication: %f",a*b);
            break;
        case '/':
            if(b==0)
            {
                printf("Division: Zero as divisor is not valid!");
                break;
            }
            else
            {
                printf("Division: %f",a/b);
                break;
            }
        default:
            printf("Try again.");
    }

    return 0;
}
