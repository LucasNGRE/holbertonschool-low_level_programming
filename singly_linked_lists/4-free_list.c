#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees each node of a list_t list,
 *              including the strings stored in the nodes.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	if (head == NULL)
		return;
	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
