#include<stdio.h>
int main()
{
    char str1[100];
    int count=1;
    scanf("%[^\n]s",str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==' '&& str1[i+1]!=' ' && str1[i+1]!='\0')
        {
            count++;
        }

    }
    printf("%d",count);


    return 0;
}
