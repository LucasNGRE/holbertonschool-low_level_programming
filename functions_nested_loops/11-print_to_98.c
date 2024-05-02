#include "main.h"
#include "ctype.h"
#include <stdlib.h>
#include "time.h"
#include "stdio.h"
/**
 * print_to_98 - Entry point
 * @n: character to be verified
 * Return:0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n = n + 1;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n = n - 1;
		}
	}
	printf("98\n");
}

