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

void matrix_double_multiplication(int dim1, int dim2, int dim3, double *mat1, double *mat2, double *matResult)
{
    int i, j, k;
    double scal_prod;
    for (i = 0; i < dim1; i++)
    {
        for (j = 0; j < dim3; j++)
        {
            scal_prod = 0.0;
            for (k = 0; k < dim2; k++)
            {
                scal_prod += (*(mat1 + i * dim2 + k)) * (*(mat2 + j + k * dim3));
            }
            *(matResult + i * dim3 + j) = scal_prod;
        }
    }
}

void identity_matrix_double(double *mat, int dim)
{
    for (int i = 0; i < dim; i += 1)
    {
        for (int j = 0; j < dim; j += 1)
        {
            *(mat + j + i * dim) = (i == j) ? 1.0 : 0.0;
        }
    }
}