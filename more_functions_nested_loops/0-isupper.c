#include "main.h"
#include <ctype.h>
/**
 * _isupper - Entry point
 * @c: character to be verified
 * Return:0
 */
int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
