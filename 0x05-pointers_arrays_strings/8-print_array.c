#include <stdio.h>
#include "main.h"
/*
 * description - program prints out an array
 * of elements
 */
/**
 * print_array - function prints array
 * of n elements
 *
 * @a: first param which is array
 * @n: the elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int l;

	int i;

	l = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < l; i++)
	{
		if (i == l - 1)
		{
			printf("%d", &a[i]);
		}
		else
		{
			printf("%d, ", &a[i]);
		}
	}
}
