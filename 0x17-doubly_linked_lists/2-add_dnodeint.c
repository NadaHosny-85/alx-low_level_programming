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
 * @head: pointer to the head of the list
 * @n: node to be added
 *
 * Return: address of the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;


	if (*head != NULL)
	{
		(*head)->prev = new_head;
	}

	*head = new_head;

	return (new_head);
}
