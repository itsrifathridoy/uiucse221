#include<stdio.h>
int main()
{
    float marks;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Please Enter your marks: ");
    scanf("%f",&marks);

    if(marks>=90 && marks<=100)
    {
        printf("Student %d : A\n");
    }
    else if(marks>=86 && marks<=89)
    {
         printf("Student %d : A-\n");

    }
    else if(marks>=82 && marks<=85)
    {
        printf("Student %d : B+\n");

    }
    else if(marks>=78 && marks<=81)
    {
         printf("Student %d : B\n");

    }
    else if(marks>=74 && marks<=77)
    {
         printf("Student %d : B-\n");

    }
    else if(marks>=70 && marks<=73)
    {
         printf("Student %d : C+\n");

    }
    else if(marks>=66 && marks<=69)
    {
         printf("Student %d : C\n");

    }
    else if(marks>=62 && marks<=65)
    {
         printf("Student %d : C-\n");

    }
    else if(marks>=58 && marks<=61)
    {
         printf("Student %d : D+\n");

    }
    else if(marks>=55 && marks<=57)
    {
        printf("Student %d : D\n");

    }
    else
    {
        printf("Your grade is \"F\" ");

    }

    }

    return 0;
}
