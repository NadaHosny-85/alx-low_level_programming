#include <stdio.h>
#include "main.h"
/*
 * description - the program prints squares
 */
/**
 * print_square - prints squares based
 * on input from user
 *
 * @size: parameteer
 *
 * Return: void
 */
void print_square(int size)
{
	int i;

	if (size == 0 || size < 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
