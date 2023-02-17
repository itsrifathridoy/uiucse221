#include<stdio.h>
int main()
{
    char str1[50];
    int count=1;

    scanf("%[^\n]s",str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
        {
           str1[i]=str1[i]-32;
        }
        else if(str1[i]>='A' && str1[i]<='Z')
        {
           str1[i]=str1[i]+32;
        }

    }
    printf("%s",str1);

    return 0;
}


