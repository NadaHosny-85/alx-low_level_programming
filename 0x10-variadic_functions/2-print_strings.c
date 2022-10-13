#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/*
 * description - program prints
 * a string with separators
 */
/**
 * print_strings - function prints
 * strings separated by strings
 *
 * @separator: first parameter
 * @n: second parameter
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	char *str;

	va_list in_args;

	va_start(in_args, n);

	while (i < n)
	{
		str = va_arg(in_args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
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
