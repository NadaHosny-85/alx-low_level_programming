#include <stdio.h>
#include "main.h"
/*
 * description - this program extracts
 * last digit of number
 */
/**
 * print_last_digit - function extracts
 * last digit of integer
 *
 * @n : value where we will get last digit from
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;
	if (l_digit < 0)
	{
		l_digit = (-1) * l_digit;
	}
	_putchar(l_digit);
	return (l_digit);
}
