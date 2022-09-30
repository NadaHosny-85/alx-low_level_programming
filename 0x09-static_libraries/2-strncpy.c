#include <stdio.h>
#include "main.h"
/*
 * description - program copies
 * input string
 * to dest
 *
 */
/**
 * *_strncpy - function copies
 * num of bytes from string
 * to dest string
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes to be copied
 *
 * Return: a pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_len = 0;

	while (src[i++])
	{
		src_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = src_len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
