#include <stdio.h>

#define GR printf(">")
#define LS printf("<")

void main()
{
    int year1, month1, day1;
    int year2, month2, day2;
    /* PRE: years, month, days are positve integers in reasonable interval (no day = 45) */

    printf("We want to check if the date (day/month/year format): ");
    scanf("%d/%d/%d", &day1, &month1, &year1);
    printf("is successive, equal or previous to the date: ");
    scanf("%d/%d/%d", &day2, &month2, &year2);   

    printf("%d/%d/%d ", day1, month1, year1);
    if (year1 < year2)
        LS;
    else if (year1 > year2)
        GR;
    else {
        if (month1 < month2)
            LS;
        else if (month1 > month2)
            GR;
        else {
            if (day1 < day2)
                LS;
            else if (day1 > day2)
                GR;
            else
                printf("=");
        }
    }
    printf(" %d/%d/%d\n", day2, month2, year2);
}
/* POST: prints if the first date is successive, previous or the same */