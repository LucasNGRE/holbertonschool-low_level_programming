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

	for (l = 48; l <= 56; l++)
	{
	putchar(l);
	putchar(44);
	putchar(32);
	}

	putchar(57);
	return (0);
}
