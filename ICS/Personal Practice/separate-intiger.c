#include<stdio.h>
int main()
{
    int n,temp,divid=100;
    int arr[3];
    scanf("%d",&n);
    for(int i=0;i<3;i++)
    {
        temp = n/divid;
        arr[i]=temp;
        divid=divid/10;
        n/=10;
    }
    printf("%d-%d-%d",arr[2],arr[1],arr[0]);
    return 0;
}
