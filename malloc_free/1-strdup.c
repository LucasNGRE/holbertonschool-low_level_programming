#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * taille - Crée une fonction pour determiner la taille.
 * @str: La chaine.
 *
 * Retourne: La taille.
 */
int taille(char *str)
{
	unsigned int size = 0;

	while (*str != '\0')
          {
                  size++;
                  str++;
          }
	return (size);
}
/**
 * _strdup - Crée un pointeur vers une noiuvelle chaine qui est une copie de str.
 * @str: La chaine a dupliquer.
 *
 * Retourne: Un pointeur sur la chaine dupliquée.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = taille(str);

	dup = malloc((size + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	dup[size] = '\0';
	return (dup);
}
