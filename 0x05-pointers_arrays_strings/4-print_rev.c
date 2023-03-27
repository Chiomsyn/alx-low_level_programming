#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
