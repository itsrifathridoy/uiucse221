#include<stdio.h>
int main()
{
    char name[30];
    scanf("%[^\n]s",name);
    char temp;
    char str[30];
    int len=0;
    for (int i=0;name[i]!='\0';i++)
    {
        len++;
    }
    for(int i=0;i<len;i++)
    {
        if(name[i]>='a'&&name[i]<='z')
            name[i]=name[i]-32;
    }
    printf("name=%s\n",name);

    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(name[i]>name[j])
            {
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    int count;
    int max=0;
    char maxChar;
    for (int i=0;i<len;i++)
    {
        count=1;
        for(int j=i+1;j<len;j++)
        {
            if(name[i]==name[j])
            count++;
        }
        if(max<count)
        {
            max=count;
            maxChar=name[i];
        }
    }
    printf("%c or %c",maxChar,maxChar+32);
    return 0;
}
