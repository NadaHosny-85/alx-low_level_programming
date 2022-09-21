#include <stdio.h>
#include "main.h"
/*
 * description - program
 * turns alphabets to upper case
 */
/**
 * *string_toupper - function takes
 * a string as input and turns it into an upper
 * case
 *
 * @str: first parameter
 *
 * Return: upper case alphabets
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			continue;
		}
	}
	return (str);
}
