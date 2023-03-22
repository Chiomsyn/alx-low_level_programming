#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 *
 */
void times_table(void)
{
	int w, x, mul;

	for (w = 0; w < 10; w++)
	{
		_putchar(48);
		for (x = 1; x < 10; x++)
		{
			mul = x + w;
			_putchar(44);
			_putchar(32);
			if (mul < 10)
			{
				_putchar(32);
				_putchar(mul + 48);
			}
			else
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
		}
		_putchar(10);
	}
}
