#include <stdio.h>
#include "main.h"
/*
 * description - copies string
 * from src pointer to dest
 */
/**
 * *_strcpy - function copies str
 * from src to dest
 *
 * @dest: destination parameter
 * @src: string source
 *
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
