#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	c = 0;
	while (c < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
			c++;
	}
}
