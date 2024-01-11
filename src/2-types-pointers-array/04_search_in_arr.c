#include <stdio.h>
#include <basic/array.h>

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

    int n;
    printf("Search in the array the integer: ");
    scanf("%d", &n);
    /* PRE: arr is a non-empty array of integers and n is an integer */

    if (searchInArray(arr, dim, n))
        printf("The element %d is in the array", n);
    else
        printf("The element %d is not in the array", n);
}
/* POST: prints if the input integer is or not in the array */