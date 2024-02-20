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

	for (l = 122; l >= 97; l--)
	{
	putchar(l);
	}
	putchar('\n');
	return (0);
}
