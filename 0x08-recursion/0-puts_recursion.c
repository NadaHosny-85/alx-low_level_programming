#include <stdio.h>
#include "main.h"

/*
 * description - program uses recursion to print
 * a string
 */
/**
 * _puts_recursion - function prints
 * a string using recursion
 *
 * @s: first parameter
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
	{
		putchar('\n');
	}
}
