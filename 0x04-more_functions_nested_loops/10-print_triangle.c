#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the square
 *
 * Return: Void
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			k = size - i;
			for (j = 0; j < size; j++)
			{
				if (j < k)
				{
					putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
