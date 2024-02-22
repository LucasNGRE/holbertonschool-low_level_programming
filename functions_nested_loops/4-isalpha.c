#include "main.h"
#include "ctype.h"
/**
 * _isalpha - Entry point
 * @c: character to be verified
 * Return:0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
