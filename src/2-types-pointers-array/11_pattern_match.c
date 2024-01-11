#include <stdio.h>
#include <basic/string.h>


int main()
{
    // char N[] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'a', 'z', 'i', 'o', 'n', 'e', '\0'};
    // char T[] = {'g', 'r', 'a', '\0'};

    char N[256];
    char T[256];
    printf("Enter 2 strings to check if there's a match: ");
    scanf("%255s", N);
    scanf("%255s", T);
    /* PRE: two strings */

    int N_len = string_len(N), T_len = string_len(T);

    int match = 0;
    int i = 0;
    for (i; i < N_len - T_len + 1 && !match; i++)
    {
        match = string_match(N, T, N_len, T_len);
    }

    if (match)
        printf("Match from position %d", i - 1);
    else
        printf("Match not found");
}
/* POST: print if the second string is contained or not in the first one. If
contained, it also print where */