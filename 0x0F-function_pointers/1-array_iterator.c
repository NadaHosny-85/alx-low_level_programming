#include <stdio.h>
#include "function_pointers.h"
/*
 * description - program performs
 * an action on the array
 */
/**
 * array_iterator - function iterates
 * through array and performs action 
 *
 * @array: first arr parameter
 *
 * @size: size of array
 * @action: what happens to elements of array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		while (size!= 0)
		{
			action(*array);
			array++;
			size--;
		}
	}
}
