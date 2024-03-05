#include "main.h"
/**
 * _pow_recursion - Affiche une chaîne
 * de caractères suivie d'un saut de ligne.
 * @x: La chaîne de caractères à afficher.
 * @y: La chaîne de caractères à afficher
 * Return: The length of the string
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
