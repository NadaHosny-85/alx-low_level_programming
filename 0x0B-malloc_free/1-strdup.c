#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * description - program allocates a new
 * array copied of the given
 */
/**
 * *_strdup - function prints allocated
 * copy of string
 *
 * @str: first parameter
 *
 * Return: NULL or copied string
 */
char *_strdup(char *str)
{
	char *str_cpy = NULL;

	unsigned int i = 0;

	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	str_cpy = malloc(sizeof(char) * size);
	if (str_cpy != NULL)
	{
		while (str[i] != '\0')
		{
			str_cpy[i] = str[i];
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
