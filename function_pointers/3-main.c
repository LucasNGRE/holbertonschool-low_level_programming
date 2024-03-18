#include "calc.h"
#include "function_poiters.h"
/**
 * main - Entry point of the program.
 *
 * This file should contain only the main function.
 *
 * Restrictions:
 * - You are not allowed to code any other function than main in this file.
 * - You are not allowed to directly call op_add, op_sub, op_mul, op_div, or op_mod
 *   from the main function.
 * - You have to use atoi to convert arguments to int.
 * - You are not allowed to use any kind of loop.
 * - You are allowed to use a maximum of 3 if statements.
 */
int main(int argc, char *argv[])
{
	int conv;
	int conv2;
	char *operator;       

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	conv = atoi(argv[1]);
	operator = argv[2];
	conv2 = atoi (argv[3]);
	if (operator != '+' && operator != '-' && operator != '*'
			&& operator != '/' && operator != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (operator == '/' || operator == '%' && conv2 == 0)
	{
		printf("Error\n");
		exit(100)
	}

	return (0)
