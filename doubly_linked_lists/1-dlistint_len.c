#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - prints no of elements
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
while (h != NULL)
	{
	h = h->next;
		count++;
	}

	return (count);
}
