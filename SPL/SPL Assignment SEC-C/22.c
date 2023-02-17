#include<stdio.h>
int main()
{
    int int_input,int_assign;
    float float_input,float_assign;
    scanf("%d %f",&int_input,&float_input);
    int_assign=float_input;
    float_assign=int_input;
    printf("Assignment: %f assigned to an int produces %d\n",float_input,int_assign);
    printf("Assignment: %d assigned to a float produces %f\n",int_input,float_assign);
    printf("Type Casting: (float) %d produces %f\n",int_input,(float)int_input);
    printf("Type Casting: (int) %.3f produces %d\n",float_input,(int)float_input);
    return 0;
}