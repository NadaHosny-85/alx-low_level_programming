#include <stdio.h>
#include "function_pointers.h"
/*
 * description - program searches for an
 * integer
 */
/**
 * int_index - function searches
 * for an integer
 *
 * @array: first parameter to search within
 * @size: second parameter
 * @cmp: third parameter
 *
 * Return: 1 if exists
 * -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size != NULL || size >= 1)
	{
		if (array != NULL || cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (1);
				}
				i++;
			}
		}
	}
	return (-1);
}
