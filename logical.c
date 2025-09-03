#include <stdio.h>

/**
 * main - Demonstrates logical operators in C
 *
 * Return: Always 0
 */
int main(void)
{
    int m = 5, n = 10;

    printf("m = %d, n = %d\n", m, n);

    printf("(m > 0 && n > 0) : %d\n", (m > 0 && n > 0));
    printf("(m > 0 || n < 0) : %d\n", (m > 0 || n < 0));
    printf("!(m == 5)        : %d\n", !(m == 5));

    return 0;
}
