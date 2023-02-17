#include<stdio.h>
int main(){
    int a,b,choice;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter a choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Addition: %d",a+b);
            break;
        case 2:
            printf("Subtraction: %d",a-b);
            break;
        case 3:
            printf("Multiplication: %d",a*b);
            break;
        case 4:
            printf("Quotient: %d",a/b);
            break;
            
        default:
            printf("Try again.");
    }
    return 0;
}