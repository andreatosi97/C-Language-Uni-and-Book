#include <stdio.h>
#include <assert.h>

/*
PRE: field is a integers matrix of dimension dim_x*dim_y, pos_x and pos_y are the starting row and column.
    Possible moves: 1) one cell above, 2) one cell right
POST: returns 1 if there is a path form (pos_x, pos_y) to row 0, avoiding cells containing 0.
    Returns 0 if there isn't a path or the starting postitions are out of bounds.
*/

int exist_path(int dim_x, int dim_y, int campo[dim_x][dim_y], int pos_x, int pos_y);
void test_mined_path(int dim_x, int dim_y, int campo[dim_x][dim_y]);

int main(void)
{
    int dim_x = 5, dim_y = 5;
    int campo[5][5] = {
        {0, 0, 0, 1, 0},
        {0, 1, 0, 1, 1},
        {1, 0, 1, 1, 0},
        {1, 0, 1, 1, 1},
        {1, 0, 1, 0, 0}};

    test_mined_path(5, 5, campo);

    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    if (exist_path(dim_x, dim_y, campo, x, y) == 1)
    {
        printf("There is a path from (%d,%d) to row 0\n", x, y);
    }
    else
    {
        printf("There isn't a path from (%d,%d) to row 0\n", x, y);
    }
}

int exist_path(int dim_x, int dim_y, int campo[dim_x][dim_y], int pos_x, int pos_y)
{
    if (pos_x < 0 || pos_x >= dim_x || pos_y < 0 || pos_y >= dim_y) // out of bounds
        return 0;
    if (!campo[pos_x][pos_y]) // on a mine
        return 0;
    if (pos_x == 0) // arrived and not on a mine since after the condition campo[pos_x][pos_y]!=0
        return 1;

    return (
        exist_path(dim_x, dim_y, campo, pos_x - 1, pos_y) ||
        exist_path(dim_x, dim_y, campo, pos_x, pos_y + 1));
    // swapping the two calls in the OR changes the path followed but keeps it correct
}

void test_mined_path(int dim_x, int dim_y, int campo[dim_x][dim_y])
{
    assert(exist_path(dim_x, dim_y, campo, 4, 2) == 1);
    assert(exist_path(dim_x, dim_y, campo, 4, 0) == 0);
    assert(exist_path(dim_x, dim_y, campo, 3, 4) == 0);
    assert(exist_path(dim_x, dim_y, campo, 3, 2) == 1);
    assert(exist_path(dim_x, dim_y, campo, 1, 5) == 0);
    assert(exist_path(dim_x, dim_y, campo, 5, 1) == 0);
    assert(exist_path(dim_x, dim_y, campo, -1, 4) == 0);
    assert(exist_path(dim_x, dim_y, campo, 4, -1) == 0);
    printf("test_mined_path: all test passed successfully\n");
}