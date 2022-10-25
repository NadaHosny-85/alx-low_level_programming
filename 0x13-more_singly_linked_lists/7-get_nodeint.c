#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program checks if node
 * exists inside list
 */
/**
 * *get_nodeint_at_index - function searches
 * for node  inside a linked list
 *
 * @head: first parameter
 * @index: second parameter
 *
 * Return: nth node of linked list
 * NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n = 0;

	while ((n < index) && (head->next != NULL))
	{
		head = head->next;
		n++;
	}
	if (n < index)
	{
		return (NULL);
	}
	return (head);
}
