#include <stdio.h>
#include "main.h"
/*
 * description - program concatenates
 * two strings
 */
/**
 * *_strncat - function takes a num
 * of chars and concatenates only this
 * num not the whole string
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: num of chars to be concatenated
 *
 * Return: concatenated value
 */
char *_strncat(char *dest, char *src, int n)
{
	int end_dest = 0;

	int i;

	while (dest[end_dest] != '\0')
	{
		end_dest++;
	}
	for (i = 0; i < n; i++)
	{
		dest[end_dest] = src[i];
		end_dest++;
	}
	return (dest);
}
