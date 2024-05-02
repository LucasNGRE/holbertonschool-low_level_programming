#include "lists.h"
/**
 * sum_dlistint - Computes the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: The sum of all the data (n) of the linked list,
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int result = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		result += current->n;
		current = current->next;
	}
	return (result);
}
