#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - Entry point of the program.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to strings containing the arguments.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(int argc, char *argv[])
{
	int conv1;
	int conv2;
	char *operator;
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	conv1 = atoi(argv[1]);
	operator = argv[2];
	conv2 = atoi(argv[3]);

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && conv2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operation(conv1, conv2);
	printf("%d\n", result);

	return (0);
}
