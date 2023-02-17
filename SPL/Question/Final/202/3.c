#include<stdio.h>
typedef struct Player
{
    int played;
    int truns;
    int hscore;
    float avg;
}player;
player takeInput()
{
    player info;

        scanf("%d",&info.played);
        scanf("%d",&info.truns);
        scanf("%d",&info.hscore);
        scanf("%f",&info.avg);
    return info;
};
void showAvgMoreThan50(struct Player players[], int len)
{

}
int main()
{
    int n;
    scanf("%d",&n);
    player info[n];
    for(int i=0;i<n;i++)
    {
        info[i]=takeInput();
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",info[i].played);
        printf("%d\n",info[i].truns);
        printf("%d\n",info[i].hscore);
        printf("%f\n",info[i].avg);
    }
    return 0;
}

