#include "main.h"
/**
 * print_binary - Imprime la représentation binaire d'un nombre.
 * @n: Le nombre à imprimer en binaire.
 *
 * Description: Cette fonction imprime la représentation binaire
 * d'un nombre sans utiliser d'opérateurs de division ou de modulo.
 * Elle utilise les opérateurs de décalage binaire.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
