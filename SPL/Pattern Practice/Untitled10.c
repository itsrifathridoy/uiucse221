#include<stdio.h>
int main()
{
    int a[]={22,23,25,26,29,22,26,27};
    int b[sizeof(a)/4];
    int x=0;
    for(int i=0;i<sizeof(a)/4;i++)
    {
        for(int j=i;j<sizeof(a)/4;j++)
        {
            if(a[i]==a[j+1])
            {
                b[x]=a[i];
                printf("%d ",b[x]);
                x++;
            }

        }
    }

    return 0;
}
