#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int len=0,temp;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(int i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    printf("%s",str);
    return 0;
}

