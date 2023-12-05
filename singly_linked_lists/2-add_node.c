#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * _strlen - Length of string.
  *
  * @s: The string.
  *
  * Return: Length.
  */
int _strlen(const char *s)
{
int lenstr = 0;
	while(*s)
	{
		s++;
		lenstr++;
	}
return (lenstr);
}

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
  if (head != NULL && str != NULL)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

return (0);
}
