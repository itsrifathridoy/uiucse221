#include<stdio.h>
int main()
{
    int X,guessX,N=3;
    printf("Player-1: Pick a number.\n");
    scanf("%d",&X);


    while(N>0)
    {
        printf("Player-2: Guess the number.\n");
        scanf("%d",&guessX);

        if(guessX==X)
            {
                printf("Right, Player-2 wins!\n");
                break;
            }

        else
            {
                if(N==1)
                    {
                        printf("Player-1 wins!\n");
                        break;
                    }
                else
                    {
                        printf("Wrong,%d Chance(s) Left\n",--N);

                    }

            }

    }

    return 0;
}
