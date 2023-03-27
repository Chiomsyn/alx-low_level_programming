#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count = count + 2)
		_putchar(str[count]);
	_putchar('\n');
}
