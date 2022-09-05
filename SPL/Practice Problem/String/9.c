#include<stdio.h>
int main()
{
    char str[100],ch;
    int count=0;
    scanf("%[^\n]s",str);
    scanf(" %c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch || str[i]+32==ch || str[i]-32==ch)
        {
            count++;
        }

    }
    printf("%d",count);


    return 0;
}

