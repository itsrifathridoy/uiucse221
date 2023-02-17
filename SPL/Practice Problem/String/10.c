#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    scanf("%[^\n]s",str1);
    int len=0,i;
    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        str2[i]=str1[len-i-1];
    }
    str2[i]='\0';
    printf("%s",str2);
    return 0;
}


