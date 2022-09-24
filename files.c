#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
struct dirent *de;
char fileName[100][255];
int is_regular_file(const char *path)
{
    struct stat path_stat;
    stat(path, &path_stat);
    return S_ISREG(path_stat.st_mode);
}
int folderPath(char fileName[100][255],DIR *dr)
{
    int count=0;
    //memset(fileName, 0, sizeof(fileName));

    while ((de = readdir(dr)) != NULL)
    {
        if(!is_regular_file(de->d_name))
        {
            //printf("%s\n", de->d_name);
            if(de->d_name[0]!='.')
            {
                strcpy(fileName[count],de->d_name);
                strcat(fileName[count],"\\");
                printf("%s\n", fileName[count]);
                char path[100] = "cd ";
                strcat(path,fileName[count]);
                system(path);
                system("del *.exe && del *.o");
                count++;
            }

        }
    }


    return count;
}

void openDir(char di[])
{
    DIR *dr = opendir(di);

	if (dr == NULL)
	{
		printf("Could not open current directory\n" );
		return 0;
	}
	int count = folderPath(fileName,dr);
	printf("%d\n",count);
	closedir(dr);
	int i=0;
	while(i<count)
	{
        if(i==count-1)
        {
            count=0;
            break;
        }
        openDir(strcat(di,fileName[i]));
        i++;
    }
}


int main(void)
{
    char di[100]=".\\";
	openDir(di);

	return 0;
}

