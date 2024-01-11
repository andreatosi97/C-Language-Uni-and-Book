#include <stdio.h>
#include <basic/array.h>
#include <basic/matrix.h>

void main()
{
    // int row = 3, col = 3;
    // int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Dimensions variables
    int row, col;
    scanf("%d %d", &row, &col);
    // Matrix
    int mat[row][col];
    read_input_arr(*mat, row * col);

    int transposed[col][row];
    transpose_matrix(*mat, *transposed, row, col);

    // // Otherwise if we want to exploit the matrix form of transposed
    // for (int i = 0; i < row; i++)
    //     for (int j = 0; j < col; j++)
    //     {
    //         transposed[j][i] = mat[i][j];
    //     }

    // Print result
    print_matrix(*transposed, col, row);
}