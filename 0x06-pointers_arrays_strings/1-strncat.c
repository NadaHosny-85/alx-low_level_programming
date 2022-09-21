#include <stdio.h>
#include <string.h>
#include "main.h"
/*
 * description - program concatenates
 * num of chars to a string
 */
/**
 * *_strncat - function takes a num
 * of chars and concatenates only this num
 * not the whole string
 *
 * @dest: first parameter which is destination
 *
 * @src: second parameter which is string to be concat
 *
 * @n: num of chars to be concatenated
 *
 * Return: concatenated value
 */
char *_strncat(char *dest, char *src, int n)
{
	int end_dest = 0;

	int i;

	while (dest[end_dest] !='\0')
	{
		end_dest++;
	}
	for (i = 0; i < n; i++)
	{
		dest[end_dest] = src[i];
		end_dest++;
	}
	return(dest);
}
