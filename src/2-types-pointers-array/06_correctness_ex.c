#include <stdio.h>

int greatest_of_three(int a, int b, int c);

int greatest_of_three(int a, int b, int c)
{
    /* PRE: three integers */

    if (a >= b)
    {
        if (a >= c)
            return a; // a >= b && a >= c then a = max -> correct
        else
            return b; // a >= b && a < c then c = max -> wrong
    }
    else if (b >= c)
        return b; // a < b && b >= c then b = max -> correct
    else
        return c; // a < b && b < c then c = max -> correct
}
/* POST: prints the greatest one */

int main()
{
    int x, y, z;
    printf("The greatest number between (input three number divided by spaces): ");
    scanf("%d %d %d", &x, &y, &z);

    int greatest = greatest_of_three(x, y, z);
    printf("is %d\n", greatest);
}