#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
int main(void)
{
    char path[1000],exten[20];
    printf("Enter Folder Name: ");
    scanf("%[^\n]s",path);
    printf("File Extension: ");
    scanf("%s",exten);
    for(int i=0;path[i]!='\0';i++)
    {
        if(path[i]=='\\')
        {
            path[i]='/';
        }
    }
    strcat(path,"/");
    int count=0;
    countInDir(path,exten);
    return 0;
}

int countInDir(char path[],char exten[])
{
    DIR *dir;
    dir = opendir(path);
    if(dir==NULL)
    {
        return 0;
    }
    struct dirent* entry;
    entry = readdir(dir);
    int count = 0;
    char filePath[100];
    while(entry!=NULL)
    {
        if(strstr(entry->d_name,exten))
        {
            strcpy(filePath,path);
            strcat(filePath,entry->d_name);
            count += lineCount(filePath);
            strcpy(filePath,"");
        }
        else if(S_ISDIR(entry->d_name))
        {
            printf("%s\n",entry->d_name);
        }




        entry = readdir(dir);
    }
    printf("%d",count);
}
int lineCount(char filePath[])
{
    FILE *file;
    file = fopen(filePath,"r");
    if(file==NULL)
    {
        printf("File does't exist..\n");
    }
    else
    {
        int count=1;
        char x,y;
        for(int i=0;!feof(file);i++)
        {
            fscanf(file,"%c",&x);
            if(x=='\n')
            {
                count++;
            }
        }

        fclose(file);
        return count;
    }
}

