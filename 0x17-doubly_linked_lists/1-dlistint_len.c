#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * description - this program returns the numbers
 * of elements inside a linked list
 */

/**
 * dlistint_len - function counts elements within
 * a list and retuurns their number
 *
 * @h: pointer to the head of the first node
 *
 * Return: number of elements within list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
