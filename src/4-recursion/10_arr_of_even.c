#include <stdio.h>
#include <basic/array.h>

int even_arr(int *arr, int dim)
{
    if (dim == 1)
        return !(*arr % 2);

    return !(*arr % 2) && even_arr(arr + 1, dim - 1);
}

void main()
{
    int dim;
    scanf("%d", &dim);
    int arr[dim];
    read_input_arr(arr, dim);

    char *res = (even_arr(arr, dim))? "Yes": "No";
    printf("Is the arr composed by even numbers? %s", res);
}