#include <stdio.h>

int rec_string_len(char *s)
{
    return (*s == '\0') ? 0 : 1 + rec_string_len(s + 1);
}

void main()
{
    char s[100]; // 100 is the maximum length possible but can be less
    printf("We want to compute the length of the string: ");
    scanf("%s", s);
    int length_s;

    length_s = rec_string_len(s);

    printf("%d\n", length_s);
}
