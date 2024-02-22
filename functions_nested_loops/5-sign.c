#include "main.h"
#include "ctype.h"
#include "math.h"
/**
 * print_sign - Entry point
 * @n: character to be verified
 * Return:0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
