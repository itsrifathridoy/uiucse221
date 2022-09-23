#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int count=0;
    FILE *file;
    file = fopen("file.txt","w");
    char *arr;
        arr = (char *)calloc(1, sizeof(char));
        printf("%d\n",sizeof(*arr)/sizeof(char));
        for(int i=0;;i++)
        {
            arr = (char *)realloc(arr,(i+1)*sizeof(char));
            scanf("%c",(arr+i));
            if(*(arr+i)==10)
            {
                break;
            }
        }
        for(int i=0;arr[i]!='\0';i++)
        {
            fprintf(file,"%c",arr[i]);
            count++;
        }
        fclose(file);
    printf("%s\n",arr);
    printf("%d",count);
        return 0;
}
