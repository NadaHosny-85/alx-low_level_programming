#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program prints
 * list
 */
/**
 * print_listint_safe - function prints
 * linked list
 *
 * @head: first parameter
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_node = head;

	size_t i = 0;

	if (head == NULL)
	{
		return (98);
	}
	while (head != NULL)
	{
		printf("[%p] %i\n", (void *)tmp_node, tmp_node->n);
		tmp_node = tmp_node->next;
		i++;
	}
	return (i);
}
