#include <stdio.h>
#include "main.h"

/*
 * description - prints nums
 * except 2 and 4
 */
/**
 * print_most_numbers - function loops
 * and print nums from 0 to 9
 * except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			putchar((i % 10) + '0');
		}
	}
	putchar('\n');
}
