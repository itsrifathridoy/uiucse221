#include<stdio.h>
int main()
{
    char str[50];
    int len=0;
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("%d",len);
    return 0;
}

