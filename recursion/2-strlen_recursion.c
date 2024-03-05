#include "main.h"
/**
 * _strlen_recursion - Affiche une chaîne
 * de caractères suivie d'un saut de ligne.
 * @s: La chaîne de caractères à afficher.
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
