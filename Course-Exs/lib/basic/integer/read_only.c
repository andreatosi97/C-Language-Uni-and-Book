#include "../integer.h"

int power(int base, int exponent)
{
    /* PRE: base positive integer, exponent non-neg integer */

    if (base == 1)
        return 1;

    int pow = 1;
    for (int i = 1; i <= exponent; i++)
    {
        pow *= base;
    }
    return pow;
}
/* POST: return base^exponent */

int isPerfect(int n)
{
    /* PRE: n is a positive integer*/

    int sum = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}
/* POST: return if n is perfect or not */

int oddsSum(int n)
{
    /* PRE: n is a positive integer */

    int sum = 1;
    for (int i = 3; i <= n; i = i + 2)
    {
        sum += i;
    }
    return sum;
}
/* POST: return the sum of the odd numbers less than n*/