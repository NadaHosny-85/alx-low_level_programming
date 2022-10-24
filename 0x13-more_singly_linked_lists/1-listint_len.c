#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * description - program returns number
 * of elements inside list
 */
/**
 * listint_len - function takes a list
 * and returns the number of elements
 * inside the linked list
 *
 *
 * @h: list parameter
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;

	int list_cnt = 0;

	while (current != NULL)
	{
		list_cnt++;
		current = current->next;
	}
	return (list_cnt);
}
