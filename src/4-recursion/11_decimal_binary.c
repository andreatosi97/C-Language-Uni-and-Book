#include <stdio.h>
#include <assert.h>

void convert_in_binary(int n); // the exercise ask that it prints (not return) the result
void rec_convert_in_binary(int n);
void test_convert_in_binary();

int main()
{
    test_convert_in_binary();

    int n;
    scanf("%d", &n);
    convert_in_binary(n);
}

void convert_in_binary(int n)
{
    if (n == 0)
        printf("0");
    else
        rec_convert_in_binary(n);
}

void rec_convert_in_binary(int n)
{
    if (n > 0)
    {
        rec_convert_in_binary(n / 2);
        printf("%d", n % 2);
    }
}

void test_convert_in_binary()
{
    printf("Output convert_in_binary(5):\n");
    convert_in_binary(5);
    printf("\nExpected output:\n101\n\n");

    printf("Output convert_in_binary(0):\n");
    convert_in_binary(0);
    printf("\nExpected output:\n0\n\n");

    printf("Output convert_in_binary(1):\n");
    convert_in_binary(1);
    printf("\nExpected output:\n1\n\n");

    printf("Output convert_in_binary(8):\n");
    convert_in_binary(8);
    printf("\nExpected output:\n1000\n\n");

    printf("Output convert_in_binary(109):\n");
    convert_in_binary(109);
    printf("\nExpected output:\n1101101\n\n");
}