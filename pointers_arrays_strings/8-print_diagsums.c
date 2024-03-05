#include "main.h"
#include "stdio.h"
/**
 * print_chessboard - Entry point
 * @a: character to be verified
 * Return:0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (i = 1; i <= size; i++)
	{
		sum2 += a[i * size - i];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}

