#include <stdio.h>
#include <basic/array.h>

void swap_arr(int *arr1, int *arr2, int *size1, int *size2)
{
    int max = (*size1 > *size2)?*size1 : *size2;

    int tmp;
    for (int i = 0; i < max; i++){
        tmp = *(arr1+i);
        *(arr1+i) = *(arr2 +i);
        *(arr2+i) = tmp;
    }

    tmp = *(size1);
    *(size1) = *(size2);
    *(size2) = tmp;
}

void main()
{
    // int size_array1 = 3, size_array2 = 5;
    // int array1[5] = {1, 1, 1};
    // int array2[5] = {2, 2, 2, 2, 2};

    // array dimensions
    int size_array1, size_array2;
    scanf("%d %d", &size_array1, &size_array2);
    // arrays
    int max = (size_array1 > size_array2)?size_array1 : size_array2;
    int array1[max], array2[max];
    read_input_arr(array1, size_array1);
    read_input_arr(array2, size_array2);

    // swap arrays
    swap_arr(array1, array2, &size_array1, &size_array2);

    // print swapped array
    for (int i = 0; i < size_array1; i += 1)
        printf("[%d] -> A1: %d\n", i, array1[i]);
    for (int i = 0; i < size_array2; i += 1)
        printf("[%d] -> A2: %d\n", i, array2[i]);
}