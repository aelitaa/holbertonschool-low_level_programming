#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a doubly-linked list
 *
 * @head: head of the list
 * @index: index of the node
 * Return: nth node of a list or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0;

    while (head != NULL)
    {
        if (count == index)
        {
            return (head);
        }
        head = head->next;
        count++;
    }

    return (NULL);
}
