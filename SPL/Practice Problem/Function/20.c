#include<stdio.h>
int arr[100];
int isPrime(int n)
{
    int flag=1,x=0;
    if(n==1)
    {
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        arr[x]=n;
        x++;
    }
}
void GenNthPrime(int n)
{
    for(int i=1;i<n;i++)
    {
        isPrime(i);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    GeneratePrime(n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}



