#include <stdio.h>
#include "main.h"

/*
 * description - program prints times tables
 */
/**
 * print_time_tables - function prints time tables
 * from 0 to 15
 *
 * @n: parameter taken to print
 *
 * Return: doesnt have a return
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		break;
	}
	else
	{
		int i;

		int j;

		int res;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				res = i * j;

				if ((j > 0) && (res >= 0 && res <= n))
				{
					putchar(' ');
				}
				if (res == 0)
				{
					putchar('0');
				}
				else if (res >= 0 && res <= n)
				{
					putchar((res % 10) + '0');
