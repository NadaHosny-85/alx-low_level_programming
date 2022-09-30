#include <stdio.h>
#include "main.h"
/*
 * description - program
 * counts string no of char
 */
/**
 * _strlen - function counts
 * chars of a string
 *
 * @s: string parameter
 *
 * Return: count
 * of chars
 */
int _strlen(char *s)
{
	int str_count = 0;

	while (*s != '\0')
	{
		str_count++;
		s++;
	}
	return (str_count);
}
