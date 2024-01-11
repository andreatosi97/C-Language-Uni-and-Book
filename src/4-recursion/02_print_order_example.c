#include <stdio.h>

void f(int n)
{
    printf(" ( ");
    if (n == 0)
        printf(" BASE CASE ");
    else
    {
        printf(" BEFORE-%d ", n);
        f(n - 1);
        printf(" AFTER-%d ", n);
    }
    printf(" ) ");
}

void main()
{
    f(3);
    printf("\n");
}