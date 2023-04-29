#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t* p, temp;
	size_t i;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);

	p->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	p->len = i;
	p->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = p;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
