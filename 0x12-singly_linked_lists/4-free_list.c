#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/*
 * description - program frees
 * a linked llist
 */
/**
 * free_list - function frees a linked list
 *
 * @head: first parameter
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head->str);
		free(head);
		head = tmp_node;
	}
}
