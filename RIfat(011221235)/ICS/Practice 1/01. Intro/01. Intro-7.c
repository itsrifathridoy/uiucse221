#include<stdio.h>
int main(){
    int a;
    float b;
    char ch;

    printf("Enter a integer number: ");
    scanf("%d",&a);

    printf("Enter a floating point number: ");
    scanf("%f",&b);

    printf("Enter a character: ");
    scanf(" %c",&ch);  //Here space for take a character input after a integer or floating. If we don't use space here, compiler take "Enter" as a value.

    printf("The Integer value: %d\n",a);
    printf("The Floating point value: %f\n",b);
    printf("The Character value: %c",ch);
return 0;
}
