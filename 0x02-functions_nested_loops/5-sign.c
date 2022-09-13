#include <stdio.h>
#include "main.h"
/*
 * description : checks num is positive
 * or negative
 */
/**
 * print_sign - function prints sign of number
 *
 * @n: parameter taken to check sign
 *
 * Return: 1 if positive, 0 if zero
 * -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
