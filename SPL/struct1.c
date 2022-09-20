// Online C compiler to run C program online
#include <stdio.h>
struct Player
{
    char name[100];
    int matches;
    int totalRun;
    int highestScore;
    float averageScore;
};
struct Player players[10];
void takePlayerData(struct Player players[],int n);
void printPlayerData(struct Player players[], int i);
void fiftyMatches(struct Player players[], int n);
void highestScorePlayer(struct Player players[], int n);
void nameStartWithA(struct Player players[], int n);


int main()
{
    takePlayerData(players,10);
    highestScorePlayer(players,10);
    fiftyMatches(players,10);
    nameStartWithA(players,10);
    return 0;
}



void takePlayerData(struct Player players[], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf(" %[^\n]s",players[i].name);
        scanf("%d",&players[i].matches);
        scanf("%d",&players[i].totalRun);
        scanf("%d",&players[i].highestScore);
        scanf("%f",&players[i].averageScore);
    }
}
void printPlayerData(struct Player players[], int i)
{
        printf("%s\t\t   ",players[i].name);
        printf("%d\t\t",players[i].matches);
        printf("%d\t\t",players[i].totalRun);
        printf("%d\t\t",players[i].highestScore);
        printf("%.2f\t\t\n",players[i].averageScore);

}
void highestScorePlayer(struct Player players[], int n)
{
    int max=players[0].highestScore;
    int maxIndex=0;
    for(int i=1;i<n;i++)
    {
        if(max<players[i].highestScore)
        {
            max=players[i].highestScore;
            maxIndex=i;
        }
    }
    printf("---Highest Scored Player---\n");
    printPlayerData(players,maxIndex);

}
void fiftyMatches(struct Player players[], int n)
{
    printf("---Players Played at least 50 matches and have an average score more than 50---\n");
    for(int i=0;i<n;i++)
    {
        if(players[i].matches>=50 && players[i].averageScore>50)
        {
            printPlayerData(players,i);
        }
    }
}
void nameStartWithA(struct Player players[], int n)
{
    printf("---Players whose name start with A---\n");
    printf(" Name\t\tMatches Played\tTotal Runs\tHighest Score\tAverage Score\n");
    for(int i=0;i<n;i++)
    {
        if(players[i].name[0]=='A')
        {
            printPlayerData(players,i);
        }
    }
}
