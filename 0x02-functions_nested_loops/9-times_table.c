#include <stdio.h>
#include "main.h"
/*
 * description - prints times tables
 */
/**
 * times_table - function prints tables
 *
 * Return: doesnt have a return statement
 */
void times_table(void)
{
	int i;

	int j;

	int res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j ++)
		{
			res = i * j;
			putchar((res / 10) + '0');
			putchar((res % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		putchar('\n')
	}
}
