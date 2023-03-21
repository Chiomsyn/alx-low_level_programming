#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The character to check
 *
 * Return: Returns the absolute value
 *
 */
int  _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		int cal = n * (-1);
		
		return (cal);
	}
}
