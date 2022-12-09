#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program returns
 * nth number in the list
 */

/**
 * *get_dnodeint_at_index - function takes input
 * as a list and index of the needed element
 * and returns this element at that specific
 * index
 *
 * @head: pointer to the beginning of the list
 * @index: element needed inside list
 *
 * Return: index of the node needed
 * or NULL if the node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		index--;
	}
	return (head);
}
