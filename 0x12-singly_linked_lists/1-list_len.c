#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
 * description - program returns number
 * of elements in a linked list
 */
/**
 * list_len - function returns number of
 * elements in a linked list
 *
 * @h: list parameter
 *
 * Return: number of elemens
 * in linked lists
 */
size_t list_len(const list_t *h)
{
	size_t elem_cnt;

	for (elem_cnt = 0; h; elem_cnt++)
	{
		h = h->next;
	}
	return (elem_cnt);
}
