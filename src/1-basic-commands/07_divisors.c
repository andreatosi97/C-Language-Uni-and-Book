#include <stdio.h>

void main()
{
    int x;
    /* PRE: x is positive integer */
    
    printf("We want to check if the following integer is prime");
    printf(" or to print its lowest divsor: ");
    scanf("%d", &x);

    int prime = 1;
    for (int i = 2; i < x; i++)
    {
        if (x%i==0){
            printf("%d is divisible by %d\n", x, i);
            prime = 0;
        }
    }
    if (prime) {
        printf("%d is prime\n", x);
    }
}
/* POST: prints the divisors */