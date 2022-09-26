#include <stdio.h>
#include "main.h"
/*
 * description - program returns occurrence of
 * a string within another
 */
/**
 * *_strstr - function returns occurrence of
 * a string within another
 *
 * @haystack: first parameter
 * @needle: second parameter
 *
 * Return: occurrence of string
 * NULL if it doesnt exist
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
