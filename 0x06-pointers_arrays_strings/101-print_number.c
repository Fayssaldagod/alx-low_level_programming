#include "main.h"

/**
 * print_number - Print an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n; // Make n positive
    }

    if (n / 10 != 0)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}
