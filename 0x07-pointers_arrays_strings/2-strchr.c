#include <stdio.h>
#include "main.h"
/*
 * description - program returns first
 * occurrence of a characer in a string
 */
/**
 * *_strchr - function takes a string
 * and returns first occurrence of character
 *
 * @s: input string
 * @c: char to look for
 *
 * Return: occurrence of first char
 * or null if char doesnt exist
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
