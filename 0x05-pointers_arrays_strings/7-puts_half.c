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

	int j;

	char *half_str;

	n = strlen(str);
	half_str = str;
	if (n % 2 != 0)
	{
		n = (strlen(str) - 1);
	}
	for (i = 0; i < n / 2; i++)
	{
		half_str++;
	}
	for (j = n / 2; j < n; j++)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

