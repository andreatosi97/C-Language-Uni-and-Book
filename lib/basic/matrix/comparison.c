#include "../matrix.h"
#include "../array.h"

int compare_matrix_double(double *mat1, double *mat2, int row1, int col1, int row2, int col2, double toll)
{
    if ((row1 != row2) || (col1 != col2))
        return 0;

    // notice that mat1, mat2 are already pointers to double so we use them as input, 
    // and not *mat1, *mat2 as we do when calling these function 
    return compare_arr_double(mat1, mat2, row1*col1, toll);
}