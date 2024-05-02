#include "main.h"
#include "ctype.h"
/**
 * _islower - Entry point
 * @c: character to be verified
 * Return:0
 */
int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
