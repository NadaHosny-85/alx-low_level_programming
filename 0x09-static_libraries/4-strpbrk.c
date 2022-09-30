#include <stdio.h>
#include "main.h"
/*
 * description - program compares
 * chars from accept to string
 */
/**
 * *_strpbrk - function returns first occurrence
 * of letter from accept to string
 *
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: chars of first occurrence
 * NULL if it doesnt
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
