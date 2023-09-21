#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 * Return: On success, returns the character written. On error, returns -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_number - Print numbers as characters
 * @n: The integer to be printed
 */
void print_number(int n)
{
    unsigned int n1;

    n1 = (n < 0) ? -n : n;

    if (n < 0)
        _putchar('-');

    if (n1 / 10 != 0)
        print_number(n1 / 10);

    _putchar((n1 % 10) + '0');
}
