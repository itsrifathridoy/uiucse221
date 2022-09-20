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
        int arr[50],size=0;
        float sum=0;
        for(int i=0;!feof(file);i++)
        {
            fscanf(file,"%d",&arr[i]);
            sum+=arr[i];
            size++;
        }
        printf("%.2f",sum/size);

        fclose(file);
    }
    return 0;
}

