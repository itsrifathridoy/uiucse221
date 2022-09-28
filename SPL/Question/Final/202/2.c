#include<stdio.h>
void strConcat(char str1[],char str2[],char str3[])
{
    int len=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
        //printf("%c\n",str1[i]);
        len++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        str3[len]=str2[i];
        len++;
    }
    str3[len]='\0';
}
int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    scanf("%s",str1);
    scanf("%s",str2);
    strConcat(str1,str2,str3);
    printf("%s",str3);
    return 0;
}
