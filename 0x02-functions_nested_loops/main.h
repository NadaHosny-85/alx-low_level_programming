#include <string.h>
#ifndef MAIN_H
#define MAIN_H
/**
 * PrintStr - function prints a string
 * using putchar function
 *
 * Return: always 0
 */
int PrintStr(void)
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

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
#endif
