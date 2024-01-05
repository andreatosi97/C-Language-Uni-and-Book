#include <stdio.h>

void main()
{
    int height;
    /* PRE: height is a non-neg integer */

    printf("We want to display a triangle of height: ");
    scanf("%d", &height);


    for (int row = 1; row <= height; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
/* POST: print a triangle of hashtag tall as height */