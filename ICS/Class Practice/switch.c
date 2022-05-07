#include<stdio.h>
int main()
{
    int a,b;
    char op;


    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter an operator: ");
    scanf(" %c",&op);

    printf("Enter second number: ");
    scanf("%d",&b);

    switch(op)
    {
        case '+':
            printf("The Sum: %d\n",a+b);
            break;
        case '-':
            printf("Subtraction: %d\n",a-b);
            break;
        case '*':
            printf("Multiplication: %d\n",a*b);
            break;
        case '/':
            if(b==0){
                printf("%d is wrong input. Please try again.\n",b);
            }
            else{
                printf("Devision: %d\n",a/b);
            }
            break;
        default:
            printf("Error input. Please try again with +,-,*,/");

    }

    system("pause");
    return 0;
}
