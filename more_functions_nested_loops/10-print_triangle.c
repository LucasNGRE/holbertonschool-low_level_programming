#include "main.h"
/**
 * print_triangle - Entry point
 * @size: character to be verified
 * Return:0
 */
void print_triangle(int size)
{
	int i;
	int j;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (n = 1; n <= i; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

