#include <stdio.h>
#include "main.h"

/*
 * description - this program prints diagonal
 *
 */
/**
 * print_line - function prints
 * diagonal straight line
 *
 * @n: parameter
 * which indicates how many lines
 *
 * Return: 0
 */
void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			for (j = 0; j <= i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
