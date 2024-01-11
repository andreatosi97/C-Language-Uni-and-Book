#include <stdio.h>
#include <basic/array.h>

int palindrome(int array[], int n);

int palindrome(int array[], int n)
{
    int inverted_arr[n]; // we copy the array in inverted_arr
    for (int i = 0; i < n; i++)
    {
        inverted_arr[i] = array[i];
    }
    invert_arr(inverted_arr, n); // and we invert it

    return compare_arr(array, inverted_arr, n);
}

int main()
{
    // const int N = 5;
    // int array[] = {1, 2, 3, 2, 1};

    // Here we read the inputs from the user
    int dim;
    printf("The input array will be of dimension = ");
    scanf("%d", &dim);
    int arr[dim];
    read_input_arr(arr, dim);

    if (palindrome(arr, dim) == 1)
    {
        printf("The array is palindrome\n");
    }
    else
        printf("The array is not palindrome\n");
}
