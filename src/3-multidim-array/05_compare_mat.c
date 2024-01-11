#include <stdio.h>
#include <basic/array.h>
#include <basic/matrix.h>

void main()
{
    // int row1 = 3, col1 = 4, row2 = 3, col2 = 4;
    // double mat1[3][4] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0};
    // double mat2[3][4] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0};

    // First matrix inputs
    int row1, col1;
    scanf("%d %d", &row1, &col1);
    int row2, col2;
    scanf("%d %d", &row2, &col2);
    // Second matrix inputs
    double mat1[row1][col1];
    leggi_array_double(*mat1, row1 * col1);
    double mat2[row2][col2];
    leggi_array_double(*mat2, row2 * col2);

    double toll = 0.001;
    int res = compare_matrix_double(*mat1, *mat2, row1, col1, row2, col2, toll);

    if (res == 1)
        printf("The matrices are equal");
    else
        printf("The matrices are different");
}