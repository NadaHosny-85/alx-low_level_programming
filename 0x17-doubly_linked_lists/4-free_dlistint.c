#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * description - program frees doubly
 * linked list
 */

/**
 * free_dlistint - function frees a list
 *
 * @head: a pointer to the head
 * of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
