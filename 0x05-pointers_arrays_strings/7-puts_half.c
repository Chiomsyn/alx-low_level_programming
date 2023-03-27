#include "main.h"
/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (*(s + count) != '\0')
		count++;

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(s[i]);

	_putchar('\n');
}
