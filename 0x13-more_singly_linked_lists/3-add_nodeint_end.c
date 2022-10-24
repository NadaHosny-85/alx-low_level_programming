#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program adds a new
 * node at the end of the list
 */
/**
 * *add_nodeint_end - function adds
 * a new node to the end
 *
 * @head: first parameter
 * @n: list
 *
 * Return: pointer to new element
 * NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;

	listint_t *new_node;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	*head = new_node;
	return (new_node);
}
