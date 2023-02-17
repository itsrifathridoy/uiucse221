#include<stdio.h>
typedef struct Soldier
{
    char id[50];
    int age;
    float weight;
}s;
int main()
{
    struct Soldier soldier1;
    scanf("%[^\n]s",soldier1.id);
    scanf("%d",&soldier1.age);
    scanf("%f",&soldier1.weight);

    printf("Id: %s\n",soldier1.id);
    printf("Age: %d\n",soldier1.age);
    printf("Weight: %f\n",soldier1.weight);
    return 0;
}

