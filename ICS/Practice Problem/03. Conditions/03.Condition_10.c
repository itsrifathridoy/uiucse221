#include<stdio.h>
int main()
{
    int a,b;
    char op;
    //scanf("%d %c %d",&a,&op,&b);

    scanf("%d",&a);
    scanf(" %c",&op);
    scanf("%d",&b);
    switch(op)
    {
        case '+':
            printf("Addition: %d",a+b);
            break;
        case '-':
            printf("Subtraction: %d",a-b);
            break;
        case '*':
            printf("Multiplication: %d",a*b);
            break;
        case '/':
            printf("Division: %d",a/b);
            break;
        default:
            printf("Please enter an operator.");
    }

    return 0;
}
