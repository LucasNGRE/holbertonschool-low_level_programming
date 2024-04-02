#include "lists.h"
/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une
 * liste chaînée list_t.
 * @head: Pointeur vers le pointeur du début de la liste.
 * @str: Chaîne de caractères à copier dans le nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = 0;
	while (str[new_node->len] != '\0')
		new_node->len++;

	current = *head;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
