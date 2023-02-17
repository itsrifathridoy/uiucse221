/*WAP that will take n integer numbers into an array, and then sum up all the even indexed integers in that array.*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
       if(i%2==0)
       {
           sum+=arr[i];
       }
    }
    printf("%d",sum);
    return 0;
}

