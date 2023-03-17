#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
		}
		else
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
