#include "3-calc.h"

/**
 * op_add - gets the sum of operands
 * @a: first operand
 * @b: second operand
 *
 * Return: returns the summed value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: returns the value from subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: returns the value from multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: returns the value from divisin
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of the two operands
 * @a: first operand
 * @b: second operand
 *
 * Return: returns the remainder from the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
