#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program frees
 * a list
 */
/**
 * free_listint2 - function frees
 * linked list
 *
 * @head: parameter
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	while (*head != NULL)
	{
		tmp_node = *head;
		*head = (*head)->next;
		free(tmp_node);
	}
	head = NULL;
}
