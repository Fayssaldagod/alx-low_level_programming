#include "lists.h"

/**
 * list_len - Determines the length of linked lists
 * @h: Pointer to the first node
 *
 * Return: Size of the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
