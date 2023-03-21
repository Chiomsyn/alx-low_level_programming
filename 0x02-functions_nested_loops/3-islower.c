#include "main.h"

/**
 * _islower - identifies lower case alphabets
 * @c: The character to check
 *
 * Return: Returns 1 if true and 0 if false
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar((char)c);
		return (1);
	}
	else
	{
		return (0);
	}
}
