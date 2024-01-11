#include "../array.h"

int compare_arr(int *X, int *Y, int dim)
{
    /* PRE: array/array casted to ptr */
    for (int i = 0; i < dim; i++)
    {
        if (X[i] != Y[i])
            return 0;
    }
    return 1;
}
/* POST: return 1 if they are equal element by element, otherwise return 0 */

int searchInArray(int arr[], int dim, int n)
{
    /* PRE: arr is a non-empty array of integers and n is an integer */

    int i = 0;
    while (i < dim && arr[i] != n)
        i++;

    return i != dim;
}
/* POST: return 1 is n is in the array, 0 otherwise */

void arr_frequencies(int *A, int dim, int *freq)
{
    for (int i = 0; i < dim; i++)
        freq[i] = 0;

    int count;
    for (int i = 0; i < dim; i++)
    {
        count = 1;
        if (freq[i] != -1)
        {
            for (int j = i + 1; j < dim; j++)
            {
                if (A[j] == A[i])
                {
                    count += 1;
                    freq[j] = -1;
                }
            }
            freq[i] = count;
        }
    }
}

void invert_arr(int *A, int dim)
{
    /* PRE: takes an array and its dimension (an integer) */

    int tmp;
    for (int i = 0; i < dim / 2; i++)
    {
        tmp = A[i];
        A[i] = A[dim - 1 - i];
        A[dim - 1 - i] = tmp;
    }
}
/* POST: invert the order (in a positional sense) of its values */

void filter(int *A, int *dim, int f)
{
    /* PRE: take an array, a pointer to its dim and an integer f */

    int i = 0;
    int original_dim = *dim;
    for (int *ptr = A; ptr - A < original_dim; ptr++)
    {
        if (*ptr != f)
        {
            A[i] = *ptr;
            i += 1;
        }
        else
            *dim -= 1;
    }
}
/* POST: change the array ereasing the element f from it (multiple times if it's
present at more indeces) */

void add_elem(int *arr, int dim, int x, int pos)
{
    /* PRE: takes an array, its dim, an integer x and a position pos */

    if (pos < dim)
        for (int i = dim - 1; i > pos; i--)
        {
            *(arr + i) = *(arr + i - 1);
        }

    *(arr + pos) = x;
}
/* POST: modifies the array in such a way that it adds the element x at index pos */

int compare_arr_double(double *X, double *Y, int dim, double toll)
{
    for (int i = 0; i < dim; i += 1)
    {
        if (X[i] - Y[i] > toll || X[i] - Y[i] < -toll)
        {
            return 0;
        }
    }
    return 1;
}