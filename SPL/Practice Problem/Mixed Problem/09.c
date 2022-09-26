#include<stdio.h>
struct student
{
    char name[100];
    char id[20];
    float marks[3][4];
    float cgpa;
};
void print(struct student st[],FILE *output)
{
    for(int i=0;i<10;i++)
    {
        fprintf(output,"%s\n",st[i].name);
        fprintf(output,"%s\n",st[i].id);
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
            {
                fprintf(output,"%.2f ",st[i].marks[j][k]);
            }
            fprintf(output,"\n");
        }
        fprintf(output,"%.2f\n",st[i].cgpa);
    }
}
int main()
{
    struct student st[10];
    FILE *input;
    FILE *output;
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");
    for(int i=0;i<10;i++)
    {
        fscanf(input," %[^\n]s",st[i].name);
        fscanf(input," %[^\n]s",st[i].id);
        int j=0;
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
            {
                fscanf(input,"%f",&st[i].marks[j][k]);
            }

        }
        fscanf(input,"%f",&st[i].cgpa);
    }
    print(st,output);




    return 0;
}

