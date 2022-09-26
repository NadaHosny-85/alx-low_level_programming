#include <stdio.h>
#include "main.h"

/*
 * description - program fills space
 * with a constant byte
 */
/**
 * *_memset - function fills specific num of bytes
 * with a constant char
 *
 * @s: first array parameter
 * @b: constant byte to fill in
 * @n: number of bytes to fill
 *
 * Return: array of characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
