#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_t - add a node to the b. of list
 *
 * @h: head of the list
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	while (head != NULL)
	{
	new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
	}

	return (0);
}
