#include <stdio.h>
#include "main.h"
/*
 * description - program returns first
 * occurrrence of char in string
 *
 */
/**
 * *_strchr - function takes a string
 * and returns first occurrence of it
 *
 * @s: input string
 * @c: character to search for
 *
 * Return: occurrence of char
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
