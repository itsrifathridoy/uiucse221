#include <stdio.h>
int main()
{
    int n, m, i, j, temp;
    printf("Enter the number of elements in array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of array A: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the number of elements in array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter the elements of array B: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &B[i]);
    }
    for (i = 0; i < n; i++)
    {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
    printf("The elements of array A after swapping are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nThe elements of array B after swapping are: ");
    for (i = 0; i < m; i++)
    {
        printf("%d ", B[i]);
    }
    return 0;
}
