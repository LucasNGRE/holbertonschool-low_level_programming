#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 *
 * This function frees each node of a doubly linked list starting from the
 * given head node. It iterates through the list and deallocates the memory
 * allocated for each node, including the memory allocated for storing the
 * integer data and the node structure itself.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		next  = current->next;
		free(current);
		current = next;
	}
}
