#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * description : this program gets
 * a doubly linked list and print
 * its elements
 */

/**
 * print_dlistint - function takes a struct of
 * doubly linked list and prints its elements
 *
 * @h: pointer to the head of the first element
 * inside the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
		count++;
	}

	return (count);
}
