#include<stdio.h>
int main()
{
    char str[30];
    scanf("%[^\n]s",str);

            for (int j=0;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            printf("%s\n",str);
    return 0;
}
