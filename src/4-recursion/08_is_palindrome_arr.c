#include <stdio.h>
#include <basic/array.h>

int is_palindrome_arr(int *arr, int dim)
{
    if (dim<=1)
        return 1;
    
    return (arr[0] == arr[dim-1]) && is_palindrome_arr(arr+1, dim-2);
}

void main()
{
    int dim;
    scanf("%d", &dim);
    int arr[dim];
    read_input_arr(arr, dim);

    char *res = (is_palindrome_arr(arr, dim))? "Yes": "No";
    printf("Is the arr palindrome? %s", res);
}