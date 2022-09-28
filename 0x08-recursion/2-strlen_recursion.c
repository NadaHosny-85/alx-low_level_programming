#include <stdio.h>
#include "main.h"
/*
 * description - program prints count
 * of chars
 */
/**
 * _strlen_recursion - function counts
 * string chars
 *
 * @s: first parameter
 *
 * Return: string count
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
