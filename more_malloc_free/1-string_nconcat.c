#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Fonction qui qui concatène deux strings.
 * @s1: Première chaine.
 * @s2: Deuxième chaine.
 * @n: Nombre maximum d'octet de s2 a concaténer.
 * Return: Un pointeur vers la mémoire allouée.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i;
	unsigned int j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	result = malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n ; j++)
		result[len1 + j] = s2[j];
	result[len1 + n] = '\0';
	return (result);
}
