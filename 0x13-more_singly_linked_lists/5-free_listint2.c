#include "lists.h"

/**
 * free_listint2 - Frees a list of integers
 * @head: Address of the pointer to the first node
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}