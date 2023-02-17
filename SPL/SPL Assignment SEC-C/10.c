#include <stdio.h>
int main(){
    long int a;
    long long int b;
    long double c;
    short int d;
    a = 2147483647;
    b = 9223372036854775807;
    c =  35499.5184;
    d = 40;
    printf("The long int value: %ld\n",a);
    printf("The long long int value: %lld\n",b);
    printf("The long double value: %Lf\n",c);
    printf("The short int value: %hd\n",d);
    return 0;
}
