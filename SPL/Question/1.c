#include<stdio.h>
int countUnique(char *string)
{
    int count=0;
    char str[100];
    strcpy(str,string);
    for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u' || str[i]=='A' || str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U' )
            {
                count++;

                for(int j=i+1; str[j]!='\0' ; j++)
                {
                    if(str[i]==str[j])
                    {
                        str[j]='0';
                    }
                }

            }
        }
        return count;
}
void updateString(char str[],int len)
{
    int mid= len/2-1;
    str[mid]='S';
    str[mid+1]='P';
    str[mid+2]='L';
}
int main()
{
    char str[][100]={"Hello","World","Bangladesh"};
    for(int i=0;i<3;i++)
    {
        if(countUnique(str[i])%2!=0)
        {
            int len= strlen(str[i]);
            updateString(str[i],len);
        }
    }
        for(int i=0;i<3;i++)
        {
            printf("%s\n",str[i]);
        }
    return 0;
}

