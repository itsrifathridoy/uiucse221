#include<stdio.h>
struct patient
{
    char name[100];
    char id[100];
    int height;
    int weight;
    int age;
};
int main()
{
    int n=2;
    struct patient patients[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %[^\n]s",patients[i].name);
        scanf(" %[^\n]s",patients[i].id);
        scanf("%d",&patients[i].height);
        scanf("%d",&patients[i].weight);
        scanf("%d",&patients[i].age);
    }
    int max= patients[0].height;
    int maxIndex=0;
    for(int i=1;i<n;i++)
    {
        if(max<patients[i].height)
        {
            maxIndex=i;
        }
    }
    printf("%s\n",patients[maxIndex].id);
    return 0;
}

