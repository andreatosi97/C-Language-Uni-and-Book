#include <stdio.h>
#include <basic/integer.h>

void main()
{
    int inf_lim, sup_lim;
    /* PRE: limits are positive integers */

    printf("The inferior limit is: ");
    scanf("%d", &inf_lim);
    printf("The superior limit is: ");
    scanf("%d", &sup_lim);

    while (inf_lim <= sup_lim)
    {
        if (isPerfect(inf_lim))
            printf("Numero %d perfetto\n", inf_lim);
        inf_lim += 1;
    }
}
/* POST: prints every perfect number between the limits. A perfect number is such
    that the sum of all its divisor but itself is equal the number itself */