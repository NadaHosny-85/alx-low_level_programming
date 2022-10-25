#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program inserts
 * a new node at the given
 * position
 */
/**
 * *insert_nodeint_at_index - function
 * inserts a new node at a given index
 *
 * @head: first parameter
 * @idx: given index
 * @n: new node added
 *
 * Return: address of new node
 * NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	listint_t *tmp_node = *head;

	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = tmp_node;
		*head = new_node;
		return (new_node);
	}
	while (i < (idx - 1))
	{
		if (tmp_node == NULL)
		{
			return (NULL);
		}
		if (tmp_node->next == NULL)
		{
			return (NULL);
		}
		tmp_node = tmp_node->next;
	}
	new_node->next = tmp_node->next;
	tmp_node->next = new_node;
	return (new_node);
}
