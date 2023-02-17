#include<stdio.h>
int stringLength(char str[])
{
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    printf("%d",stringLength(str));
    return 0;
}
