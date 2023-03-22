#include <stdio.h>

/**
 * main - Prints the sum of the Fibonacci numbers
 *
 * Return: zero.
 */
int main(void)
{
	long int n1, n2, fn, afn;

	n1 = 1;
	n2 = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			afn += n1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
