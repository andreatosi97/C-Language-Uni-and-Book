#include "../matrix.h"

void transpose_matrix(int *A, int *B, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            B[row * j + i] = A[col * i + j]; // Or: *(B + j * row + i) = *(A + i * col + j);
        }
    }
}

void transpose_matrix_double(double *Mat, double *Tras, int row, int col)
{
    for (int i = 0; i < row; i += 1)
    {
        for (int j = 0; j < col; j += 1)
        {
            *(Tras + i + j * row) = *(Mat + j + i * col);
        }
    }
}

void matrice_identita_double(double *Matrice, int dim)
{ ///

    for (int i = 0; i < dim; i += 1)
    {
        for (int j = 0; j < dim; j += 1)
        {
            *(Matrice + j + i * dim) = (i == j) ? 1.0 : 0.0;
        }
    }
}