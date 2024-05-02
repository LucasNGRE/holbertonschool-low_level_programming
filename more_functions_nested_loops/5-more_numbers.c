#include "main.h"
/**
 * more_numbers - Entry point
 * Return:0
 */
void more_numbers(void)
{
	int i;
	int c;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		c++;
	}
}
