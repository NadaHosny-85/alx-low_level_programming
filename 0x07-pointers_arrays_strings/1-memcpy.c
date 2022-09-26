#include <stdio.h>
#include "main.h"
/*
 * description - program prints part
 * of source based on specific num of chars
 * to another destination
 */
/**
 * *_memcpy - function takes n num of chars from
 * source to a destination
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of chars to be copies
 *
 * Return: dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
