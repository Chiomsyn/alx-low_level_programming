#include "main.h"
/**
 * _memcpy - copies bytes from memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*(dest + count) =  *(src + count);
	}
	return (dest);
}
