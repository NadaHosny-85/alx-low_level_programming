#include <stdio.h>
#include "main.h"

/*
 * Description: print alphabets
 * in lower case 10 times
 */
/**
 * print_alphabet_x10 - prints alpha
 * 10 times in lower case
 *
 * Return: doesnt have a return
 */
void print_alphabet_x10(void)
{
	int j;

	char alpha;

	for (j = 0; j < 10; j++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
}
