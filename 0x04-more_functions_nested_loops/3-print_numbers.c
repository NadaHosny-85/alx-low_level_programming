#include <stdio.h>
#include "main.h"

/*
 * descriptio - program prints
 * numbers from 0 to 9
 */
/**
 * print_numbers - function prints numbers
 * through loop
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
