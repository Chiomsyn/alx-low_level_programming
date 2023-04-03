#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes of the memory area.
 * Return: the pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}

	return (s);
}
