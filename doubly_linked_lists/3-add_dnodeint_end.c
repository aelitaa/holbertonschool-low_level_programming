#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add a node to the e. of list
 *
 * @head: head of the list
 * @n: integer 
 * Return: new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new;

new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;
new->next = NULL;

if (*head != NULL){
	dlistint_t *temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
}
else
{
	new->prev = NULL;
	*head = new;
}

return (new);
}
