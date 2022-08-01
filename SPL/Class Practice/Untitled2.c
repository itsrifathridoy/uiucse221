#include<stdio.h>
int main()
{
    char str1[50];
    int count=1;

    scanf("%[^\n]s",str1);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==' ')
        {
            if(str1[i]==' ' && str1[i+1]== ' ')
            {
                continue;
            }
            count++;
        }

    }
    printf("%d",count);

    return 0;
}
