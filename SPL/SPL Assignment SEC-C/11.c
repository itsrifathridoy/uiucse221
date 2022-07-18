#include <stdio.h>
int main(){
    unsigned int a;
    unsigned long int b;
    unsigned long long int c;
    unsigned short int d;
    a = 4294967295;
    b = 4294967295;
    c = 18446744073709551615;
    d = 65535;
    printf("The unsigned int value: %u\n",a);
    printf("The unsigned long int value: %lu\n",b);
    printf("The unsigned long long int value: %llu\n",c);
    printf("The unsigned short int value: %hu\n",d);
    return 0;
}