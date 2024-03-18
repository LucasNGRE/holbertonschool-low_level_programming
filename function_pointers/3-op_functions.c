#include "calc.h"
#include "function_pointers.h"

int op_add(int a, int b)
/**
 * op_add - Returns the sum of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * This function returns the sum of the two integers a and b.
 */
{
	return (a+b);
}
int op_sub(int a, int b)
/**
 * op_sub - Returns the difference of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * This function returns the difference between the two integers a and b.
 */
{
	return (a-b);
}
int op_mul(int a, int b)
/**
 * op_mul - Returns the product of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * This function returns the product of the two integers a and b.
 */
{
	return (a*b);
}
int op_div(int a, int b)
/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer (divisor).
 *
 * This function returns the remainder of dividing the integer a by b.
 */
{
	return (a/b);
}
int op_mod(int a, int b)
{
	return (a%b);
}
