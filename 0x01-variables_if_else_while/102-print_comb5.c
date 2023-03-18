#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Zero
 */
int main(void)
{
int i, e, g, f;

i = e = g = f = 48;
while (e < 58)
{
	i = 48;
	while (i < 58)
	{
		f = 48;
		while (f < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (g > i && f >= i && g != i && f >= e)
				{
					putchar(e);
					putchar(i);
					putchar(' ');
					putchar(f);
					putchar(g);
					if (f == 57 && i == 56 && e == 57 && g == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				g++;
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
