#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always zero
 */
int main(void)
{
	int i, e, f;

	i = 48;
	e = 48;
	f = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			f = 48;
			while (f < 58)
			{
				if (e < i && i < f)
				{
					putchar(e);
					putchar(i);
					putchar(f);
					if (i == 56 && e == 55 && f == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				f++;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
