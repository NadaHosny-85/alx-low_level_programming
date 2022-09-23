#include <stdio.h>
#include "main.h"
/*
 * description - program encodes
 * alphabet with rot13
 */
/**
 * *rot13 - function shifts every letter
 * of the given string by 13 letters
 *
 * @str: first paramete
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char alpha[] = { 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D',
		'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I',
		'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N',
		'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S',
		't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X',
		'y', 'Y', 'z', 'Z'};

	char encoded_alpha[] = {'n', 'N', 'o', 'O', 'p', 'P',
		'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U',
		'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z',
		'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E',
		'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J',
		'k', 'K', 'l', 'L', 'm', 'M'};

	int i;

	int j;

	int size = sizeof(alpha) / sizeof(alpha[0]);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = encoded_alpha[j];
				break;
			}
		}
	}
	return (str);
}


