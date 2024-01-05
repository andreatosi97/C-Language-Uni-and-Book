#include <stdio.h>
#include <basic/array.h>

void main()
{
    // int dim = 6;
    // int A[6] = {1, 2, 3, 1, 1, 3};

    int dim;
    scanf("%d", &dim);
    int A[dim];
    read_input_arr(A, dim);

    int freq[dim];
    arr_frequencies(A, dim, freq);

    for (int i = 0; i < dim; i++)
    {
        if (freq[i] != -1)
            printf("The value %d appears %d times\n", A[i], freq[i]);
    }
}