#include <stdio.h>
#include "main.h"
/*
 * description - program
 * encodes alphabets into numbers
 */
/**
 * *leet - function encodes some
 * of the alphabets in a string
 *
 * @str: first parameter
 *
 * Return: a string encoded
 */
char *leet(char *str)
{
	char chars[] = {'a', 'A', 'e', 'E', 'o', 'O',
		't', 'T', 'l', 'L'};

	char encoded_chars[] = {'4', '4', '3', '3', '0', '0',
		'7', '7', '1', '1'};

	int i;

	int j;

	int size = sizeof(chars) / sizeof(chars[0]);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (str[i] == chars[j])
			{
				str[i] = encoded_chars[j];
			}
			else
			{
				continue;
			}
		}
	}
	return (str);
}
