#include "main.h"
/**
 * racine - Affiche une chaîne
 * de caractères suivie d'un saut de ligne.
 * @n: La chaîne de caractères à afficher.
 * @n: La chaine de caractère à vérifier.
 * Return: The length of the string
 */
int racine(int n, int i)
{
	if (i * i == n)
		return i;
	if (i * i > n)
		return -1;
	return (racine(n, i + 1));
}
/**                                                                                                            * _sqrt_recursion - Affiche une chaîne
 * de caractères suivie d'un saut de ligne.
 * @n: La chaîne de caractères à afficher.
 * Return: The length of the string
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (racine(n, 1));
}
