/*Program that will read from the console a random positive
nonzero number and determine if it is a power of 2. */

#include<stdio.h>
#include<math.h>
void main()
{
int n;
printf("Enter the number=");
scanf("%d", &n);

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

return 0;
}
