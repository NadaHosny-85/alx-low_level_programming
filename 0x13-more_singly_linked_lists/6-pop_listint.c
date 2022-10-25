#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - deletes head
 * node of list
 */
/**
 * pop_listint - function deletes
 * head node of the linked list
 *
 * @head: list parameter
 *
 * Return: 0 if linked list  is empty
 * head node data if not
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;

	int n;

	tmp_node = *head;

	if (tmp_node == NULL)
	{
		return (0);
	}
	*head = tmp_node->next;
	n = tmp_node->n;
	free(tmp_node);
	return (n);
}
