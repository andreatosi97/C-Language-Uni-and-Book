#include <stdio.h>
#include <basic/string.h>

int main()
{
    // // for fixed input
    // char S1[50] = "laboratorio", S2[20] = " programmazione";

    // for input inserted by user
    int dim1, dim2;
    scanf("%d", &dim1);
    scanf("%d", &dim2);
    char S1[dim1], S2[dim2];
    scanf("%s", S1);
    scanf("%s", S2);
    /* PRE: s1 and s2 are two strings */

    concatenate_strings(S1, S2);

    printf("Concatenatd string: %s\n", S1);
    /* the exercise ask to print S1, so we have to concatenate modifying it and
    not creating another string containing the two */

    return 0;
}
/* POST: prints the two strings concatenated */