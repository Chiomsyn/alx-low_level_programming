#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: Returns 1 if true and 0 if false
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
