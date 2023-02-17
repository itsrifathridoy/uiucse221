#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int sum=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum=sum+str[i]-48;
        }
    }
    printf("%d",sum);
    return 0;
}

