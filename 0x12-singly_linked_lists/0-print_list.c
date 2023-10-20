#include "lists.h"

/**
 * _strlen - Returns the length of the string
 * @s: The length of the string to check
 *
 * Return: Integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - Prints linked lists
 * @h: Pointer to the first node
 *
 * Return: Size of the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
