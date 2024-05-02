#include "main.h"
#include "ctype.h"
#include <stdlib.h>
#include "time.h"
/**
 * times_table - Entry point
 * Return:0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j <= 9)
			{
				if (j == 0)
				{
					_putchar('0' + j);
				}
				if (j != 0)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (i * j));
				}
			}
			if (i * j > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (i * j / 10));
				_putchar('0' + (i * j % 10));
			}

		}
		_putchar('\n');
	}
}

