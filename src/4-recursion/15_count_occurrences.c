#include <stdio.h>
#include <basic/array.h>

int count_occurrences(int *arr, int dim, int n)
{
    if (dim <=0)
        return 0;

    return (arr[0]==n) + count_occurences(arr+1, dim-1, n);
}

void main()
{
    int dim;
    printf("Enter array dimension: ");
    scanf("%d", &dim);
    int arr[dim];
    read_input_arr(arr, dim);

    int n;
    printf("\nWant to count the occurrences of: ");
    scanf("%d", &n);

    int res = count_occurrences(arr, dim, n);
    printf("\nThe occurrences of %d in the array are %d", n, res);
}