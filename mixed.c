#include <stdio.h>

/**
 * main - Demonstrates mixed operators in C
 *
 * Return: Always 0
 */
int main(void)
{
    int a = 6, b = 2, c = 3;

    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // Arithmetic with parentheses
    printf("(a + b) * c = %d\n", (a + b) * c);

    // Relational and logical together
    printf("(a > b) && (b < c) = %d\n", (a > b) && (b < c));

    // Increment/decrement mixed with arithmetic and comparison
    printf("(a++ + --b) > c = %d\n", (a++ + --b) > c);

    // Show values after operations
    printf("Values after operations: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
