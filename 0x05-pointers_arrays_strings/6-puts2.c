#include "main.h"
#include <stdio.h>

/*
 * description - program prints every
 * other char of a string
 */
/**
 * puts2 - function prints every other char
 * of a string starting 1
 *
 * @str: string parameter
 *
 * Return: void
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		putchar(*str);
		str++;
		if (*str != '\0')
		{
			str++;
		}
	}
	putchar('\n');
}
