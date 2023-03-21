#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @c: The character to check
 *
 * Return: Returns the value of the last digit
 *
 */
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
	{
		_putchar(-last_digit + 48);
		return (-last_digit);
	}
	else
	{
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
