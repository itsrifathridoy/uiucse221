#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    printf("The number is: \t\t%10f\n",a);
    printf("The number is: \t%2f\n",a);
    printf("The number is: %.2f\n",a);
    printf("The number is: %.0f\n",a);
    printf("The number is: %e\n",a);
    return 0;
}
