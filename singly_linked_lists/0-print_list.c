#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
int count = 0;
	while (h != NULL)
	{
		if (h -> str == NULL)
		printf ("[%d], %s", 0, "(nil)");
		else
		printf ("[%d], %s", h->len, h->str);
	h = h->next;
	count++;
	}
return (count);
}
