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
	int i;

	if (n < 0)
	{
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
