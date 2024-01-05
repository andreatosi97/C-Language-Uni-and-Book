#include <stdio.h>
#include <basic/array.h>

void swap_elements(int *arr, int i, int j);
int find_min_ind(int *arr, int dim);

void swap_elements(int *arr, int i, int j)
{
    int temp = *(arr + i);
    *(arr + i) = *(arr + j);
    *(arr + j) = temp;
}

int find_min_ind(int *arr, int dim)
{
    int min_ind = 0;
    for (int i = 1; i < dim; i++)
    {
        if (arr[min_ind] > arr[i])
            min_ind = i;
    }
    return min_ind;
}

int main()
{
    // // If we want to test without setting inputs
    // const int dim = 13;
    // int arr[] = {3, 5, 11, 1, 7, 0, 9, 4, 6, 2, 8, 13, 7};

    // Here we read the inputs from the user
    int dim;
    printf("The input array will be of dimension = ");
    scanf("%d", &dim);
    int arr[dim];
    read_input_arr(arr, dim);

    /* PRE: arr is a non-empty array of integers */

    int min_index, tmp;
    for (int i = 0; i < dim; i++)
    {
        min_index = find_min_ind(arr + i, dim - i) + i;
        swap_elements(arr, i, min_index);
    }

    print_array(arr, dim);
}
/* POST: prints the array in increasing order */