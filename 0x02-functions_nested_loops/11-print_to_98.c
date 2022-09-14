#include <stdio.h>
#include "main.h"
/*
 * description: this program prints
 * numbers taken till 98
 */
/**
 * print_to_98 - function prints
 * numbers till 98
 *
 * @n: parameter which we start printing with
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d ,", i);							}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n < 98)
	{
		int j;

		for (j = n; j <= 98; j++)
		{
			if (j != 98)
			{
				printf("%d ,", j);							}
			else
			{
				printf("%d\n", j);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
