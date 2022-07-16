#include<stdio.h>
int main()
{
    int n, first = 1, second = 1, next;

    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("1");
    }

    for (int i = 1 ; i < n ; i++ )
    {
       if ( i <= 1 && n!=1 )
       {
           next = i;
           printf("1");

       }
       else
       {
          next = first + second;
          first = second;
          second = next;
       }
       printf(", %d",next);
    }

    return 0;
}
