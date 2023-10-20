#include "lists.h"

/**
 * free_list - Frees all the nodes of the list
 * @head: Pointer to the head node
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
