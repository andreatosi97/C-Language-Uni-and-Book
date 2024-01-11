// io
void print_matrix(int *, int, int);
void print_matrix_double(double *, int, int);

// write
void transpose_matrix(int *A, int *B, int row, int col);
void transpose_matrix_double(double *, double *, int, int);
void matrix_double_multiplication(int dim1, int dim2, int dim3, double *mat1, double *mat2, double *matResult);
void identity_matrix_double(double *Mat, int dim);

// compare
int compare_matrix_double(double *mat1, double *mat2, int row1, int col1, int row2, int col2, double toll);