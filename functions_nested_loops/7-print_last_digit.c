#include "main.h"
#include "ctype.h"
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 * @i: character to be verified
 * Return:0
 */
int print_last_digit(int i)
{
	i = abs(i) % 10;
	{
	_putchar('0' + i);
	}
	return (i);
}
