#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program deletes a node
 * at a certain index
 */
/**
 * delete_nodeint_at_index - function deletes
 * a node at a given index
 *
 * @head: first parameter
 * @index: second parameter
 *
 * Return: 1 when delete succeeds
 * -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *d_node;

	listint_t *tmp_node = *head;

	unsigned int i = 0;

	if (tmp_node == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp_node);
		return (1);
	}
	while (node < (index - 1))
	{
		if (tmp_node->next == NULL)
		{
			return (-1);
		}
		tmp_node = tmp_node->next;
		i++;
	}
	d_node = tmp_node->next;
	tmp_node->next = d_node->next;
	free(d_node);
	return (1);
}
