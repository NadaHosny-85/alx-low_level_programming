#include <stdio.h>
#include <string.h>
#include "main.h"

/*
 * description - program concatenates
 * input strings
 */
/**
 * *_strcat - funcion concatenates  input
 * string parameters
 *
 * @dest: first parameter
 *
 * @src: second parameter
 *
 * Return : the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int end_dest = 0;

	int i = 0;

	while (dest[end_dest] != '\0')
	{
		end_dest++;
	}
	while (src[i] != '\0')
	{
		dest[end_dest] = src[i];
		end_dest++;
		i++;
	}
	return (dest);
}


