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

                    if ((str[i]==' ')||(str[i]>='0' && str[i]<='9') || (str[i]=='A'||str[i]=='E' || str[i]=='I' ||str[i]=='O'||str[i]=='U' )|| (str[i]=='a'||str[i]=='e' || str[i]=='i' ||str[i]=='o'||str[i]=='u') )
                    {
                        delPosition(str,len,i);
                        i--;
                        len--;
                    }

            }

        printf("%s\n",str);
    return 0;
}




