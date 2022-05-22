
#include<stdio.h>
int main()
{
    int X,guessX,N;
    printf("Player-1: Pick a number.\n");
    scanf("%d",&X);

    printf("How many tries you want.\n");
    scanf("%d",&N);

    for(int i=1;N>0;i++)
    {
        scanf("%d",&guessX);
        if(X!=guessX && N>1)
        {
            printf("Wrong! %d Choice(s) Left!\n",--N);
        }
        else if(X==guessX)
        {
            printf("Right, Player-2 wins");
            break;
        }
        else
        {
            printf("Player-1,wins!");
            break;
        }

    }

    return 0;
}

