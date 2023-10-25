#include "lists.h"

/**
 * pop_listint - Pops head node of the list
 * @head: Address of pointer to the first node
 *
 * Return: Value of the popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
