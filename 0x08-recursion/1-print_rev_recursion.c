#include <stdio.h>
#include <string.h>
#include "main.h"

/*
 * description - program prints string
 * in a reversed order
 */
/**
 * _print_rev_recursion - function
 * prints string in a reversed order
 *
 * @s: first parameter
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		putchar(*s);
	}
	else if (*s == '\0')
	{
		putchar('\n');
	}
}
