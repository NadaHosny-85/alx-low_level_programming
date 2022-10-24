#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * descrition - program prints
 * all elements of a singly linked
 * list
 */
/**
 * print_listint - function takes
 * a singly linked list and prints it
 *
 * @h: parameter
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;

	int list_cnt = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		list_cnt++;
		current = current->next;
	}
	return (list_cnt);
}
