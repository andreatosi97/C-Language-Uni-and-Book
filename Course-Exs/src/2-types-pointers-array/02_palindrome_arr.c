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

    // Here check is palindrome
    int palindrome = 1;
    for (int i = 0; palindrome && i <= dim / 2; i++)
    {
        if (arr[i] != arr[dim - 1 - i])
            palindrome = 0;
    }

    if (palindrome)
        printf("Palindrome array\n");
    else
        printf("Non-palindrome array\n");
}
/* POST: prints if the array is palindrome or not */