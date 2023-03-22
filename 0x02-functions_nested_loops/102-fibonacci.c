#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: zero.
 */
int main(void)
{
	int i;
	long sum, prev, nxt;

	sum = prev = nxt = 1;
	for (i = 1; i < 50; i++)
	{
		if (i > 1)
		{
			if (sum != 1)
			{
				prev = nxt;
				nxt = sum;
			}
			printf(", ");
		}
		else if (i == 1)
		{
			nxt = 1;
			printf("%d, ", 1);
		}
		else
		{

		}
		sum = prev + nxt;
		printf("%ld", sum);
	}
	printf("\n");
	return (0);
}
