#include <stdio.h>
#include "main.h"
/*
 * description - program prints
 * nums from 0 to 14
 */
/**
 * more_numbers - function prints nums from
 * 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 0 && j <= 9)
			{
				putchar((j % 10) + '0');
			}
			else
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
		}
		putchar('\n');
	}
}
