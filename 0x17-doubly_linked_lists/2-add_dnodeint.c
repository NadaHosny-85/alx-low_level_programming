#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
 * description - program adds a new
 * node at the beginning of the list
 *
 */
/**
 * *add_dnodeint - function gets a list
 * and adds a new node to the beginning
 * of the list
 *
 * @h: pointer to the head of the list
 * @n: node to be added
 *
 * Return: address of the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	

	new_node->data = n;
	new_node->next = *head;
	new_node->prev = NULL;


	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
