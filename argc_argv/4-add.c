#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int somme = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg_actuel = argv[i];

		while (*arg_actuel != '\0')
		{
			if (!isdigit(*arg_actuel))
			{
				printf("Error\n");
				return (1);
			}
			arg_actuel++;
		}
		num = atoi(argv[i]);
		somme += num;
	}
	printf("%d\n", somme);
	return (0);
}
