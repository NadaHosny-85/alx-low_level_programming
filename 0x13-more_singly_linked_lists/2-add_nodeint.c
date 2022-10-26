#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program adds a new
 * node to the list
 */
/**
 * *add_nodeint - function adds a new
 * node to the singly linked list at the
 * beginning
 *
 * @head: first parameter
 * @n: list parameter
 *
 * Return: pointer to new element
 * or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->next = *head;
	}
	*head = new_node;
	return (new_node);
}
