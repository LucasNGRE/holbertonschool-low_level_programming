#include "lists.h"
/**
 * print_list - Imprime tous les éléments d'une liste chaînée list_t
 * @h: Pointeur vers le premier élément de la liste
 *
 * Description : Cette fonction parcourt une liste chaînée et imprime les
 * valeurs de chaque élément. Si la valeur d'un élément est NULL,
 * elle affiche "(nil)".
 *
 * Return: Le nombre de nœuds dans la liste
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len,  h->str);
			count++;
		}
		else
		{
			printf("[0] (nil)\n");
			count++;
		}
		h = h->next;
	}
	return (count);
}
