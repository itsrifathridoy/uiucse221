#include<stdio.h>
int main()
{
    char str[30];
    int position;
    scanf("%[^\n]s",str);
    scanf("%d",&position);
    int len=0;
            for (int i=0;str[i]!='\0';i++)
            {
                len++;
            }
            for (int i=position-1;i<len;i++)
            {
                str[i]=str[i+1];
            }
            printf("%s\n",str);
    return 0;
}


