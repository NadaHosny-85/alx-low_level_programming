#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/*
 * description - program prints
 * numbers with string seperators
 */
/**
 * print_numbers - function prints a
 * set of nums with seperators
 *
 * @separator: first parameter
 * @n: second parameter
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list in_args;

	va_start(in_args, n);

	while (i < n)
	{
		printf("%d", va_arg(in_args, int));
		if (i != (n - 1))
		{
			if (separator == NULL)
			{
				continue;
			}
			else
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	printf("\n");
	va_end(in_args);
}
