#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Créer une fonction qui concatène deux chaines de caractères .
 * @s1: La chaine de caractère.
 * @s2: La chaine de caractère.
 * Retourne: Un pointeur sur la chaine dupliquée.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *result;
	int length1 = 0;
	int length2 = 0;

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}
	result = malloc((length1 + length2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		result[i + j] = s2[j];
	}
	result[length1 + length2] = '\0';
	return (result);
}
