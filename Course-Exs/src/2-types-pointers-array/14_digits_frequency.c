#include <stdio.h>

void digits_counter(int n, int *arr);

void digits_counter(int n, int *arr){
    /* PRE: n is an integer number */

    for (int i = 0; i<10; i++)  // Reinitialization at zero, useful if called multiple times
        arr[i] = 0;

    if (n == 0)
        arr[0] = 1;
    else if (n < 0)
        n *= -1;

    while (n > 0)
    {
        arr[n % 10] += 1;
        n = n / 10;
    }
}
/* POST: modify an array inserting how many time evey digit appears in n */

void main()
{
    int n;
    printf("We want to count the digits frequency of the number: ");
    scanf("%d", &n);

    int arr[10] = {0};
    digits_counter(n, arr);

    for (int i = 0; i<10; i++){
        printf("The frequency of the digit %d is: %d\n", i, arr[i]);
    }
}