#include<stdio.h>
struct Person
{
    char name[100];
    int id;
    int salary;
};
int indexArr[5];
int search(struct Person persons[],int n,char searchName[])
{
    for(int i=0;i<n;i++)
    {
        if(!strcmp(searchName,persons[i].name))
        {
            indexArr[i]=i;
        }
        else
        {
            indexArr[i]=-1;
        }
    }
}
int main()
{
    struct Person persons[5];
    for(int i=0;i<5;i++)
    {
        scanf(" %[^\n]s",persons[i].name);
    }
    for(int i=0;i<5;i++)
    {
        scanf("%d",&persons[i].id);
    }
    for(int i=0;i<5;i++)
    {
        scanf("%d",&persons[i].salary);
    }
    char searchName[100];
    int flag=0;
    printf("Information Stored Successfully.\n");
    printf("Please write the name of the person you want to know about: ");
    scanf(" %[^\n]s",searchName);
    search(persons,5,searchName);
    printf("Search Result:\n");
    for(int i=0;i<5;i++)
    {
        if(indexArr[i]>=0)
        {
            printf("Name: %s\n",persons[indexArr[i]].name);
            printf("ID: %d\n",persons[indexArr[i]].id);
            if(persons[indexArr[i]].salary>16000)
            {
                printf("Status: A\n");
            }
            else
            {
                printf("Status: B\n");
            }
            flag=1;
        }
    }
    if(flag==0)
        {
            printf("The person is not in the directory.\n");
        }

    return 0;
}
