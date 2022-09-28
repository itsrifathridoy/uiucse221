// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char str1[]="forbear";
    char str2[]="forebear";
    int result;
    for(int i=0;str1[i]!='\0'|| str2[i]!='\0';i++)
    {
        if(str1[i]>str2[i])
        {
            result = str1[i]-str2[i];
            break;
        }
        else if(str1[i]<str2[i])
        {
            result = str1[i]-str2[i];
            break;
        }
        else
        {
            result = str1[i]-str2[i];
        }

    }
    if(result>0)
    {
        printf("str1 is greater than str2\n");
    }
    else if(result<0)
    {
        printf("str2 is greater than str1\n");
    }
    else
    {
        printf("Both are equal.\n");
    }
    printf("%d",strcmp(str1,str2));

    return 0;
}
