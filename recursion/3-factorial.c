#include "main.h"
/**
 * factorial - Affiche une chaîne
 * de caractères suivie d'un saut de ligne.
 * @n: La chaîne de caractères à afficher.
 * Return: The length of the string
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
