#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)

	{
		if (l == 'q')
		{
			continue;
		}
		if (l == 'e')
		{
			continue;
		}
	putchar (l);
	}
	putchar ('\n');
	return (0);
}
