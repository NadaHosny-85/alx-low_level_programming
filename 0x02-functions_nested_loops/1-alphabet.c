#include <stdio.h>
#include "main.h"

/*
 * Description: program calls function
 * that prints lower case letters
 */
/**
 * print_alphabet - contains function call
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
}
