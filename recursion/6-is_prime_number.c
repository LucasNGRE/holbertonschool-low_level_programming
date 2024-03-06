#include "main.h"
/**
 * verif_prime - Affiche une chaîne
 * de caractères suivie d'un saut de ligne.
 * @n: La chaîne de caractères à afficher.
 * @i: La chaine de caractères à afficher.
 * Return: The length of the string
 */
int verif_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (verif_prime(n, i + 1));
}

/**
 * is_prime_number - Affiche une chaîne
 * de caractères suivie d'un saut de ligne.
 * @n: La chaîne de caractères à afficher.
 * Return: The length of the string
 */
int is_prime_number(int n)
{
	return (verif_prime(n, 2));
}

