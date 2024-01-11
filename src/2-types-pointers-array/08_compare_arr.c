#include <stdio.h>
#include <basic/array.h>

int main(void)
{
    // const int dim = 10;
    // int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int B[] = {1, 2, 3, 4, 5, 6, 7, 7, 9, 10};

    int dim;
    printf("The input array will be of dimension = ");
    scanf("%d", &dim);
    int A[dim], B[dim];
    read_input_arr(A, dim);
    read_input_arr(B, dim);

    if (compare_arr(A, B, dim) == 1)
        printf("The arrays are equal\n");
    else
        printf("The arrays are different\n");

    return 0;
}