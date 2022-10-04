#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * description - program fills up
 * size of array with char
 */
/**
 * *create_array - function fills
 * space allocated to array
 * with static char
 *
 * @size: first parameter
 * @c: second parameter
 *
 * Return: NULL if size is zero
 * or code fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	else if (size != 0)
	{
		arr = malloc(sizeof(char) * size);
		if (arr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
		}
	}
	return (arr);
}
