#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphbet in lower case 10 times
 *
 * Return: Return void
 *
 */

void print_alphabet_x10(void)
{
	char data = 'a';
	int count = 0;

	while (count < 10)
	{
		data = 'a';

		while (data <= 'z')
		{
			_putchar(data);
			data++;
		}
		_putchar('\n');
		count++;
	}
}
