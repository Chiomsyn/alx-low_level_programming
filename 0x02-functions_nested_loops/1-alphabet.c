#include "main.h"

/**
 * print_alphabet -  Prints the alphabet a-z
 *
 * Return: Return void
 *
 */
void print_alphabet(void)
{
	char data = 'a';

	while (data <= 'z')
	{
		_putchar(data);
		data++;
	}
	_putchar('\n');
}
