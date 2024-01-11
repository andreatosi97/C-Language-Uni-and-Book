#include <stdio.h>

/* PRE: base and exponent >=0
POST: return base^exponent */
int rec_power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * rec_power(base, exponent - 1);
}

/* PRE: n>=0
POST: return 1+2+3+...+n */
int sum1n(int n)
{
    return (n == 0) ? 0 : n + sum1n(n - 1);
}

void main()
{
    int n;
    printf("We want to sum the number from 1 to: ");
    scanf("%d", &n);

    printf("The sum of the integer from 1 to %d is %d\n", n, sum1n(n));

    int base, exponent;
    printf("Enter the base and the exponent of the power: ");
    scanf("%d", &base);
    scanf("%d", &exponent);

    printf("%d^%d = %d\n", base, exponent, rec_power(base, exponent));
}