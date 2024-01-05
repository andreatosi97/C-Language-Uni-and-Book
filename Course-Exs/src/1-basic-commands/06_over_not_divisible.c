#include <stdio.h>

void main()
{
    int threshold;
    /* PRE: threshold is an integer */

    printf("The threshold is: ");
    scanf("%d", &threshold);

    int i = threshold + 1;
    while (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
    /* Not (non-divisible for all),
    equivalent divisible for at least one:
    !(i % 2 != 0 && i % 3 != 0 && i % 5 != 0) */
    {
        i++;
    }
    printf("The lowest number above threshold not divisible ");
    printf("by 2, 3 or 5 is %d\n", i);
}
/* POST: prints the lowest over threshold such that is not divisible
    for 2, 3 or 5 */