#include "../matrix.h"
#include <stdio.h>

void print_matrix(int *M, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(M + j + i * c));
        }
        printf("\n");
    }
    printf("\n");
}

void print_matrix_double(double *M, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%lf ", *(M + j + i * c));
        }
        printf("\n");
    }
    printf("\n");
}