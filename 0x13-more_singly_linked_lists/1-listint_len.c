#include "lists.h"

/**
 * listint_len - Prints linked lists
 * @h: Pointer to the first node
 *
 * Return: Size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
