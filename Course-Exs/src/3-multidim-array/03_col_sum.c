#include <stdio.h>
#include <basic/array.h>

void col_sums(int *matrix, unsigned int row, unsigned int col, int *sums)
{
    for (int i =0; i<col; i++){
        sums[i] = 0;
        for (int j=0; j<row; j++){
            sums[i]+=*(matrix + j*col + i);
        }
    }
}

int main()
{
    // int row = 3, col = 3;
    // int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int row, col;
    scanf("%u", &row);
    scanf("%u", &col);
    int mat[row][col];
    read_input_arr(*mat, row * col);

    int sums[col];

    col_sums(*mat, row, col, sums);

    for (int i = 0; i < col; i = i + 1)
    {
        printf("The sum of the %d-th colum is %d\n", i, sums[i]);
    }
}