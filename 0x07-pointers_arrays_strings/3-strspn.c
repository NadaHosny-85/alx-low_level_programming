#include <stdio.h>
#include "main.h"
/*
 * description - program counts
 * bytes from accept in string
 */
/**
 * _strspn - function counts bytes occurrence
 * from accept inside given string
 *
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: count of byes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				count++;
			}
			i++;
		}
		i = 0;
		s++;
	}
	return (count);
}
