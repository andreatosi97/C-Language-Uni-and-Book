#include <stdio.h>
#include <basic/integer.h>

void main()
{
    int n;
    /* PRE: n pos integer */

    printf("Prints the sum of the odd numbers less than: ");
    scanf("%d", &n);

    int s = oddsSum(n);
    printf("It is %d\n", s);
}
/* POST: prints the sum of odd numbers less than n */