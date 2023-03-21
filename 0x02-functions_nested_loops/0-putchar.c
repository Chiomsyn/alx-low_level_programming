#include <stdio.h>
#include <string.h>
/**
 * main - Printsnthe character _putchar
 *
 * Return: On success 0
 *
 */
int main(void)
{
	char val[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int len = strlen(val);
	int i = 0;

	while (i < len)
	{
		putchar(val[i]);
		i++;
	}
	putchar("\n");
	return (0);
}
