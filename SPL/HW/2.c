#include <stdio.h>
int main()
{

    int i, j, rows, k;
    printf (" Enter a number to define the rows: \n ");
    scanf("%d", &rows);
    printf("\n");
    for (i = rows; i >= 1; i--)
    {
        for (j = 0; j < rows-i; j++)
        {
            printf(" ");
        }
        for (k = i; k >= 1; k--)
        {
            printf("*");
        }
        printf ("\n");
    }
}

