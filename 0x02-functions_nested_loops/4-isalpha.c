#include "main.h"

/**
 * _isalpha - identifies alphabets
 * @c: The character to check
 *
 * Return: Returns 1 if true and 0 if false
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 12)2 || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
