#include <stdio.h>
#include <string.h>
#include "lists.h"
/*
 * description - program prints a singly
 * linked list
 */
/**
 * print_list - function prints all elements
 * of a singly linked lists
 *
 * @h: list parameter
 *
 * Return: number of nodes
 * in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t node_elems;

	for (node_elems = 0; h; node_elems++)
	{
		if (h[str] != NULL)
		{
			printf("[%d] %s\n", h[str_len], h[str]);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h[next];
	}
	return (node_elems);
}
