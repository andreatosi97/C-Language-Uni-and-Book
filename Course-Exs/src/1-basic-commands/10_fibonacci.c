#include <stdio.h>

void main()
{
    int limit;
    /* PRE: limit is a non-neg integer */

    printf("We want to print all Fibonacci numbers less than: ");
    scanf("%d", &limit);

    int fib0 = 0, fib1 = 1, fib2 = 1;
    printf("0\n1\n");
    while (fib2 < limit)
    {   
        printf("%d\n", fib2);
        fib0 = fib1;
        fib1 = fib2;
        fib2 = fib0 + fib1;
    }
}
/* POST: prints all Fibonacci numbers less than limit */