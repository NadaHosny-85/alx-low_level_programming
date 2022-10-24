#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program frees a linked
 * list
 */
/**
 * free_listint - function frees a linked list
 *
 * @head: parameter
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}
