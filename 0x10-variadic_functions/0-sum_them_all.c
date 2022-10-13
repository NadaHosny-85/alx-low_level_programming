#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*
 * description - program
 * sums all args
 */
/**
 * sum_them_all - function sums
 * all given args
 *
 * @n: parameter
 *
 * Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;

	unsigned int sum = 0;

	va_list in_args;

	va_start(in_args, n);

	while (i < n)
	{
		sum += va_arg(in_args, int);
		i++;
	}
	va_end(in_args);
	return (sum);
}
