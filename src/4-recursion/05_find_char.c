#include <stdio.h>

/* PRE: s is a pointer to string
POST: return 1 if c is in s 0 otherwise */
int find_char(char c, char *s)
{
    return (*s == '\0') ? 0 : (*s == c) || (find_char(c, s + 1));
}

void main()
{
    char *s = "hello", c = 'l';

    char *ans = (find_char(c, s)) ? "Yes" : "No";
    printf("%c in %s ? %s\n", c, s, ans);
}