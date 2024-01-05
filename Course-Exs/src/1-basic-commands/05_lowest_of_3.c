#include <stdio.h>

int lowest_of_three(int x, int y, int z);

int lowest_of_three(int x, int y, int z)
{
    /* PRE: three integers */

    if (x >= y)
    {
        if (y >= z)
            return z;
        else
            return y;
    }
    else
    {
        if (x >= z)
            return z;
        else
            return x;
    }
}
/* POST: prints the lowest one */

void main()
{
    int x, y, z;

    printf("The lowest number between (input three number divided by spaces): ");
    scanf("%d %d %d", &x, &y, &z);

    int lowest = lowest_of_three(x, y, z);
    printf("is %d\n", lowest);
}