#include <stdio.h>

void main()
{
    int n = 3;
    /* PRE: n positive integer */ 

    printf("We want to print the firs n powers of 2, where n = ");
    scanf("%d", &n);

    int power = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", power);
        power *= 2;
    }
    printf("\b\b \n");
}
/* POST: prints the first n powers of 2 */