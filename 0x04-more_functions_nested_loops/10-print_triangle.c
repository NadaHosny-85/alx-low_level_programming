#include <stdio.h>
#include "main.h"
/*
 * description - program prints
 * triangles
 */
/**
 * print_triangle - function prints triangle
 * of # through the input size
 *
 * @size: first parameter
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size == 0 || size < 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = i; j < size; j++)
			{
				putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
