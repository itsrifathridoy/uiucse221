#include<stdio.h>
int main()
{
    float marks;
    printf("Please Enter your marks: ");
    scanf("%f",&marks);

    if(marks>=90 && marks<=100)
    {
        printf("Your grade is \"A\" ");
    }
    else if(marks>=86 && marks<=89)
    {
        printf("Your grade is \"A-\" ");

    }
    else if(marks>=82 && marks<=85)
    {
        printf("Your grade is \"B+\" ");

    }
    else if(marks>=78 && marks<=81)
    {
        printf("Your grade is \"B\" ");

    }
    else if(marks>=74 && marks<=77)
    {
        printf("Your grade is \"B-\" ");

    }
    else if(marks>=70 && marks<=73)
    {
        printf("Your grade is \"C+\" ");

    }
    else if(marks>=66 && marks<=69)
    {
        printf("Your grade is \"C\" ");

    }
    else if(marks>=62 && marks<=65)
    {
        printf("Your grade is \"C-\" ");

    }
    else if(marks>=58 && marks<=61)
    {
        printf("Your grade is \"D+\" ");

    }
    else if(marks>=55 && marks<=57)
    {
        printf("Your grade is \"D\" ");

    }
    else
    {
        printf("Your grade is \"F\" ");

    }

    return 0;
}
