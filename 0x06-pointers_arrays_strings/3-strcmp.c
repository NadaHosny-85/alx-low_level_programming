#include <stdio.h>
#include "main.h"

/*
 * description - program compares
 * two strings
 */
/**
 * _strcmp - function takes two strings
 * and compares them
 *
 * @s1: first parameter
 * @s2: second parameter
 *
 * Return: 0 if same
 * negative if s1 less than s2
 * positive if s1 greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	int i;

	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			res = s1[i] - s2[i];
		}
	}
	return (res);
}
