#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t i;


	i = 1;
	while (h->next != NULL)
	{
		if (h->data == NULL)
			return (0);
		h = h->next;
		i++;
	}
	return (i);
}
