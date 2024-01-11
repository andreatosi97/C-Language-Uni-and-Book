#include <stdio.h>
#include <basic/array.h>

int main()
{
    // Here we read the inputs from the user
    int dim;
    printf("The input array will be of dimension = ");
    scanf("%d", &dim);
    int arr[dim];
    read_input_arr(arr, dim);
    /* PRE: arr is a non-empty array of integers */

    int min_index = 0, max_index = 0;
    for (int i = 1; i < dim; i++)
    {
        if (arr[min_index] > arr[i])
            min_index = i;
        else if (arr[max_index] < arr[i])
            max_index = i;
    }

    printf("Minimum value: array[%d] = %d\n", min_index, arr[min_index]);
    printf("Maximum value: array[%d] = %d\n", max_index, arr[max_index]);
}
/* POST: print max and min index and value */