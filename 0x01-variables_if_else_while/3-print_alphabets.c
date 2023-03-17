#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXUZ";

	for (int i = 0; i <= 52; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
