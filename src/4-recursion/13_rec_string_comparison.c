#include <stdio.h>

int compare_strings(char *s1, char *s2);
void test_compare_strings();

void main()
{
    test_compare_strings();

    char a[50];
    char b[50];

    scanf("%s\n%s", a, b);
    printf("%s %c %s\n", a, 61 + compare_strings(a, b), b); // numerical values of char: 60(<), 61(=), 62(>)
}

int compare_strings(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return 0;
    else if (*s1 == '\0' || *s1 < *s2)
        return -1;
    else if (*s2 == '\0' || *s1 > *s2)
        return 1;

    return compare_strings(s1+1, s2+1);
}

void test_compare_strings()
{
    printf("output compare_strings(ciao, dado):\n");
    printf("%s %c %s\n", "ciao", 61 + compare_strings("ciao", "dado"), "dado");
    printf("Expected output:\nciao < dado\n\n");

    printf("output compare_strings(ciao, cia):\n");
    printf("%s %c %s\n", "ciao", 61 + compare_strings("ciao", "cia"), "cia");
    printf("Expected output:\nciao > cia\n\n");

    printf("output compare_strings(test, test):\n");
    printf("%s %c %s\n", "test", 61 + compare_strings("test", "test"), "test");
    printf("Expected output:\ntest = test\n\n");

    printf("output compare_strings(a, b):\n");
    printf("%s %c %s\n", "a", 61 + compare_strings("a", "b"), "b");
    printf("Expected output:\na < b\n\n");

    printf("output compare_strings(da, ciao):\n");
    printf("%s %c %s\n", "da", 61 + compare_strings("da", "ciao"), "ciao");
    printf("Expected output:\nda > ciao\n\n");
}