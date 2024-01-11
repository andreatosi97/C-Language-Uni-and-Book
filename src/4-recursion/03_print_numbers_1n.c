#include <stdio.h>

void increasingPrint(int n)
{
    if (n == 0)
        return;
    else
    {
        increasingPrint(n-1);
        printf("%d\n", n);
    }
}

void decreasingPrint(int n)
{
    if (n > 0) // equivalent to the previous one, since it does nothing when n == 0
    {
        printf("%d\n", n);
        decreasingPrint(n-1);
    }
}

void main()
{
    int n;
    printf("Print numbers from 1 to: ");
    scanf("%d", &n);
    increasingPrint(n);

    printf("Print numbers up to 1 starting from: ");
    scanf("%d", &n);
    decreasingPrint(n);
}