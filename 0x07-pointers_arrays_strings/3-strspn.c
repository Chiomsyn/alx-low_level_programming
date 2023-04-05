#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, check;

	i = j = 0;
	while (*(s + i) != '\0')
	{
		check = 1;
		for (; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				check = 0;
				break;
			}
		}
		if (check == 1)
			break;
		i++;
	}
	return (i);
}
