#include <stdio.h>

/* PRE: n>=0
POST: return the n-th Fibonacci number, where fibonacci(0) = 0 and fibonacci(1) = 1 */
int iter_fibo(int n)
{
    int fib_minus2 = 0; // initially is fib(0), then fib(i-2)
    int fib_minus1 = 1; // initially is fib(1), then fib(i-1)
    int fib = 1;        // initially is fib(2), then fib(i)
    for (int i = 3; i <= n; i += 1)
    {
        fib_minus2 = fib_minus1;
        fib_minus1 = fib;
        fib = fib_minus2 + fib_minus1;
    }
    return (n <= 1) ? n : fib;
}

/* PRE: n>=0
POST: return the n-th Fibonacci number, where fibonacci(0) = 0 and fibonacci(1) = 1 */
int rec_fibo(int n)
{
    return (n < 2) ? n : rec_fibo(n - 1) + rec_fibo(n - 2);
}

void main()
{
    int n = 7;
    for (int i = 0; i <= n; i += 1)
        printf("fibonacci(%d)=%d\n", i, iter_fibo(i));

    printf("\nNow we test the recursive method:\n");
    for (int i = 0; i <= n; i += 1)
        printf("fibonacci(%d)=%d\n", i, rec_fibo(i));
}