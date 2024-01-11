#include <stdio.h>

void main() {
    int n; 
    /* PRE: n positive integer */

    printf("We want to print the sum and product of the numbers up to: ");
    scanf("%d", &n);

    int sum = 0; 
    int prod = 1; 
    for (int i=1; i<=n; i++) {
        sum += i;
        prod *= i;
    }
    printf("The sum of the first %d numbers = %d\n", n, sum);
    printf("The factorial %d! = %d\n", n, prod);
}
/* POST: compute the sum of first n numbers and n! */