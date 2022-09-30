#include <stdio.h>
#include "main.h"
/*
 * description - program compares
 * two strings
 */
/**
 * _strcmp - function compares two strings
 *
 * @s1: first parameter
 * @s2: secons parameter
 *
 * Return: 0 if same
 * -ve if s1 is less than s2
 * +ve if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	int i = 0;

	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		while (s1[i] != '\0' && res == 0)
		{
			res = s1[i] - s2[i];
			i++;
		}
	}
	return (res);
}
