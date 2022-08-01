#include <stdio.h>
int main(){
char x;
int N=1000,n=0;
float avg, amount,search;
float rainfall[N];
printf("=======BD Rainfall Record System======= \n");

printf("Enter t for reverse index order of rainfall.\n");
printf("Enter s for the amount is valid or not.\n ");
printf("Enter r for rainfall.\n");
printf("Enter q for quit\n");

while(1)
    {
        printf("Enter your choice : ");
        scanf(" %c",&x);

        switch(x)
        {

            case 'r':
                scanf("%f",&amount);
                rainfall[n]=amount;
                n++;
                break;

            case 's':
                if(n!=0)
                {
                    printf("Enter a rainfall amount to search: ");
                    scanf("%f",&search);
                    int i;
                    for(i=0;i<n;i++)
                    {
                        if(rainfall[i]==search)
                        {
                            printf("Found at %d Index\n",i);
                            break;
                        }
                    }
                    if(n==i)
                        {
                            printf("Not Found\n");
                        }

                }
                else
                {
                    printf("No rainfall amount information is found. Please populate rainfall amount information first.\n");
                }

                break;
            case 'q':
                printf("Exit the menu system.\n");
                return 0;
            case 't':
                if(n!=0)
                {
                    for(int i=n-1;i>=0;i--)
                    {
                        printf("%.2f ",rainfall[i]);
                    }
                    printf("\n");
                }
                else
                {
                    printf("No rainfall amount information is found. Please populate rainfall amount information first.\n");
                }

                break;
            default:
                printf("Invalid Input. \n");
                break;

        }

    }

}
