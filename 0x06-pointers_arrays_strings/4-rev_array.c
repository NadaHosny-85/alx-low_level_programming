#include <stdio.h>
#include "main.h"
/*
 * description - program reverses
 * an array
 */
/**
 * reverse_array - function takes
 * an array and its size and reverses it
 *
 * @a: first parameter (array)
 * @n: second parameter size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	int tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
