#include <stdio.h>
#include <basic/string.h>

void perm(char *s, char *s_start);

void main()
{
    char s[] = "hello";

    perm(s, s);
}

void perm(char *s, char *s_start)
{
    if (*s == '\0')
        printf("%s\n", s_start);

    for (int i = 0; i < string_len(s); i++)
    {
        swap(s, s + i);
        perm(s + 1, s_start);
        swap(s + i, s);
    }
}
