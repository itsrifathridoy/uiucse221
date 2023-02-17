#include<stdio.h>
int main()
{
    int a=235%2+3;
    int b=235%2+2;
    int c=235%2+4;
    printf("START");
    switch( 1 ){
    case 0:
    printf("\n %d %d %d", a, b, c);
    break;
    case 1:
    printf("\n %d %d %d", a*2, b*2, c*3);
    case 3:
    printf("\n %d %d %d", a+1, b+2, c+3);

    case 4:
    printf("\n %d %d %d", a+1, b+2, c+3);
    break;

    default:
    printf("\n %d %d %d", a-1, b-1, c-1);
    }
    printf("\nSTOP");
    return 0;
}
