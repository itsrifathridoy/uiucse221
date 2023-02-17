//WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”.
#include<stdio.h>
int main()
{
    int n,count=0,search,index;
    scanf("%d",&n);
    int arr[n];
    int indexArr[n];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
       if(arr[i]==search)
       {
           indexArr[count]=i;
           count++;
       }
    }
    if(count!=0)
    {
        printf("FOUND at index position: ");
        for(int i=0;i<count;i++)
        {
            printf("%d ",indexArr[i]);
        }
    }
    else
    {
        printf("\nNOT FOUND");
    }


    return 0;
}
