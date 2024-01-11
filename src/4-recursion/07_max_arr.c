#include <stdio.h>
#include <basic/array.h>

int max_arr(int *arr, int dim)
{
    if (dim == 1)
    {
        return arr[0];
    }

    int max = max_arr(arr + 1, dim - 1);
    return (arr[0] > max) ? arr[0] : max;
}

void main()
{
    int dim;
    scanf("%d", &dim);
    int arr[dim];
    read_input_arr(arr, dim);

    printf("The max is: %d", max_arr(arr, dim));
}