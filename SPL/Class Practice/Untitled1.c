#include<stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    int count=0;
    int len=0;

    scanf("%[^\n]s",str1);
    scanf(" %[^\n]s",str2);
    for(int i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        len++;
    }
    for(int i=0;i<=len;i++)
    {
        str1[count+i]=str2[i];
        //printf("%s\n",str1);
    }
    /*for(int i=0;str1[i]!='\0';i++)
    {
        printf("%c",str1[i]);
    }*/
    printf("%s",str1);


    return 0;
}
