#include <stdio.h>
int main(void)
{
    FILE *file;
    file = fopen("sample.text","r");
    if(file==NULL)
    {
        printf("File does't exist..\n");
    }
    else
    {
        int x,count=0;
        float sum=0;
        for(int i=0;!feof(file);i++)
        {
            fscanf(file,"%d",&x);
            sum+=x;
            count++;
        }
        printf("%.2f",sum/count);

        fclose(file);
    }
    return 0;
}

