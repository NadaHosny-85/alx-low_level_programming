#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/*
 * description - program adds a new node
 * at the beginning of the linked list
 */
/**
 * *add_node - function adds a new node
 * at the beginning of linked list
 *
 * @head: first parameter
 * @str: second parameter
 *
 * Return: address for new element
 * Null if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicated_str;

	int i = 0;

	list_t *new_node;

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
	if (duplicated_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = duplicated_str;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
