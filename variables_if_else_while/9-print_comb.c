#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
	{
	putchar(l);
	if (l != '9')
	{
	putchar (',');
	putchar (' ');
	}
	}

	putchar('\n');
	return (0);
}
