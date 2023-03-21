#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The character to check
 *
 * Return: Returns 1 if true and 0 if false
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
