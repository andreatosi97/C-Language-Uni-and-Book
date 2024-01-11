#include <stdio.h>

/* This is a version of len(char *N) in the exercise 2.11 which uses the pointers
arithmetic */
void main()
{
    char *ptr = "Hello!";

    int i = 0;
    while (*ptr != '\0')
    {
        ptr++;
        i++;
    }

    printf("Length of \"%s\" is %d\n", ptr - i, i);
}