#include <stdio.h>

#define NUM_COLS 3

void print0(int a[][NUM_COLS], int righe)
{
    for (int i = 0; i < righe; i++)
    {
        // Loop to print the single i-th row
        for (int j = 0; j < NUM_COLS; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print1(int **a, int righe, int colonne)
{
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            printf("%d ", a[i][j]); // = (a[i])[j]
            /* The argument is defined by: int *p[2] = {a[0], a[1]};
            so it's a vector. Then we take its i-th element a[i], which is a vector
            so I can chose its j-th elem */
        }
        printf("\n");
    }
    printf("\n");
}

void print2(int *a, int righe, int colonne)
{
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            printf("%d ", *(a + i * colonne + j));
        }
        printf("\n");
    }
    printf("\n");
}

int main(void)
{
    int a[][NUM_COLS] = {{1, 2, 3}, {4, 5, 6}};

    int *p[] = {a[0], a[1]};
    /* Vector of pointers at integer (init with ptrs to rows, which are the ptrs to
    first elements of rows). It's an array so casted as ptr when called, then it's
    a ptr to the first ptr (its first element) */

    int *pp = a[0]; // pointer at first element of first row of the matrix

    print0(a, 2);
    print1(p, 2, NUM_COLS);
    print2(pp, 2, NUM_COLS);
}