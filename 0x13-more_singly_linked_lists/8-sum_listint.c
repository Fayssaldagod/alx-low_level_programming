#include "lists.h"

/**
 * sum_listint - Returns sum of all the data
 * @head: Pointer to the first node
 *
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
