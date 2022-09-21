#include <stdio.h>
#include "main.h"
/*
 * description - program capitalizes
 * all words of a string
 */
/**
 * *cap_string - function takes a string
 * and capitalizes all its words
 *
 * @str: first parameter
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;

	int j;

	int sep[] = {'\n', '\t', ' ', ';', ',', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (sep[j] == str[i] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
			else
			{
				continue;
			}
		}
	}
	return (str);
}
