#include <stdio.h>
#include <basic/array.h>
#include <basic/matrix.h>

int orthogonality_double(double *mat, int dim, double toll)
{
    double transp[dim][dim];
    transpose_matrix_double(mat, *transp, dim, dim);

    double res[dim][dim];
    // pay attention to mat which already is a pointer
    matrix_double_multiplication(dim, dim, dim, mat, *transp, *res);

    double id[dim][dim];
    identity_matrix_double(*id, dim);
    return compare_matrix_double(*res, *id, dim, dim, dim, dim, toll);
}

void main()
{
    // int dim = 3;
    // double mat[3][3] = {0.3334, 0.6667, 0.6667, 0.6667, 0.3334, -0.6665, -0.6665, 0.6667, -0.3332};

    int dim;
    scanf("%d", &dim);
    double mat[dim][dim];
    read_arr_double(*mat, dim * dim);

    double toll = 0.001;
    int res = orthogonality_double(*mat, dim, toll);

    if (res == 1)
        printf("Matrix is orthogonal");
    else
        printf("Matrix isn't orthogonal");
}