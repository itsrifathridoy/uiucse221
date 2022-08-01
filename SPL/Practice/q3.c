
#include<stdio.h>
int main()
{
    char str[100];
    int x=0;

    scanf("%[^\n]s",&str);
    for (int i=0;str[i]!='\0';i++)
    {
        x++;
    }
    for (int i=x;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
