#include <stdio.h>

void main()
{
    int farenheit;
    /* PRE: farenheit is integer */

    printf("We want to transform in Celsius the following degree in Farenheit: ");
    scanf("%d", &farenheit);

    float celsius;

    celsius = (farenheit - 32) * 5 / 9.0;

    printf("%d Farenheit degrees correspond to %f Celsius degree", farenheit, celsius);
}
/* POST: celius is the temperature in the Celsius scale corresponding to
    the input farenheit degree */