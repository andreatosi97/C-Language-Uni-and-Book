#include "../matrix.h"
#include <stdio.h>

void print_matrix(int *M, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", *(M + j + i * col));
        }
        printf("\n");
    }
    printf("\n");
}

void print_matrix_double(double *M, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%lf ", *(M + j + i * col));
        }
        printf("\n");
    }
    printf("\n");
}