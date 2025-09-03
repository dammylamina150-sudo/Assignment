#include <stdio.h>

/**
 * main - Demonstrates increment and decrement operators
 *
 * Return: Always 0
 */
int main(void)
{
    int a = 5;

    printf("Initial value of a: %d\n", a);

    // Pre-increment
    printf("Result of ++a: %d\n", ++a);

    // Post-increment
    printf("Result of a++: %d\n", a++);
    printf("Value of a after a++: %d\n", a);

    // Pre-decrement
    printf("Result of --a: %d\n", --a);

    // Post-decrement
    printf("Result of a--: %d\n", a--);
    printf("Value of a after a--: %d\n", a);

    return 0;
}
