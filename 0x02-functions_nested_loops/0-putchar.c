#include <stdio.h>
#include <string.h>
#include "main.h"
/*
 * Description: this program prints a string
 * using putchar
 */
/**
 * PrintStr - printing the string
 *
 * Return: always 0
 */
char PrintStr(void)
{
	char str[] = "_putchar";

	unsigned int i;

	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == '\0')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(str[i]);
		}
	}
	return (0);
}
