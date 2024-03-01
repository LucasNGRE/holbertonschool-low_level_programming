#include "main.h"
/**
 * reverse_array - Entry point
 * @a: character to be verified
 * @n: character to be verified
 * Return:0
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		char var = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = var;
	}
}
