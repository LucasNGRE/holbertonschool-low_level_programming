#include "stdio.h"
#include "main.h"
/**
 * print_array - Entry point
 * @a: character to be verified
 * @n: character to be verified
 * Return:0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
		printf(",");
		printf(" ");
		printf("%d", a[i]);
		}
	}
	printf("\n");
}
