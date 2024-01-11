#include <stdio.h>
#include <limits.h>

#define STARTING_YEAR 1970
#define TOTAL_DAYS UINT_MAX / (60 * 60 * 24)

int main()
{
    unsigned int year, month, day;
    /* PRE: */

    unsigned int remaining_days; // Remaning day after dividing input_days in years

    year = STARTING_YEAR + TOTAL_DAYS / 360;
    remaining_days = TOTAL_DAYS % 360;
    month = remaining_days / 30 + 1; // only the division return 0<=x<=11, then +1
    day = remaining_days % 30 + 1;

    printf("%d/%d/%d\n", day, month, year);
}
/* POST: prints, with a day/month/year format, the highest time representable
in the architecture as an unsigned intger,*/