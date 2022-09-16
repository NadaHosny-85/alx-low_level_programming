#include <stdio.h>
#include "main.h"

/*
 * description - prints a straight line
 */
/**
 * print_line - prints lines based on input
 *
 * @n: first parameter
 * which determines how long is the line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
