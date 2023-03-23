#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Return: Returns 1 if true and 0 if false
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
