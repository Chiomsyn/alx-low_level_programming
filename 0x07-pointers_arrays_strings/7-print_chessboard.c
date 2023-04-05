#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, ele = 0;

	i = 0;
	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			ele = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - ele]);
		i++;
	}
	_putchar('\n');
}
