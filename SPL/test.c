#include <stdio.h>
int main(void)
{
    int arr[10];
    FILE *file;
    file = fopen("input.text","r");
    if(file==NULL)
    {
        printf("File isn't exist..\n");
    }
    else
    {
        for(int i=0;i<10;i++)
        {
            fscanf(file,"%d",&arr[i]);
        }
    }


return 0;
}
