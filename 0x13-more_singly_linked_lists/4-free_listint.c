#include "lists.h"

/**
 * free_listint - Frees a list of integers
 * @head: Pointer to the first node
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
