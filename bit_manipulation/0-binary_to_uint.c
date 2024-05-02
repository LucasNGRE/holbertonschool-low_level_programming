#include "main.h"
/**
 * binary_to_uint - Convertit un nombre binaire en unsigned int.
 * @b: Chaîne de caractères binaire.
 *
 * Description : Convertit une chaîne de caractères binaire en un nombre
 * non signé. Si la chaîne de caractères contient un caractère différent
 * de '0' ou '1', ou si b est NULL, la fonction renvoie 0.
 *
 * Return: Le nombre converti, ou 0 si une erreur survient.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
		i++;
	}
	return (result);
}
