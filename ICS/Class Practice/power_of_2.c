#include<stdio.h>
void main()
{
int n;
printf("Enter the number=");
scanf("%d", &n);

    if(n>=0)
    {
        if(n==0){
        printf("NO");
    }
    else if(n==1){
        printf("YES");
    }
    else if(n%2==0){
        while(1){
            n=n/2 ;
            if (n%2!=0){
                printf("NO");
                break;
            }
            else if (n==2){
                printf("YES");
                break;
            }
            else {
                continue;
            }
        }


    }
    else{
            printf("NO");
        }
    }
    else
    {
        printf("INVALID");
    }

return 0;
}
