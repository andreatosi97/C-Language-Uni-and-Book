#include <stdio.h>

void main()
{
    int rains, have_umbrella;
    /* PRE: rains and have_umbrella are in {0,1} corresponding to {False, True} */

    printf("Does it rain? (1 = yes, 0 = no): ");
    scanf("%d", &rains);
    printf("Do you have an umbrella? (1 = yes, 0 = no): ");
    scanf("%d", &have_umbrella);


    if (!rains || have_umbrella)
        printf("Go out");
    else
        printf("Stay home");
}
/* POST: if it doesn't rain or if you have the umbrella it prints "Go out",
    otherwise it prints "Stay home" */