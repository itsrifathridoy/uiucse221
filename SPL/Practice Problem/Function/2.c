#include<stdio.h>
void func(char ch)
{
    printf("Value received from main:  %c",ch);
}
int main()
{
    char ch;
    scanf("%c",&ch);
    func(ch);
    return 0;
}

