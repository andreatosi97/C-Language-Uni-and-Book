#include <stdio.h>

void main()
{
    int height;
    /* PRE: height is a postive integer */  

    printf("We want to print an upside-down traingle of height: ");
    scanf("%d", &height);

    for (int row = height; row >= 1; row--)
    {
        for (int spaces = height - row; spaces >= 1; spaces--)
        {
            printf(" ");
        }
        for (int c = row * 2 - 1; c >= 1; c--)
        {
            printf("#");
        }
        printf("\n");
    }
}
/* POST: prints a triangle of # uspide down */