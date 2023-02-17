#include <stdio.h>
int main()
{

    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    int len=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    int x=len;
    for(int i=0;str2[i]!='\0';i++)
    {
        str1[x]=str2[i];
        x++;
    }
    str1[x]='\0';
    printf("%s",str1);

    return 0;
}
