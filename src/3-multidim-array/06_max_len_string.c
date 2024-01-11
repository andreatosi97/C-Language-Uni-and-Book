#include <stdio.h>
#include <assert.h>

char *max_len_string(char s[][256], int strings_num)
{
    if (strings_num <= 0)
        return NULL;

    int max_len = string_len(s[0]), index = 0, tmp;

    for (int i = 1; i < strings_num; i++)
    {
        tmp = string_len(s[i]);
        if (tmp > max_len)
        {
            index = i;
            max_len = tmp;
        }
    }

    return s[index];
}

void test_max_len_string()
{
    char s[5][256] = {{"ciao"}, {"ciaociao"}, {""}, {"hello"}, {"c"}};
    assert(max_len_string(s, 5) == s[1]);
    printf("max_len_string test passed\n");
}

void main()
{
    // test_max_len_string();

    int strings_num;
    printf("How many strings do you want to check? ");
    scanf("%d", &strings_num);

    char strings[strings_num][256];
    for (int i = 0; i < strings_num; i++)
    {
        scanf("%255s", strings[i]);
    }

    char *s_max = max_len_string(strings, strings_num);
    printf("The longest string is: %s\n", (s_max == NULL) ? "Empty array" : s_max);
}
