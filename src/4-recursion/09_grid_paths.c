#include <stdio.h>

int how_many_paths(int row, int col)
{
    if (row == 1 || col == 1)
        return 1;
    /* Or can use as base cases: (row == 1 && col == 1) and (row == 0 || col == 0) */

    return how_many_paths(row-1, col) + how_many_paths(row, col-1);
}

void main()
{
    // PRE: row and col are positive integer numbers
    int row, col;
    printf("The number of rows in the grid is: ");
    scanf("%d", &row);
    printf("The number of columns in the grid is: ");
    scanf("%d", &col);

    printf("The grid has %d paths", how_many_paths(row, col));
}
// POST: prints the number of possible paths in a grid where we can go down or right
// starting from the cell on top-left