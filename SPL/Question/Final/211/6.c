#include<stdio.h>
int main()
{
    char str[100],str1[30]="011221235";
    scanf("%[^\n]s",str);
    int len=0,x=0;
    if(str[0]>='a' && str[0]<='z')
    {
        str[0]=str[0]-32;
    }
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i]==' ' && (str[i+1]>='a' && str[i+1]<='z'))
           {
               str[i+1]=str[i+1]-32;
           }
           len++;
    }
    str[len]=' ';
    for(int i=len+1;str1[i]!='\0';i++)
    {
        str[i]=str1[x];
        x++;
    }
    printf("%s",str);

    return 0;
}

