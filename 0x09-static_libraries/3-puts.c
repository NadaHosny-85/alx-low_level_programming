#include <stdio.h>
#include "main.h"
/*
 * description - program prints
 * string
 */
/**
 * _puts - function prints string
 *
 * @s: str parameter
 *
 * Return: void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
}
