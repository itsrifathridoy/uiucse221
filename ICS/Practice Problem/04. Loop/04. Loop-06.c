/* Write a program (WAP) for the described scenario:**Player-1 picks a number X
    and Player-2 has to guess that number within N tries. For eachwrong guess by Player-2,
    the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 atany time successfully guesses the number,
    the program prints “Right, Player-2 wins!” andterminates right away. Otherwise after the completion of N wrong tries,
     the programprints “Player-1 wins!” and halts.( Hint: Use break/continue) */
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

