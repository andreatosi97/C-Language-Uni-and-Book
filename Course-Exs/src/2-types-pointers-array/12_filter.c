#include <stdio.h>
#include <basic/array.h>

int main()
{
    // int len = 12;
    // int f = 1;
    // int A[] = {1, 1, 2, 1, 4, 5, 1, 1, 8, 9, 1, 10};

    // Here we read the inputs from the user
    int len;
    printf("The input array will be of dimension = ");
    scanf("%d", &len);
    int A[len];
    read_input_arr(A, len);
    // take the element to delete as input
    int f;
    print("Select the element to delete: ");
    scanf("%d", &f);

    filter(A, &len, f);

    print_array(A, len);
}