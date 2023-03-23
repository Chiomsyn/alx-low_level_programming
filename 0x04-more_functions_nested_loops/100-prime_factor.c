#include <stdio.h>

/**
 * main - prints the largest prime factor of a number.
 * Return: Zero.
 */

int main(void)
{
	long x;
	int i;

	i = 2;
	x = 612852475143;

	while (i)
	{
		if (x % i == 0)
		{
			x = x / i;
		}
		else
		{
			i++;
		}
		if (x == 1)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
