#include "main.h"
#include <stdio.h>
#include <string.h>

/*
 * descrption - program prints string reversed
 */
/**
 * print_rev - function prints string
 * in a reversed way
 *
 * @s: parameter to be printed reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	int i;

	char *rev_s;

	l = strlen(s);

	rev_s = s;
	for (i = 0; i < l - 1; i++)
	{
		rev_s++;
	}

	while (s != '\0')
	{
		putchar(*rev_s);
		rev_s--;
		s++;
	}
	putchar('\n');
}

