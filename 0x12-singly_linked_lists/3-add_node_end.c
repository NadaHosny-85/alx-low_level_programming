#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/*
 * description - program adds
 * a new node at the end of the list
 */
/**
 * *add_node_end - function adds a new
 * node at the end of the linked list
 *
 * @head: first parameter
 * @str: second parameter
 *
 * Return: address of new element
 * Null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicated_str;

	int i = 0;

	list_t *new_node;

	list_t *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	duplicated_str = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = duplicated_str;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (*head);
}
