#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * description - program adds a node to the list
 * at the end of it
 */

/**
 * *add_dnodeint_end - function gets list head and
 * adds the new element at the end of it
 *
 * @head: pointer to beginning of list
 * @n: new element to be added
 *
 * Return: pointer to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->data = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while ((*head)->next != NULL)
	{
		*head = *head->next;
	}

	(*head)->next = new_node;
	new_node->prev = *head;
	return (new_node);

