#include <stdio.h>
#include <basic/array.h>
#include <basic/matrix.h>

void main()
{
    // int dim1 = 5, dim2 = 2, dim3 = 3;
    // double mat1[5][2] = {1.000000, 2.000000, 3.000000, 4.000000, 5.000000, 6.000000, 7.000000, 8.000000, 9.000000, 10.000000};
    // double mat2[2][3] = {6.000000, 5.000000, 4.000000, 3.000000, 2.000000, 1.000000};

    // Dimensions of first matrix and the matrix itself
    int dim1, dim2;
    scanf("%d", &dim1);
    scanf("%d", &dim2);
    double mat1[dim1][dim2];
    read_arr_double(*mat1, dim1 * dim2);

    // Dimension of second matrix (raw dim has to be = dim2) and the matrix itself
    int dim3;
    scanf("%d", &dim3);
    double mat2[dim2][dim3];
    read_arr_double(*mat2, dim2 * dim3);

    // Multiplication
    double matResult[dim1][dim3];
    matrix_double_multiplication(dim1, dim2, dim3, *mat1, *mat2, *matResult);

    print_matrix_double(*matResult, dim1, dim3);
}