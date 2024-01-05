#include <stdio.h>
#include <basic/array.h>

void main()
{
    // int dim = 10;
    // int arr[10] = {1, 8, 4, 7, 12, 3, 2, 0, 0, 0};
    // int x = 5;
    // int pos = 4;

    // Here we read the inputs from the user
    int dim;
    printf("The input array will be of dimension = ");
    scanf("%d", &dim);
    int arr[dim];
    printf("RMK: At the end of the array there should be at least one zero.");
    read_input_arr(arr, dim);
    int x;
    printf("Enter the element to insert: ");
    scanf("%d", &x);
    int pos;
    printf("Enter the position where you want to inter it: ");
    scanf("%d", &pos);

    add_elem(arr, dim, x, pos);

    print_array(arr, dim);
}
