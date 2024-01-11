#include <stdio.h>
#include <assert.h>

int pascal(int x, int y);
void test_pascal();

int main(void)
{
    test_pascal();

    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", pascal(x, y));
}

int pascal(int x, int y)
{
    if (x < 0 || y < 0 || y > x)
        return 0;
    else if (y == 0 || x == y)
        return 1;

    return pascal(x - 1, y) + pascal(x - 1, y - 1);
}

void test_pascal()
{
    assert(pascal(4, 2) == 6);
    assert(pascal(0, 2) == 0);
    assert(pascal(-1, 2) == 0);
    assert(pascal(0, 0) == 1);
    assert(pascal(3, 3) == 1);
    assert(pascal(4, 0) == 1);
    assert(pascal(7, 4) == 35);
    printf("All test passed\n");
}
