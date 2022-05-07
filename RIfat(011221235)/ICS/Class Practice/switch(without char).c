
#include<stdio.h>
int main()
{
    int a,b,op;

    printf("Press 1 for addition.\nPress 2 for subtraction.\nPress 3 for multiplication\nPress 4 for Division.");

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
            if(b==0){
                printf("Infinity");
            }
            else{
                printf("Devision: %d\n",a/b);
            }
            break;
        default:
            printf("Error input. Please try again.");

    }

    system("pause");
    return 0;
}
