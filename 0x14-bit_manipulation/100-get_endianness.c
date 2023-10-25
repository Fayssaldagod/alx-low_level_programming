#include "main.h"

/**
 * get_endianness - Returns the endianness of the system
 *
 * Return: 0 if the endian is big, 1 if its small
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
