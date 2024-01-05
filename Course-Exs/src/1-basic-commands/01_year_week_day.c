#include <stdio.h>

void main()
{
    int input_days;
    /* PRE: input_days >= 0 */

    printf("We want to divide in years, weeks and days the following number of days: ");
    scanf("%d", &input_days);

    int y, w, z;
    int remaining_days; // Remaning days after dividing input_days in years

    y = input_days / 365;
    remaining_days = input_days % 365;
    w = remaining_days / 7;
    z = remaining_days % 7;

    printf("%d days are %d years, %d weeks and %d days", input_days, y, w, z);
}
/* POST: y, w, d are the years, weeks and days corresponding to input_days */