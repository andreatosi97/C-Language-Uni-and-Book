#include <stdio.h>
#include <basic/array.h>

int main(void)
{
    // const int dim = 10;
    // int A[] = {1,2,3,4,5,6,7,8,9,10};

    // Here we read the inputs from the user
    int dim;
    printf("The input array will be of dimension = ");
    scanf("%d", &dim);
    int arr[dim];
    read_input_arr(arr, dim);

    invert_arr(arr, dim);
    print_array(arr, dim);

    return 0;
}