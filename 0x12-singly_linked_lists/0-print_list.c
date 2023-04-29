#include "list.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	list_t *p = h;

	while (p->next != NULL)
	{
		if (p->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		i++;
	}
	return (i);
}

