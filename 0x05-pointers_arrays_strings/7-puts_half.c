#include <stdio.h>
#include <string.h>
#include "main.h"
/*
 * description - program prints only half
 * of a string
 */
/**
 * puts_half - function prints only half
 * of an input string
 *
 * @str: first parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;

	int i;

	n = strlen(str);
	if (n % 2 != 0)
	{
		n = (strlen(str) - 1);
	}
	for (i = n / 2; i < n; i++)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

