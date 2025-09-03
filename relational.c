#include <stdio.h>

/**
 * main - Demonstrates relational operators in C
 *
 * Return: Always 0
 */
int main(void)
{
    int p = 7, q = 10;

    printf("p = %d, q = %d\n", p, q);

    printf("p == q : %d\n", p == q);
    printf("p != q : %d\n", p != q);
    printf("p > q  : %d\n", p > q);
    printf("p < q  : %d\n", p < q);
    printf("p >= q : %d\n", p >= q);
    printf("p <= q : %d\n", p <= q);

    return 0;
}
