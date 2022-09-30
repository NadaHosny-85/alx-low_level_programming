#include <stdio.h>
#include "main.h"
/*
 * description - program converts
 * a string to integer
 */
/**
 * _atoi - function converts string
 * to integer
 *
 * @s: string parameter
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;

	int j;

	int n = 0;

	int m = 1;

	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
		{
			m *= -1;
		}
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
}
