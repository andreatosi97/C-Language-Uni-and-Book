#include <stdio.h>
#include <basic/integer.h>

void main()
{
    int b, e;

    printf("The base of the power is: ");
    scanf("%d", &b);
    printf("The exponent of the power is: ");
    scanf("%d", &e);

    int res = power(b, e);
    printf("%d", res);
}