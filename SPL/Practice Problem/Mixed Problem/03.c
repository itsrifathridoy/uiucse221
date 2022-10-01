#include<stdio.h>
void delPosition(char str[],int len,int position)
{
    for (int i=position;i<len;i++)
            {
                str[i]=str[i+1];
            }
}
int main()
{
    char str[30];
    int index;
    scanf("%[^\n]s",str);
    int len=0;
        for (int i=0;str[i]!='\0';i++)
        {
                len++;
        }
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                if (str[i]==str[j])
                {
                    delPosition(str,len,j);
                    i--;
                    len--;
                }
            }

            }

        printf("%s\n",str);
    return 0;
}



