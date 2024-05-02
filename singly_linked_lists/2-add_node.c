#include "lists.h"
/**
 * add_node - Ajoute un nouveau nœud au début d'une liste list_t.
 * @head: Un pointeur vers un pointeur vers le début de la liste list_t.
 * @str: La chaîne à ajouter comme contenu du nouveau nœud.
 *
 * Return: L'adresse du nouvel élément, ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

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

	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

