#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program reverses
 * a list
 */
/**
 * *reverse_listint - function reverses
 * a given list
 *
 * @head: first parameter
 *
 * Return: pointer to the first
 * node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp_node = NULL;

	listint_t *tp_node = NULL;

	while (*head != NULL)
	{
		tmp_node = (*head)->next;
		(*head)->next = tp_node;
		tp_node = *head;
		*head = tmp_node;
	}
	*head = tp_node;
	return (*head);
}
