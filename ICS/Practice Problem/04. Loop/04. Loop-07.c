/* Write a program (WAP) that will run and show keyboard
    inputs until the user types an ’A’ *at the keyboard.*/

#include<stdio.h>
int main()
{
    char ch;
    int n=0;
    while(ch!='A')
    {
        scanf(" %c",&ch);
        if(ch!='A')
        {
            n=n+1;
            printf("Input %d: %c\n",n,ch);
        }
        else
        {
            break;
        }
    }

}
