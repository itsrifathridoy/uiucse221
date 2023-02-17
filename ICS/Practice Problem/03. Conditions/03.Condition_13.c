
#include<stdio.h>
int main()
{
    int a,b,op;

    printf("Press 1 for addition.\nPress 2 for subtraction.\nPress 3 for multiplication\nPress 4 for Division.\n");

    printf("Enter your choice ");
    scanf("%d",&op);

    printf("Enter first number: ");
    scanf("%d",&a);


    printf("Enter second number: ");
    scanf("%d",&b);

    switch(op)
    {
        case 1:
            printf("The Sum: %d\n",a+b);
            break;
        case 2:
            printf("Subtraction: %d\n",a-b);
            break;
        case 3:
            printf("Multiplication: %d\n",a*b);
            break;
        case 4:
            int choice;
                printf("Press 1 for Quotient\nPress 2 for Remainder\n");
                scanf("%d",&choice);
                if(choice==1)
                {
                    printf("Quotient: %d\n",a/b);
                    break;
                }
                else if(choice==2){
                    printf("Remainder: %d\n",a%b);
                    break;
                }
                else
                {
                    printf("Please enter a value between 1-2\n");
                    break;
                }
            break;
        default:
            printf("Error input. Please try again.");
            break;

    }

    return 0;
}

